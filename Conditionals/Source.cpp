#include <iostream>

int main()

{
	int grade = 37;
	char gradeLetter;
	if (grade >= 90)
	{
		gradeLetter = 'A';
	}
    else if (grade >= 80 && grade < 90)
	{
		gradeLetter = 'B';
	}
	else if (grade >= 70 && grade < 80)
	{
		gradeLetter = 'C';
	}
	else if (grade >= 60 && grade < 70)
	{
		gradeLetter = 'D';
	}
	else 
	{
		gradeLetter = 'F';
	}
	
	{
		int input = 0;
		std::cout << "Enter a number" << std::endl;
		std::cin >> input;
        if (input % 5 == 0 && input % 3 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		else if (input % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}
		else if (input % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
	   
	}  

	{
        int lhs, rhs;
	    char op;
		std::cout << "Enter two numbers" << std::endl;
		std::cin >> lhs >> rhs;
		std::cout << "Do you want to Add (+) or Subtract(-)?" << std::endl;
		std::cin >> op;
		switch (op)
		{
		case '+':
			std::cout << lhs + rhs << std::endl;
			break;
		case '-':
			std::cout << lhs - rhs << std::endl;
			break;
		default:
			std::cout << "Invalid math opperation" << std::endl;
			break;
		}

		int health = 100;
		if (health > 0)
		{
			std::cout << "You are alive" << std::endl;
            if (health < 25)
			std::cout << "Your health is critical!" << std::endl;
			std::cout << "Health at.." << health << std::endl;
		}
		else if (health <= 0)
		{
            std::cout << "You Died" << std::endl;
		}
		//1	
		int x;
		int y;
		if (y = 0)
		{
			x = 100;
		}

		//2
		int numb1, numb2;
		std::cout << "Enter two numbers" << std::endl;
		std::cin >> numb1 >> numb2;
		if (numb1 > numb2)
		{
			std::cout << numb1 << std::endl;
		}
		else if (numb2 > numb1)
		{
			std::cout << numb2 << std::endl;
		}
		
		//4
		char userChoice;
		std::cout << "Enter a number bettwen 1 and 4" << std::endl;
		std::cin >> userChoice;
		switch (userChoice)
		{
		case '1':
			std::cout << "1" << std::endl;
			break;
		case '2':
			std::cout << "2" << std::endl;
		case '3':
			std::cout << "3" << std::endl;
			break;
		case '4':
			std::cout << "4" << std::endl;
			break;
		default:
			std::cout << "Invalid";

		}
	}system("pause");
	  


}