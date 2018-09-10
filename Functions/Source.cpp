#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

//int print(std::string input)

	//std::cout << input;
	//return 0;

//int printLetters(std::string input)

	//std::cout << input;
	//return 0;

//bool isMultipleOfThree(int value)

	//bool isMultipleOfThree = (value % 3 == 0);
	//return isMultipleOfThree;

//void PrintValuesTo10()

	//for (int i = 0; i <= 10; i++)
	
		//std::cout << i << "," << std::endl;
	
	

//void printValuesBetween(int low, int high)

	//for (int i = low + 1; i < high; i++)
	//{
		//std::cout << i << "," << std::endl;
		//printValuesBetween(low, high);
	//}  
    //system("pause");

// create a function
//that will take in an array and the length of the array
//the function will return the sum of all the values in the array`
//int ArraySum(int arr[], int size)
//{
	//for (int i = 0; i < 10; i++);
	//{
		//std::cout << size;
	//}

////create a function that will reverse the values in the arrays passed in.
//You will need to pass in an array and the size of the array as arguments
//Cannot use a second array.
//void ArraySwap(int first[], int second)




//5
void CoinToss()
{
	int coin;
	int flip = 0;
	int times = 0;
	std::cout << "How many times do you want to flip the coin?" << std::endl;
	std::cin >> times;
	srand((unsigned)time(0));
	coin = (rand() % 100) + 1;
	while (times != flip)
	{
		if (coin <= 50)
		{
	       std::cout << "The coin came up Heads" << std::endl;
		   coin = (rand() % 100) + 1;
		   flip++;
		}
		else if (coin > 50)
		{
			std::cout << "The coin came up Tails" << std::endl;
			coin = (rand() % 100) + 1;
			flip++;
		}
	}
	
}
//17
void rockPaperScissors()
{
    //17
	bool tie = false;
	int playerChoice;
	std::cout << "Ready to play Rock, Paper, Scissors?" << std::endl;
	std::cout << "Your up first. Press 1 for Rock, 2 for Paper or 3 for Scissors" << std::endl;
	std::cin >> playerChoice;
	srand((unsigned)time(0));
	int computerChoice = (rand() % 3) + 1;
	do
	{
		if (computerChoice == 1 && playerChoice == 1)
		{
			std::cout << "Computer picked: " << computerChoice << std::endl;
			std::cout << "Rock and Rock. Tie game." << std::endl;
			tie = false;
		}
		else if (computerChoice == 2 && playerChoice == 2)
		{
			std::cout << "Computer picked: " << computerChoice << std::endl;
			std::cout << "Paper and Paper. Tie game." << std::endl;
			tie = false;
		}
		else if (computerChoice == 3 && playerChoice == 3)
		{
			std::cout << "Computer picked: " << computerChoice << std::endl;
			std::cout << "Scissors and Scissors. Tie game." << std::endl;
			tie = false;
		}
		else if (computerChoice == 1 && playerChoice == 2)
		{
			std::cout << "Computer picked: " << computerChoice << std::endl;
			std::cout << "Paper beats Rock. Player Wins!" << std::endl;
			tie = true;
		}
		else if (computerChoice == 1 && playerChoice == 3)
		{
			std::cout << "Computer picked: " << computerChoice << std::endl;
			std::cout << "Scissors looses to Rock. Computer Wins!" << std::endl;
			tie = true;
		}
		else if (computerChoice == 2 && playerChoice == 1)
		{
			std::cout << "Computer picked: " << computerChoice << std::endl;
		    std::cout << "Paper covers Rock, Computer Wins!" << std::endl;
			tie = true;
	    }
	    else if (computerChoice == 2 && playerChoice == 3)
	    {
			std::cout << "Computer picked: " << computerChoice << std::endl;
		    std::cout << "Scissors cut Paper. Player Wins!" << std::endl;
			tie = true;
	    }
	    else if (computerChoice == 3 && playerChoice == 1)
	    {
			std::cout << "Computer picked: " << computerChoice << std::endl;
		    std::cout << "Rock breaks Scissors. Player Wins!" << std::endl;
			tie = true;
	    }
	    else if (computerChoice == 3 && playerChoice == 2)
	    {
			std::cout << "Computer picked: " << computerChoice << std::endl;
		    std::cout << "Scissors cut Paper. Computer Wins!" << std::endl;
			tie = true;
	    }
	    else
	    {
		    std::cout << "You didnt enter '1' '2' or '3'! Re-enter your play." << std::endl;
		    std::cin >> playerChoice;
			tie = false;
	    }
		
	} while (tie = false);
}
//15
int powers(int y)
{
	int x = 5;
	{
		x = x * powers(y);
	}
	return x;
}

//10
void MultiplyByIndex(int input_array[], int size, int output_array[])
{
	output_array[0] = input_array[0] * input_array[0];
	output_array[1] = input_array[1] * input_array[1];
	output_array[2] = input_array[2] * input_array[2];
	output_array[3] = input_array[3] * input_array[3];
	output_array[4] = input_array[4] * input_array[4];
	output_array[5] = input_array[5] * input_array[5];
	output_array[6] = input_array[6] * input_array[6];
}
// 16
int lookAndSay(int integers[5])
{
	std::cout << "Enter a five numbers." << std::endl;
	for (int i = 0; i < 5; i++)
	std::cin >> integers[i];
	if (integers[0] = 1)
	{
		std::cout << integers[0] << integers[0] << std::endl;
		return integers[0];
	}
	if (integers[1] = 2)
	{
		std::cout << integers[1] << integers[1] << std::endl;
		return integers[1];
	}
}
int main()
{
	CoinToss();
	rockPaperScissors();
	//int expected = 10;
	//int sizey = 4;
	//int numbs[] = { 4,3,2,1 };
	//int actual = ArraySum(numbs, sizey);
	
	system("pause");
}



