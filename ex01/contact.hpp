/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:51:16 by isouaidi          #+#    #+#             */
/*   Updated: 2024/05/29 17:13:07 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <cctype>
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib> 

class Contact
{
	private :

	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phone;
	std::string _darkSecret;	

	public : 

	Contact(void);
	~Contact(void);

	void setfirstname(std::string a);
	void setlastname(std::string a);
	void setnickname(std::string a);
	void setphone(std::string a);
	void setds(std::string a);

	std::string getfirstname();
	std::string getlastname();
	std::string getnickname();
	std::string getphone();
	std::string getds();
};


#endif
