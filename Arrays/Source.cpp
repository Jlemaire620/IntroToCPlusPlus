# include <iostream>

int main()
{

	char myFirstName[] = { 'J', 'O', 'R', 'D', 'A', 'N' };
	int myFirstNumbers[6];
	for (int i = 0; i < 6; i++)

	{
		myFirstNumbers[i] = (int)myFirstName[i];
		std::cout << myFirstName[i] << std::endl;
	}


	int myArray[5] = { 12,21,3,7,13 };
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j > 5; j++)
		{
			if (myArray[i] < myArray[j]);
			int temp = myArray[5];
			myArray[i] = myArray[j];
			myArray[j] = temp;

		}
		//0,2,4,6,8,10,12,14,16,18
		int Array[10];
		int counter = 0;
		for (int i = 0; i < 20; i += 2)
		{
			Array[counter++] = 1;
		}

		int Arrays[3][3] = { { 1,2,3 }, {4, 5, 6}, {7, 8, 9} };
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				std::cout << Arrays[i][j] << std::endl;
			}
		}
		//Exersize - Arrays
	}
	   //1

	   //int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; Valid
	   //int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; Invalid, more than 5 numbers
	   //double radii[10] = (3.2, 4.7}; Invalid, can not have decimals
	   //int table[7] = { 2, , , 27, , 45, 39 }; Valid
	   //char codes[] = { 'A', 'X', '1', '2', 's' }; Valid
	   //int blanks[]; Invalid, no entries
	   //int collection[-20]; Invalid, can not have a negative
	   //int hours[3] = 8, 12, 16; Invalid, undefined numbers 8, 12, 16

	   //2

	   //int values[] = { 2, 6, 10, 14 };
	   //std::cout << values[2]; Displays 10
	   //std::cout << ++values[0]; Displays 3
	   //std::cout << values[1]++; Displays 6
	   //x = 2; Undefined
	   //std::cout << values[++x]; Undefined
	   //std::cout << values[4]; Unasigned number

		//3

		//int data[10] = { 1,2,3,4,5,6,7,8,9,10 };
		//for (int i = 0; i < 10; ++i)

		//4
		int num1, num2, num3, num4, num5;
		std::cout << "Enter five numbers" << std::endl;
		std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
		int storage[5];
		std::cout << num5 << " " << num4 << " " << num3 << " " << num2 << " " << num1 << std::endl;

		//5
		char Entries[10];
		{
			std::cout << "Enter ten numbers" << std::endl;
		}
		for (int i = 0; i < 10; i++)
		{
			std::cout << Entries[i] << std::endl;
		}

		//6
		int Grid[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
		{
			
		}
		
	
	system("pause");
}

