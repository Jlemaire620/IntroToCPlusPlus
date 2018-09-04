#include <iostream>
#include <string>

int main()
{
	/*char name[] = "Jordan";
	int count = 6;
	for (int i = 0; i < count; i++)
	{
		
		name[0];
		name[count];
		std::cout << int (name[i]) << std::endl;
	}

	char array[] = "AIEUS";
	int num = 0;
	while (array[num] != '\0')
	{
		num++;
	}
	std::cout << num << std::endl;

	char stringOne[] = "Jordan";
	char stringTwo[] = "Jordon";

	int countOne = 0;
	int countTwo = 0;

	for (int i = 0; stringOne[countOne] != '\0'; i++)
	{
		countOne++;
	}

	for (int i = 0; stringTwo[countTwo] != '\0'; i++)
	{
		countTwo++;
	}
	bool isSame = true;

	if (stringOne == stringTwo)
	{
		for (int i = 0; i < countOne; i++)
		{
			if (stringOne[i] == stringTwo[i])
			{
				continue;
			}
			else;
			{
				isSame = false;
				break;
			}
		}
	}*/


	//1
	char name[30];
	std::cout << "Enter your first and last name:" << std::endl;
	std::cin.getline(name, 30);

	//2
	char name1[40];
	int i;
	std::cout << "Enter your first and last name:" << std::endl;
	std::cin.getline(name1, 40);
	for (i= strlen(name1); i >= 0; i--)
	{
		std::cout << name1[i];
	}std::cout << std::endl;

	//3
	char name2[10];
	char name3[10];
	char name4[10];
	char name5[10];
	char name6[10];
	int j, k, l, m, n;
	std::cout << "Enter five names" << std::endl;
	std::cin >> name2, name3, name4, name5, name6;
	for (j = strlen(name2); j >= 0; j--)
	{
		std::cout << name2[j];
	}std::cout << std::endl;

	//4
	std::cout << '\a';

	//5
	char username[40];
	char password[40];
	std::cout << "Enter a username" << std::endl;
	std::cin >> username;
	std::cout << "Enter an 8 or more character password that contains a capital letter,number, and a symbol" << std::endl;
	std::cin >> password;
	while (strlen(password) >= 8)
    if (password[0] >= 65 && password[0] <= 90)
	{
		std::cout << "Capital letter requirement met." << std::endl;
		break;
	}
    if (password[1] >= 65 &&  password[1] <= 90)
	{
		std::cout << "Capital letter requirement met." << std::endl;
		
	}
    if (password[2] >= 65 && password[2] <= 90)
	{
		std::cout << "Capital letter requirement met." << std::endl;
	}
	else
	{
		std::cout << "Your password does not contain a capital letter!" << std::endl;
		std::cout << "Enter your password" << std::endl;
		std::cin >> password;
	}
	if (strlen(password) < 8)
	{
		std::cout << "Your password is too short!" << std::endl;
		std::cout << "Enter a password" << std::endl;
		std::cin >> password;
	}
	else
	{
		std::cout << "Valid Password" << std::endl;
	}
	

	//6
	char user[50];
	char intended[] = { 'U', 's', 'r' };
	std::cout << "Enter a username that begins with 'usr'" << std::endl;
	std::cin >> user;
	if (strcmp(user, intended) == 0)
	{
		std::cout << user << std::endl;
	}
	else
	{
		std::cout << "Invalid Entry" << std::endl;
		std::cout << "Re-enter your username." << std::endl;
		std::cin >> user;
	}
	char pass[50];
	char intent[] = { 'P', 'a', '5', '5', 'w', '0', 'r', 'd' };
	std::cout << "Enter the password Pa55w0rd. " << std::endl;
	std::cin >> pass;
	if (pass != intent)
	{
		std::cout << "Invalid password" << std::endl;
	}
	else
	{
		std::cout << "Password was correct" << std::endl;
	}

	//7
	// A:  char name[4] = "John";
	// Trying to output the name John. The problem is that the letters are not spaced. I would space them out.
	// B:char name[32];
    //   cout << name;
	// Trying to output a name but no characters are assigned. I would add a name that fits the array.
    // C: char name[7] = "Donald";
	//    char surname[7] = "Knuth";
	//    strcat(name, surname);
	// Trying to copy name and surname. Surname should have size of six because it will asign garbage to the seventh slot. 
	// I would change 7 to 6 in the array.
	// D:char errorMsg[5] = "Stop";
	//   errorMsg[strlen(errorMsg)] = "!";
	//   cout << errorMsg;
	// Trying to print out the number of letters in Stop. error message is assigned ! so it will print !.

	//9

	system("pause");
}