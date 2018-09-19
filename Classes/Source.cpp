#include <iostream>
#include <string>

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
		return top() == 0;
	}
	int top()
	{
		return values[20];
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

	int first;
	int second;
	char opp;
	std::cout << "Enter the first number." << std::endl;
	std::cin >> first;
	std::cout << "Enter the second number." << std::endl;
	std::cin >> second;
	std::cout << "Enter the opperation." << std::endl;
	std::cin >> opp;
	switch (opp)
	{
		case '+':
		{
			std::cout << "Result is: " << first + second << std::endl;
			break;
		}
		case '-':
		{
			std::cout << "Result is: " << first - second << std::endl;
			break;
		}
		case '*':
		{
			std::cout << "Result is: " << first * second << std::endl;
			break;
		}
		case '/':
		{
			std::cout << "Result is: " << first / second << std::endl;
		}
	}
	system("pause");
}