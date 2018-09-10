#include <iostream>


//1
int sequence(int math)
{
	if ((math == 1) || (math == 0))
	{
		return math;
	}
	else
	{
		return (sequence(math - 1) + sequence(math - 2));
	}
}
//2
int powerProblem(int numb1, int numb2)
{
	if (numb2 == 0)
	{
		return (1);
	}
	else if (numb2 == 1)
	{
		return (numb1);
	}
	else
	{
        return (numb1 * powerProblem(numb1, numb2 - 1));
	}
}
int main()
{
	int math, input = 0;
	std::cout << "Enter how many numbers you would like to use in the sequence." << std::endl;
	std::cin >> math;
	std::cout << "The sequence is.." << std::endl;
	while (input < math)
	{
		std::cout << " " << sequence(input) << std::endl;
		input++;
	}
	system("pause");
	return 0;
}