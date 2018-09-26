#include "Stack.h"

Hero Stack::Top()
{
	if (!IsEmpty())
	{
		return m_Data[m_Count];
	}
	return Hero();
}

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

bool Stack::IsEmpty()
{
	return m_Count == 0;
}

bool Stack::IsFull()
{
	return m_Count == 10;
}
