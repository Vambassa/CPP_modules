#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook();
	~PhoneBook();

    void    Add();
    void    Search();
	void	DisplayInfo();

private:
    int index;
    int num_contacts;
    Contact contacts[8];
};

#endif