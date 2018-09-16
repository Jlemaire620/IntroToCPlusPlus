#include <iostream>

//void NewFunction(Variable)
//{
//	number = 30
//
//}
//
//
//struct Variable
//{
//	int number;
//
//};

void NewFunction(int numb1, int numb2)
{
	numb1 = 10;
	numb2 = 20;
	std::cout << numb1 << " " << numb2 << std::endl;
}

struct Variables
{
	int size;
	int length;
};

int main()
{
	//1

	/*int variable = 20;
	std::cout << "Variable: " << variable << std::endl;
	system("pause");
	int&RefToVariable = variable;
	std::cout << RefToVariable << std::endl;
	system("pause");
	std::cout << RefToVariable << std::endl;
	system("pause");
	int&AlternateRef = variable;
	std::cout << AlternateRef << std::endl;
	system("pause");
	int&Nothing;
	int&AlternateRef = RefToVariable;
	AlternateRef = float;*/

	//2

	NewFunction(3, 5);
	system("pause");


	//3

	//NewFunction()
	//std::cout <<  << std::endl;

	//system("pause");

}

