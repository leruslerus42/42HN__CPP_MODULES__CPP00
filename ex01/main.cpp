/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruslan <ruslan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:02:22 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/05/05 03:20:47 by ruslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/phonebook.hpp"
#include "./includes/contact.hpp"
#include <iostream>


/*
	2 CLASSES
	PHONEBOOK -> Array of Contacts, max 8
				-> If stores the 9th, replace the old one with the new one

	CONTACT -> Stands for a Phonebook contact
	

*/

void initialize_agenda()
{
	
}



int main()
{
	Phonebook instance;
	Contact instance2;
	std::string argv;
	bool	first = 0;

	//ADD/SEARCH/EXIT
	while (1)
	{
		std::getline(std::cin, argv);
		if (argv == "ADD")
		{
			if (first == 0)
			{
				initialize_agenda();
				first = 1;
			}
			else
			{
				/*Replace oldest contact*/
			}
		else if (argv == "SEARCH")
		{
		
		}
		else if (argv == "EXIT")
		{

		}
		else
			cout << "Wrong Input detected; please try another command or type exit to quit."
		
	}

	
}