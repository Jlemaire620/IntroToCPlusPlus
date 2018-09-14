#include <iostream>

int main()
{
	int variable = 10;
	std::cout << "Variable: " << variable << std::endl;
	system("pause");
	int&RefToVariable = variable;
	std::cout << RefToVariable << std::endl;
	system("pause");
	variable = 30;
	std::cout << RefToVariable << std::endl;
	system("pause");
	
}