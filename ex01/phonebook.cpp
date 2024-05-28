/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:49:36 by isouaidi          #+#    #+#             */
/*   Updated: 2024/05/28 19:03:23 by isouaidi         ###   ########.fr       */
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

void PhoneBook::addcontact()
{
	
	std::string  string;
	
	if (PhoneBook::index == 8)
		index = 0;
	std::cout << "Enter First Name :" << std::endl;
	getline(std::cin, string);
	contacts[index].setfirstname(string);
	std::cout << "Enter Last Name :" << std::endl;
	getline(std::cin, string);
	contacts[index].setlastname(string);
	std::cout << "Enter Nick Name :" << std::endl;
	getline(std::cin, string);
	contacts[index].setnickname(string);
	std::cout << "Enter Phone Number :" << std::endl;
	getline(std::cin, string);
	contacts[index].setphone(string);
	std::cout << "Enter Darkest Secret :" << std::endl;
	getline(std::cin, string);
	contacts[index].setds(string);
	for (int i = 0 ; i < 8; i++)
	{
			std::cout << "print " << i + 1 << " " << contacts[i].getfirstname() << std::endl;
			std::cout << "print " << i + 1 << " " << contacts[i].getlastname() << std::endl;
			std::cout << "print " << i + 1 << " " << contacts[i].getnickname() << std::endl;
			std::cout << "print " << i + 1 << " " << contacts[i].getphone() << std::endl;
			std::cout << "print " << i + 1 << " " << contacts[i].getds() << std::endl;
			std::cout << std::endl;
	}
	PhoneBook::index ++;	
}
