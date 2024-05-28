#ifndef PHONE_H
# define PHONE_H

#include "contact.hpp"
#include <iostream>

class PhoneBook 
{
	private :

	Contact contacts[8];
	int index;

	public :

	PhoneBook(void);
	~PhoneBook(void);

	void addcontact();
};

#endif