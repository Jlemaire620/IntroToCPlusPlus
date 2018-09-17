#include <iostream>

//class Fighter
//{
//private:
//	int m_health;
//	int m_power;
//
//public:
//	void TakeDamage(int amount);
//	void DoDamage(Fighter &other);
//};  
//
//int main()
//{
//	Fighter* ryu = new Fighter();
//	ryu -> DoDamage (*ryu)
//}

class Stack
{
private:
	int values[20];
	int count = 0;
public:
	bool isEmpty()
	{

	}
	int top()
	{

	}
	void pop()
	{

	}
	void push(int number)
	{
		count++;
	}
};

int main()
{
	Stack stack;
	stack.push(20);
}