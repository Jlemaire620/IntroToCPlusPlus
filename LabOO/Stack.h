#pragma once
#include "hero.h"

class Stack
{
private:
	Hero m_Data[10];
	int m_Count;

public:
	Stack()
	{
		m_Count = 0;
	}
	Hero Top();
	bool Pop();
	bool Push(Hero*);
	bool IsEmpty();
	bool IsFull();
};
