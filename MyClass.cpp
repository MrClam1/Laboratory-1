#include "pch.h"
#include "MyClass.h"

MyClass::MyClass(void) {
	SpisokName = gcnew ArrayList();
	SpisokServ = gcnew ArrayList();
	Result = gcnew ArrayList();
}

int MyClass::AddInf(String^ Name, String^ Serv) {
	int id = 0;
	try {
		for (int i = 0; i < SpisokName->Count; i++) {
			if ((String^)SpisokName[i] == Name) {
				if ((String^)SpisokServ[i] == Serv) {
					id = -1;
				}
			}
		}
		if (id != -1) {
			SpisokName->Add(Name);
			SpisokServ->Add(Serv);
			id = SpisokName->IndexOf(Name);
		}
	}
	catch(...) {
		return -2;
	}
	return id;
}

int MyClass::DeleteUser(String^ Name) {
	int id = 0;
	try {
		id = SpisokName->LastIndexOf(Name);
		if (id >= 0) {
			SpisokName->RemoveAt(id);
			SpisokServ->RemoveAt(id);
		}
		else {
			id = -1;
		}
	}
	catch (...) {
		return -2;
	}
	return id;
}

int MyClass::DeleteServ(String^ Serv) {
	int id = 0;
	try {
		id = SpisokServ->LastIndexOf(Serv);
		if (id >= 0) {
			SpisokName->RemoveAt(id);
			SpisokServ->RemoveAt(id);
		}
		else {
			id = -1;
		}
	}
	catch (...) {
		return -2;
	}
	return id;
}

int MyClass::DeleteUserServ(String^ Name, String^ Serv) {
	int id = 0;
	try {
		for (int i = 0; i < SpisokServ->Count; i++) {
			if ((String^)SpisokServ[i] == Serv && (String^)SpisokName[i] == Name) {
				SpisokName->RemoveAt(i);
				SpisokServ->RemoveAt(i);
				id = i;
			}
		}
		if (id < 0) {
			id = -1;
		}
	}
	catch (...) {
		id = -2;
	}
	return id;
}

ArrayList^ MyClass::SortServ(bool need) {
	int check_errors = 0, counts = 0, max = 0, min = SpisokServ->Count, id = -1;
	ArrayList^ Result = gcnew ArrayList();
	try {
		if (need == 0) {
			for (int i = 0; i < SpisokServ->Count; i++) {
				for (int k = 0; k < SpisokServ->Count; k++) {
					if ((String^)SpisokServ[i] == (String^)SpisokServ[k]) {
						counts++;
					}
				}
				if (counts < min) {
					min = counts;
					id = i;
				}
				counts = 0;
			}
			if (id > -1) {
				Result->Add((String^)SpisokServ[id]);
				Result->Add(min);
			}
			else {
				check_errors = 1;
			}
		}
		else {
			if (need == 1) {
				for (int i = 0; i < SpisokServ->Count; i++) {
					for (int k = 0; k < SpisokServ->Count; k++) {
						if ((String^)SpisokServ[i] == (String^)SpisokServ[k]) {
							counts++;
						}
					}
					if (counts > max) {
						max = counts;
						id = i;
					}
					counts = 0;
				}
				if (id > -1) {
					Result->Add((String^)SpisokServ[id]);
					Result->Add(max);
				}
				else {
					check_errors = 1;
				}
			}
			else {
				check_errors = 1;
			}
		}
	}
	catch (...) {
		check_errors = 1;
	}
	if (check_errors == 1) {
		Result->Add(-1);
	}
	return Result;
}
