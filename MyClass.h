using namespace System;
using namespace System::Collections;
ref class MyClass {
public:
	MyClass(void);
	int AddInf(String^, String^); //Возвращает id элемента, который был записан. Возврашает -1, если объект уже есть (и сайт, который он посещал), -2, если произошла ошибка добавления
	int DeleteUser(String^); //Возвращает айд элемента удаленного всего в списке, если возвращает -1, то значит объект не найден, а если возвращает -2, то произошла ошибка удаления
	int DeleteServ(String^);
	int DeleteUserServ(String^, String^);
	ArrayList^ SortServ(bool); //Принимаем 2 значения: 0 - если надо найти минимум, 1 - если надо найти максимум. Возвращает отсрортированный список

private:
	ArrayList^ SpisokName;
	ArrayList^ SpisokServ;
	ArrayList^ Result;
};
