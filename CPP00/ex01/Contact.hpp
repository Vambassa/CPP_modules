#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>
#include <iomanip>

class Contact
{
public:
    Contact();
    ~Contact();

	void	setFirstName();
	void	setLastName();
	void	setNickName();
	void	setPhoneNumber();
	void	setDarkestSecret();

    std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickName();
	std::string	getPhoneNumber();
	std::string	getDarkestSecret();

private:
    std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
};

#endif