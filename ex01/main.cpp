/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:14:40 by isouaidi          #+#    #+#             */
/*   Updated: 2024/05/28 18:08:04 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	PhoneBook phoneBook;
	std :: string Command;

	while (1)
	{
		getline(std::cin, Command);
		if (Command == "ADD")
			phoneBook.addcontact();
		if (Command == "EXIT")
			break;		
	}
	
	
}