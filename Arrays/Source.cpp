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
	}
	system("pause");
}

