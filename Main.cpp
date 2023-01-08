//#include "Array.h"
#include "Chat.h"
//#include "User.h"

int main()
{

	//�������� ����������� Array ��� ���� User - ������������
	Array<User>* usersPtr = new Array<User>();
	//�������� ������ �� �������������
	Array<User>& users = *usersPtr;

	//������ ���������� ������������
	User userTmp;
				//Array<User> Usersvvv;
	userTmp.setLogin("tmpUserLogin");
	userTmp.setPass("tmpUserPass");


	users.setNewSize(3);
	users.insertElementBeginning(userTmp);

	//��� ����� ������� ������ ������������ ������������ � ������
	cout << "Pass: " << users[0].getPass() << endl;


	//users.insertElement(1, userTmp);


	//������ ���
	Chat* chat = new Chat;




	//std::cout << "input login: " << endl;
	//string tmplogin;
	//cin >> tmplogin;


	//users.insertElement(1, userTmp);
	//users.print();
	//cout << "user 1" << users[1].getLogin() << endl;
	//cout << "user no: " << users.findElement(userTmp) << endl;

	////////try
	////////{
	////////	chat->addUser(new User(userTmp));
	////////	chat->addUser((*usersPtr)[users.findElement(userTmp)]);
	////////	chat->addUser(users[0]);
	////////}
	////////catch (exception& except)
	////////{
	////////	cout << except.what() << endl;
	////////}



	cout << " print chat users here :" << endl;
	chat->printUsers();
	cout << endl << endl;

	// ������ ���������� ������������ � ��������� ��� � �����
	userTmp.setLogin("tmpUserLogin1");
	userTmp.setPass("tmpUserPass1");
	users.insertElementEnd(userTmp);

	// ���� ������� ������������ � ������������� � ��������� ��� � ��� ������
	chat->addUser(users[usersPtr->findElement(userTmp)]);
	chat->addUser(users[0]);

	//������ ������ ������������ 0 ����� ������������� ������ � ���������, ��� ������ ��������� 
	users[0].setPass("PassChanged");
	cout << "user 0 password: " << users[0].getPass() << endl;

	//������������� ������������� ����
	cout << " print chat ussers here :" << endl;
	chat->printUsers();

	//for pause
	//int tmp_int;
	//cin >> tmp_int;
	//cout << tmp_int << endl;
	//end for pause



	return 0;
}