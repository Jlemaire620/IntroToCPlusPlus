#include "Stack.h"


//Checks the top of the stack to see if it is empty or not.
Hero Stack::Top()
{
	if (!IsEmpty())
	{
		return m_Data[m_Count];
	}
	return Hero();
}
//Pops whatever hero is on the top of the stack as long as the stack is not empty.
bool Stack::Pop()
{
	if (!IsEmpty())
	{
		m_Count = m_Count - 1;
		return true;
	}
	else
	{
       return false;
	}
	
}
//Pushes a new hero onto the stack as long as the stack is not empty.
bool Stack::Push(Hero *)
{
	if (!IsEmpty())
	{
		m_Count = m_Count + 1;
		return true;
	}
	else
	{
        return false;
	}
	
}
//Checks to see if the stack is empty or not.
bool Stack::IsEmpty()
{
	return m_Count == 0;
}
//Checks to see if the stack is full or not.
bool Stack::IsFull()
{
	return m_Count == 10;
}
