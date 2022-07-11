/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:46:13 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/09 17:31:20 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"
#include <stdlib.h>

Phonebook::Phonebook(){
	//std::cout << "Constructor of Phonebook called" << std::endl;
}

Phonebook::~Phonebook(){
	//std::cout << "Deconstructor of Phonebook called" << std::endl;
}

int	Phonebook::replace_contact()
{
	int		i;
	
	i = 0;
	while (i < 7)
	{
		contacts[i] = contacts[i+1];
		i++;
	}
	return (0);
}

std::string	Phonebook::add_contact_routine(std::string s)
{
	std::cin.clear();
	std::cout << std::endl << "Enter the " << s << " of your contact." << std::endl;
	std::getline(std::cin, s);
	while (s.empty())
	{
		std::cout << "You cannot let empty fields! Please reinsert this field." << std::endl;
		std::getline(std::cin, s);
	}
	return (s);
}

void	Phonebook::add_contact(int i)
{
	std::string s;
	if (i == 8)
		i = replace_contact();

	s = add_contact_routine("first name");
	contacts[i].set_first_name(s);
	s = add_contact_routine("last name");
	contacts[i].set_last_name(s);
	s = add_contact_routine("nickname");
	contacts[i].set_nick_name(s);
	s = add_contact_routine("phone number");
	contacts[i].set_phone_number(s);
	s = add_contact_routine("darkest secret");
	contacts[i].set_darkest_secret(s);
}

void	Phonebook::printer(std::string s)
{
	int	len;
	int	spaces;
	int	i;
	
	i = 0;
	len = s.length();
	spaces = 0;
	if (len < 10)
		spaces = 10 - len;
	std::cout << s;
	while (spaces --)
	{
		std::cout << " ";
	}
}

void	Phonebook::display_contact(Contact contact, int i)
{	
	std::cout << "*" << "     " << i+1 << "      | ";
	printer(contact.get_first_name());
	std::cout << " | ";
	printer(contact.get_last_name());
	std::cout << " | ";
	printer(contact.get_nick_name());
	std::cout << "   " << "*" << std::endl;
}

void	Phonebook::display_full_phonebook()
{
	int			i;
	std::string	s;

	i = 55;
	while (i--)
		std::cout << "*";
	std::cout << std::endl << "*" << "   INDEX    | FIRST NAME |  LAST NAME |  NICKNAME  *" << std::endl;
	i = 55;
	while (i--)
		std::cout << "*";
	std::cout << std::endl;
	i = 0;
	while (i < 8)
	{
		display_contact(contacts[i], i);
		i++;
	}
	i = 55;
	while (i--)
		std::cout << "*";
	std::cout << std::endl;
}


void	Phonebook::search_contact_by_index()
{
	int			index;
	std::string	s;

	std::cout << "Enter the index of the contact you would like to be seen, between 1 and 8." << std::endl;
	std::getline(std::cin, s);
	std::cin.clear();
	try {
		index = std::stoi(s);
		if (index > 9 || index < 0)
			return ;
	} catch (std::exception invalid_index) {
		std::cout << "Invalid index. Please be sure to insert an index between 1 and 8." << std::endl;
		return ;
	}
	
	std::cout << index << std::endl;


	
	std::cout << "First Name : " << contacts[index-1].get_first_name() << std::endl;
	std::cout << "Last Name : " << contacts[index-1].get_last_name() << std::endl;
	std::cout << "Nickname : " << contacts[index-1].get_nick_name() << std::endl;
	std::cout << "Phone Number : " << contacts[index-1].get_phone_number() << std::endl;
	std::cout << "Darkest Secret : " << contacts[index-1].get_darkest_secret() << std::endl;
}
