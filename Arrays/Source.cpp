# include <iostream>

int main()
{

	//char myFirstName[] = { 'J', 'O', 'R', 'D', 'A', 'N' };
	//int myFirstNumbers[6];
	//for (int i = 0; i < 6; i++)

	{
		//myFirstNumbers[i] = (int)myFirstName[i];
		//std::cout << myFirstName[i] << std::endl;
	}


	//int myArray[5] = { 12,21,3,7,13 };
	//for (int i = 0; i < 5; i++)
	{
		//for (int j = 0; j > 5; j++)
		{
			//if (myArray[i] < myArray[j]);
			//int temp = myArray[5];
			//myArray[i] = myArray[j];
			//myArray[j] = temp;

		}
		//0,2,4,6,8,10,12,14,16,18
		/*int Array[10];
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
		}*/
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
		int Entries[10];
		int largest;
		int smallest;
		{
			std::cout << "Enter ten numbers" << std::endl;
			for (int i = 0; i < 10; i++)
			std::cin >> Entries[i];
		    largest = Entries[0];
		}
		for (int i = 0; i < 10; i++)
		{
			if (largest < Entries[i])
				largest = Entries[i];
		}
		smallest = Entries[0];
		for (int i = 0; i < 10; i++)
		{
			if (smallest > Entries[i])
				smallest = Entries[i];
		}
		std::cout << "Largest number was.." << largest << std::endl;
		std::cout << "Smallest number was.." << smallest << std::endl;

		//6
		int Grid[3][3] = 
		{
			{1, 2, 3},
		    {4, 5, 6},
		    {7, 8, 9}
		};
		for (int r = 0; r < 3; r++)
		{
			for (int c = 0; c < 3; c++)
			{
				std::cout << Grid[r][c] << " ";
			}
			std::cout << std::endl;
		}

		//7
		int days[2][3] =
		{
			{1, 2, 3},
			{3, 5, 7}
		};
		std::cout << "Row one:" << days[0][0] + days[0][1] + days[0][2] << std::endl;
		std::cout << "Row two:" << days[1][0] + days[1][1] + days[1][2] << std::endl;
		std::cout << "Column one:" << days[0][0] + days[1][0] << std::endl;
		std::cout << "Column two:" << days[0][1] + days[1][1] << std::endl;
		std::cout << "Column three:" << days[0][2] + days[1][2] << std::endl;

		//8
		int turns = 0;
		int characterHealth[5] = { 100, 100, 100, 100, 100 };
		int player;
		std::cout << "Enter a number (0-4) to determine which character will be attacked" << std::endl;
		std::cin >> player;
		while (turns != 5)
		if (player == 0)
		{
			std::cout << "Player 1 was hit!" << std::endl;
			characterHealth[0] - 40;
			std::cout << characterHealth[0] << std::endl;
			std::cout << "Who was hit next?" << std::endl;
			std::cin >> player;
			turns++;
		}
		else if (player == 1)
		{
			std::cout << "Player 2 was hit!" << std::endl;
			characterHealth[1] - 40;
			std::cout << characterHealth[1] << std::endl;
			std::cout << "Who was hit next?" << std::endl;
			std::cin >> player;
			turns++;
		}
		else if (player == 2)
		{
			std::cout << "Player 3 was hit!" << std::endl;
			characterHealth[2] - 40;
			std::cout << characterHealth[2] << std::endl;
			std::cout << "Who was hit next?" << std::endl;
			std::cin >> player;
			turns++;
		}
		else if (player == 3)
		{
			std::cout << "Player 4 was hit!" << std::endl;
			characterHealth[3] - 40;
			std::cout << characterHealth[0] << std::endl;
			std::cout << "Who was hit next?" << std::endl;
			std::cin >> player;
			turns++;
		}
		else if (player == 4)
		{
			std::cout << "Player 5 was hit!" << std::endl;
			characterHealth[4] - 40;
			std::cout << characterHealth[4] << std::endl;
			std::cout << "Who was hit next?" << std::endl;
			std::cin >> player;
			turns++;
		}
		else
		{
			std::cout << "Invalid entry" << std::endl;
			break;
		}
	system("pause");
}

