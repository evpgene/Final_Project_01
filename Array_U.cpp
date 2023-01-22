#include "Array_U.h"

template<> Array_U<User>::Array_U()
{
}

template<> Array_U<User>::~Array_U()
{
}


//������������� ������� print ��� ������ User
template<> 
void Array_U<User>::print()
{
    if (_dataPtr)
    {

        for (size_t i = 0; i < _size; i++)
        {
           _dataPtr[i].printUser();

        }
    }
};

//������������� ������� print ��� ������ User* ����������

template<>
void Array_U<User*>::print()
{
    if (_dataPtr)
    {

        for (size_t i = 0; i < _size; i++)
        {
            (*_dataPtr[i]).printUser();
        }
    }
};


//������������� ������� findElement ��� ������ User
template<>
int Array<User>::findElement(User user)
{
    int ret{ -1 };
    if (_dataPtr)
    {
        for (size_t i = 0; i < _size; i++)
        {
            if (_dataPtr[i].getLogin() == user.getLogin())
            {
                ret = i;
                break;
            }
        }

        //��������� � ������ ������ � �������, ���� �� ���������!
        //if (ret == -1) 
        //{
        //    throw MyException("No such element in array!");
        //}
    }
    return ret;
};

//������������� ������� findElement ��� ������ User* ���������
template<>
int Array<User*>::findElement(User* user)
{
    int ret{ -1 };
    if (_dataPtr)
    {
        for (size_t i = 0; i < _size; i++)
        {
            if ((*_dataPtr[i]).getLogin() == (*user).getLogin())
            {
                ret = i;
                break;
            }
        }
        if (ret == -1) {
            throw MyException("No such element in array!");
        }
    }
    return ret;
}