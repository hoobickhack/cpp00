/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:49:36 by isouaidi          #+#    #+#             */
/*   Updated: 2024/05/29 17:48:53 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

bool	isnum(std ::string str)
{
	for (size_t i = 0; i < str.length(); i++)
		if(!std::isdigit(str[i]))
			return (false);
	return (true);
}

void PhoneBook::addcontact()
{
	std::string string;

	if (PhoneBook::index == 8)
		index = 0;
	std::cout << "Enter First Name : ";
	getline(std::cin, string);
	while (string.empty())
	{
		std::cout << "Please enter something : ";
		getline(std::cin, string);
	}
	std ::cout << std ::endl;
	contacts[index].setfirstname(string);
	std::cout << "Enter Last Name : ";
	getline(std::cin, string);
	while (string.empty())
	{
		std::cout << "Please enter something : ";
		getline(std::cin, string);
	}
	std ::cout << std ::endl;
	contacts[index].setlastname(string);
	std::cout << "Enter Nick Name :";
	getline(std::cin, string);
	while (string.empty())
	{
		std::cout << "Please write something : ";
		getline(std::cin, string);
	}
	std ::cout << std ::endl;
	contacts[index].setnickname(string);
	std::cout << "Enter Phone Number : ";
	getline(std::cin, string);
	while (string.empty() || (isnum(string)== false)){
		std::cout << "Please write digits : ";
		getline(std::cin, string);
	}
	std ::cout << std ::endl;
	contacts[index].setphone(string);
	std::cout << "Enter Darkest Secret : ";
	getline(std::cin, string);
	while (string.empty()){
		std::cout << "Please write something : ";
		getline(std::cin, string);
	}
	std ::cout << std ::endl;
	contacts[index].setds(string);
	PhoneBook::index++;
}

std::string modif(std::string str)
{
	if (str.length() > 10)
	{
		str[9] = '.';
		str = str.substr(0,10);
	}
	return(str);
}

void PhoneBook::searchcontact()
{
	count = 0;
	std::cout <<"---------------------------------------------" << std :: endl;
	std::cout << std :: right << "|"<< std::setw(10) << "Index" << "|" << 
	std::setw(10) << "First Name" << "|" <<
	std::setw(10) << "Last Name"<< "|" << 
	std::setw(10) << "Nick name"<< "|" << std :: endl;

	for (int i = 0 ; i < 8; i++)
	{
		std::string  fn = contacts[i].getfirstname();
		std::string  ln = contacts[i].getlastname();
		std::string  nn = contacts[i].getnickname();
		
		fn = modif(fn);
		ln = modif(ln);
		nn = modif(nn);
		
		if (!fn.empty())
		{
			count++;
			std::cout <<"---------------------------------------------" << std :: endl;
			std::cout << std :: right << "|"<< std::setw(10) << i + 1 << "|" << 
			std::setw(10) << fn << "|" <<
			std::setw(10) << ln << "|" << 
			std::setw(10) << nn << "|" << std :: endl;
		}
	}
	std::cout <<"---------------------------------------------" << std :: endl;
	
	PhoneBook::printcontact();
	
}

void PhoneBook::printcontact()
{
	std :: string str;
    int index = -1;

    while (index <= 0 || index > count) {
        std::cout << "Please enter the contact index to display: ";
        std::getline(std::cin, str);

        if (isnum(str))
            index = atoi(str.c_str());
	}
	std::cout << contacts[index - 1].getfirstname() << std::endl;
	std::cout << contacts[index - 1].getlastname() << std::endl;
	std::cout << contacts[index - 1].getnickname() << std::endl;
	std::cout << contacts[index - 1].getphone() << std::endl;
	std::cout << contacts[index - 1].getds() << std::endl;
}
