#include <iostream>
#include <string>

int main()
{
	std::string Name = "Jordan Lemaire";
	std::string ID = "s188048";
	std::cout << "Name:" << Name << std::endl;
	std::cout << "ID:" << ID << std::endl;
	

	std::string First;
	std::cout << "Enter your first name..." << std::endl;
	std::cin >> First;
	std::string Last;
	std::cout << "Enter your last name..." << std::endl;
	std::cin >> Last;
	std::cout << "Hello there " << First << " " << Last << std::endl; 

	system("Pause");
}