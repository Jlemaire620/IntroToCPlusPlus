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
      system("pause");
}