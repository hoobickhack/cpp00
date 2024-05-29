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
	int count;

	void addcontact();
	void searchcontact();
	void printcontact();
};

#endif