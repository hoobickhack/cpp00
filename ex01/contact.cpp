/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:51:01 by isouaidi          #+#    #+#             */
/*   Updated: 2024/05/28 19:02:00 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}

std::string Contact::getfirstname()
{
	return(this->_firstName);
}

std::string Contact::getlastname()
{
	return(this->_lastName);
}

std::string Contact::getnickname()
{
	return(this->_nickName);
}

std::string Contact::getphone()
{
	return(this->_phone);
}
std::string Contact::getds()
{
	return(this->_darkSecret);
}

void Contact::setfirstname(std::string a)
{
	this->_firstName = a; 
}

void Contact::setlastname(std::string a)
{
	this->_lastName = a; 
}

void Contact::setnickname(std::string a)
{
	this->_nickName = a; 
}

void Contact::setphone(std::string a)
{
	this->_phone = a; 
}

void Contact::setds(std::string a)
{
	this->_darkSecret = a; 
}

