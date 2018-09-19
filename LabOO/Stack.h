#pragma once
#include "hero.h"

class Stack
{
private:
	Hero m_Data[20];
	int m_Count;

public:
	Hero Top();
	bool Pop();
	bool Push(Hero*);
	bool IsEmpty();
	bool IsFull();
};
