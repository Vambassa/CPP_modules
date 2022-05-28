#include "Phonebook.hpp"

PhoneBook::PhoneBook() : index(0), num_contacts(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::Add()
{
    if (index == 8)
        index = 0;
    contacts[index].setFirstName();
    contacts[index].setLastName();
    contacts[index].setNickName();
    contacts[index].setPhoneNumber();
    contacts[index].setDarkestSecret();
    index++;
    if (num_contacts != 8)
        num_contacts++;
}

void	PhoneBook::Search()
{
    if (num_contacts)
    {
        std::cout << "|     index|" << "first name|" << " last name|"  << "  nickname|" << std::endl;
		for (int i = 0; i < 4; ++i)
		{
			std::cout << "|";
			for (int i = 0; i < 10; ++i)
				std::cout << "-";
		}
        std::cout << "|" << std::endl;
        for (int i = 0; i < num_contacts; ++i)
		{
			std::cout << "|" << std::setw(10) << i + 1 << "|";
			if (contacts[i].getFirstName().length() > 10)
				std::cout.write(contacts[i].getFirstName().c_str(), 9).put('.');
			else
				std::cout << std::setw(10) << contacts[i].getFirstName();
			std::cout << "|";
			if (contacts[i].getLastName().length() > 10)
				std::cout.write(contacts[i].getLastName().c_str(), 9).put('.');
			else
				std::cout << std::setw(10) << contacts[i].getLastName();
			std::cout << "|";
			if (contacts[i].getNickName().length() > 10)
				std::cout.write( contacts[i].getNickName().c_str(), 9).put('.');
			else
				std::cout << std::setw(10) << contacts[i].getNickName();
			std::cout << "|" << std::endl;
		}
		for (int i = 0; i < 45; i++)
			std::cout << "-";
		std::cout << std::endl;
    }
    else
        std::cout << "This phonebook is empty." << std::endl;
}

void	PhoneBook::DisplayInfo()
{
	int num;

	while (1)
	{
		std::string number;
		std::cout << "Choose the number of contact you want to display (from 1 to " << num_contacts << "): ";
		std::getline(std::cin, number);
		num = atoi(number.c_str());
		if (num < 1 || num > num_contacts)
			continue;
		break;
	}
	std::cout << "First name: " << contacts[num - 1].getFirstName() << std::endl;
	std::cout << "Last name: " << contacts[num - 1].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[num - 1].getNickName() << std::endl;
	std::cout << "Phone number: " << contacts[num - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contacts[num - 1].getDarkestSecret() << std::endl;
}