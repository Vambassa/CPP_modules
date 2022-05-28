#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

std::string readInput(const char *prompt)
{
	std::string	info;

	while (info.empty())
	{
		std::cout << prompt;
		std::getline(std::cin, info);
		if (info.find_first_not_of(" \t\v\r\n") == info.npos)
			info.clear();
		if (!strcmp(prompt, "Phone number: "))
		{
			int cmp_flag = 0;
			for (size_t i = 0; i < info.length(); i++)
			{
				if (!std::isdigit(info[i]) && cmp_flag != 1)
				{
					cmp_flag = 1;
					std::cout << "Phone number must contain only digits" << std::endl;
					info.clear();
				}
			}
		}
	}
	return info;
}

void Contact::setFirstName()
{
	firstName = readInput("First name: ");
}

void Contact::setLastName()
{
	lastName = readInput("Last name: ");
}

void Contact::setNickName()
{
	nickName = readInput("Nickname: ");
}

void Contact::setPhoneNumber()
{
	phoneNumber = readInput("Phone number: ");
}

void Contact::setDarkestSecret()
{
	darkestSecret = readInput("Darkest secret: ");
}

std::string Contact::getFirstName()
{
	return firstName;
}

std::string Contact::getLastName()
{
	return lastName;
}

std::string Contact::getNickName()
{
	return nickName;
}

std::string Contact::getPhoneNumber()
{
	return phoneNumber;
}

std::string Contact::getDarkestSecret()
{
	return darkestSecret;
}