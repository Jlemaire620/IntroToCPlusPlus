#include <iostream>

int main()
{
	int count = 1;
	while (count <= 10)
	{
		
		std::cout << count << (count < 10) ? "," : "";
		count++;
		
	}
	std::cout << std::endl;

	char input;
	do
	{
		std::cout << "Press 'q' or 'Q' to exit the application";
		std::cin >> input;
	} while (input != 'q' && input != 'Q');
	
	int i = 10;
    for (int i = 0; i <= 10; i += 2)
	{
		std::cout << i << std::endl;
	}
	std::cout << "Excersize 1" << std::endl;

	//Excersize 1
	int n = 0;
	for (int n = 100; n >= 0; n -= 1)
	{
		std::cout << n << std::endl;
	}

	std::cout << "Excersize 1 part 2" << std::endl;
	//Excersize 1 part 2
	int b = 0;
	for (int b = 99; b >= 0; b -= 1)
	{
		std::cout << b << std::endl;
	}

	std::cout << "Excersize 1 part 3" << std::endl;
	//Excersize 1 part 3
	int c = 0;
	for (int c = 100; c >= 1; c -= 1)
	{
		std::cout << c << std::endl;
	}

	std::cout << "Excersize 1 part 4" << std::endl;
	//Excersize 1 part 4
	int d = 0;
	for (int d = 100; d >= 0; d -= 2)
	{
		std::cout << d << std::endl;
	}

	std::cout << "Excersize 2" << std::endl;
	//Excersize 2
	int e = 10;
	for (int e = 0; e <= 100; e += 1)
	{
		std::cout << e << std::endl;
		if (e % 5 == 0 && e % 3 == 0)
		{
			std::cout << "FizzBuzz" << std::endl;
		}
		else if (e % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;
		}
		else if (e % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}

		//Excersize 3
		for (int a = 0; a <= 1000; a += 1)
			if (a % 3 == 0 || a % 5 == 0);


	}

















      system("pause");
}