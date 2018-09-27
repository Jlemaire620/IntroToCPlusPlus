#pragma once
#include "hero.h"
//The stacks that are used for getting two teams of heros to fight.
class Stack
{
private:
	//Each stack has hero data and a count.
	Hero m_Data[10];
	int m_Count;

public:
	//Stack has a count and hero. This is where the pop, push, IsEmpty,and IsFull functions are declaired.
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