#include "Array_Ch.h"

//template<typename T> Array_Ch<T>::Array_Ch()
//{
//}
//
//template<typename T> Array_Ch<T>::~Array_Ch()
//{
//}

template<> Array_Ch<Chat*>::Array_Ch()
{
}

template<> Array_Ch<Chat*>::~Array_Ch()
{
}

template<> void Array_Ch<Chat>::print()
{
	if (_dataPtr)
	{
		for (size_t i = 0; i < _size; i++)
		{
			_dataPtr[i].printMessage();
		}
	}
}

//������������� ������� print ��� ������ Chat* ����������

template<> void Array_Ch<Chat*>::print()
{
	if (_dataPtr)
	{

		for (size_t i = 0; i < _size; i++)
		{
			(*_dataPtr[i]).printMessage(); //message? chat???
		}
	}
};