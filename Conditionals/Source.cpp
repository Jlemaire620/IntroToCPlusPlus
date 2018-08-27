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
		//3...attempt.
		int a, b, c, d, e;
		std::cout << "Enter five numbers" << std::endl;
		std::cin >> a >> b >> c >> d >> e;
		if (a > b > c > d > e)
		{
			std::cout << a << b << c << d << e;
		}
		else if (b > a > c > d > e)
		{
			std::cout << b << a << c << d << e;
		}
		else if (c > a > b > d > e)
		{
			std::cout << c << a << b << d << e;
		}
		else if (d > a > b > c > e)
		{
			std::cout << d << a << b << c << e;
		}
		else if (e > a > b > c > d)
		{
			std::cout << e << a << b << c << d;
		}
		else
		{
			std::cout << a << b << c << d << e << std::endl;
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
		//5
		int r = 5;
		int z;
		r = (r == 0) ? 0 : z = 10 / r;

		//6
		int num1, num2;
		char opp;
		std::cout << "Enter two numbers" << std::endl;
		std::cin >> num1 >> num2;
		std::cout << "Which opperation do you want to use: (+), (-), (*), (/), (%)?" << std::endl;
		std::cin >> opp;
		switch (opp)
		{
		case '+':
			std::cout << num1 + num2 << std::endl;
			break;
		case '-':
			std::cout << num1 - num2 << std::endl;
			break;
		case '*':
			std::cout << num1 * num2 << std::endl;
			break;
		case '/':
			std::cout << num1 / num2 << std::endl;
			break;
		case '%':
			std::cout << num1 % num2 << std::endl;
			break;
		default:
			std::cout << "Invalid opperations" << std::endl;

		}
		//7
		char monthPosition;
		std::cout << " Enter the number of a month in the year." << std::endl;
		std::cin >> monthPosition;
		switch (monthPosition)
		{
		case '1':
			std::cout << "January: 31 days long." << std::endl;
			break;
		case '2':
			std::cout << "Febuary: 28 days long." << std::endl;
			break;
		case '3':
			std::cout << "March: 31 days long." << std::endl;
			break;
		case '4':
			std::cout << "April: 30 days long." << std::endl;
			break;
		case '5':
			std::cout << "May: 31 days long." << std::endl;
			break;
		case '6':
			std::cout << "June: 30 days long." << std::endl;
			break;
		case '7':
			std::cout << "July: 31 days long." << std::endl;
			break;
		case '8':
			std::cout << "August: 31 days long." << std::endl;
			break;
		case '9':
			std::cout << "September: 30 days long." << std::endl;
			break;
		case '10':
			std::cout << "October: 31 days long." << std::endl;
			break;
		case '11':
			std::cout << "November: 30 days long." << std::endl;
			break;
		case '12':
			std::cout << "December: 31 days long." << std::endl;
			break;
		}
		//8
		//a.numPos > numNeg True.
		//b.frstChar > scndChar True.
		//c. !(numPos + numNeg) False.
		//d. (numPos == -30) || (numNeg == -55) True.
		//e. (frstPrice >= 4.1) && (frstPrice <= 9.9) True.
		//f. !flag && (scndChar <= ‘R’) False.
		//g. (numPos < 66) || (flag && numPos > 35) True.
		//h. ++numPos == 36 False.
		//i.numPos++ == 36 True.
		//j. (frstChar == ‘j’) || (frstChar == ‘J’) True.

		//9
		//a. (a || b) || (a && b) True
		//b. !((!a) && (a)) || (a && b) True
		//c. !((5 || a) || (!b)) && (!(a) && b) 
		//d.a || b && a
		//e. !a&&b

		
	}system("pause");
	  


}