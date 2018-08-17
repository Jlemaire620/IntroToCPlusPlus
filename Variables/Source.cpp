#include <iostream>

int main()
{
	int number;
	number = 23;
	std::cout << number << std::endl;
	number = 37;
	std::cout << number << std::endl;
	number = 16;
	std::cout << number << std::endl;
	
	int numA;
	int numB;
	int sum;
	numA = 21;
	numB = 5;
    sum = numA + numB;

	float lhs, rhs; 
	float fsum;
	lhs = 0.2f;
	rhs = 0.6f;
	fsum = lhs + rhs;
	std::cout << fsum << std::endl;
     
	
	
// main.cpp/main()
	// ...
	// A)
	int numberA = 5;
	numberA = 9;
	numberA = 11;
	numberA = 14;
	std::cout << "A) " << numberA << std::endl;
	//Expected 18 Actual 14
	
	// main.cpp/main()
	// ...
	// B)
	int numberB = 10;
	numberB = 9;
	int thingB = 55;
	thingB = 22;
	std::cout << "B) " << numberB << std::endl;
	//Expected 9 Actual 9

	// main.cpp/main()
	// ...
	// C)
	int numberC = 3;
	numberC = 7;
	numberC = 1;
	int somethingC = 23;
	somethingC = 21;
	numberC = somethingC;
	std::cout << "C) " << numberC << std::endl;
	//Expected 21 Actual 21

	// main.cpp/main()
	// ...
	// D)
	int numberD = 1;
	int somethingD = 3;
	numberD = somethingD;
	std::cout << "D) " << somethingD << std::endl;
	//Expected 3 Actual 3

	// main.cpp/main()
	// ...
	// E)
	int x = 13;
	x = x / 2;
	std::cout << "E) " << x << std::endl;
	//Expected 6 Actual 3


	// main.cpp/main()
	// ...
	// F)
	float y = 13;
	y = y / 2;
	std::cout << "F)" << y << std::endl;
	//Expected 6.5 Actual 6.5
	
	// main.cpp/main()
	// ...
	// Celsius to Fahrenheit)
	float degCelsius = 78.0;
	std::cout << "Enter a temperature in Celsius: "; 
	std::cin >> degCelsius;
    float degFahrenheit = (degCelsius * 1.8) + 32;
	std::cout << "(Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius: " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;
	// ...
	// main.cpp/main()
	// ...
	// Area of a Rectangle)
	float rectWidth = 0.0f; // Modify this variable below.
	float rectHeight = 0.0f; // Modify this variable below.
	 // Modify this variable below.
	std::cout << "Enter the width of the rectangle: ";
	std::cin >> rectWidth;
	std::cout << "Enter the height of the rectangle: ";
	std::cin >> rectHeight;
	float rectArea = rectWidth * rectHeight;
	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl;
	// ...

	// main.cpp/main()
	// ...
	// Average of Five)
	float a, b, c, d, e; // Modify these variables below.
	float avg; // Modify this variable below.
    avg = a = b = c = d = e = 0.0f;
	std::cout << "Enter five numbers: ";
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;
	avg = (a + b + c + d + e) / 5;
	std::cout << "(Average of Five)" << std::endl;
	std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	std::cout << "avg: " << avg << std::endl;
	// ...	// main.cpp/main()
	// ...
	// Fun Facts for Your Age)
	
	
	std::cout << "How many years old are you: ";
    int age = 0;
	std::cin >> age;
    int monthsAlive = age * 12;
	std::cout << " You are " << monthsAlive << " months old! " << std::endl;
	// ...
	system("pause");




}