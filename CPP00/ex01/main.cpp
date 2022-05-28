#include "Phonebook.hpp"

int main()
{
    PhoneBook myBook;
	std::string	line;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		getline(std::cin, line);
		if (line == "ADD")
			myBook.Add();
		else if (line == "SEARCH")
		{
			myBook.Search();
			myBook.DisplayInfo();
		}
		else if (line == "EXIT")
			break ;
	}
    return (0);
}