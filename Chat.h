#pragma once
//#include "Array.h"
//#include "Array_U.h"
//#include "User.h"
#include "Array_M.h"

class Chat
{
public:
	Chat();
	~Chat();
	//////void addUser(User& user)
	//////{
	//////	//_users.insertElementBeginning(*user);
	//////	_users.insertElementEnd(&user);
	//////}


	//void printUsers();
	virtual void printMessage();



	void addMessage(Message message)
	{
		_messages.insertElementEnd(message);
		

	}


	
	




protected:

			////����� ������ ������������� ������ ����� ����
	//////Array<User*> _users;
			////����� ������ ��������� ����
			// 
			// 
			// 
			// 

	Array_M<Message> _messages;



};



//void Chat::printUsers()
//{
//	_users.print();
//}
//
//inline void Chat::printMessage()
//{
//	_messages.print();
//}
