/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:01:41 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/10 00:22:49 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK__H__
#define __PHONEBOOK__H__

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <string>

#include"../includes/contact.hpp"


class Phonebook
{
private:
	
public:
	Contact contacts[8];
	
	Phonebook();
	~Phonebook();
	
	/*Add contact*/
	void		add_contact(int i);
	int			replace_contact();
	std::string	add_contact_routine(std::string s);

	/*Search for a contact*/
	void	display_full_phonebook();
	void	display_contact(Contact contact, int i);
	void	printer(std::string s);
	void	search_contact_by_index();
};










#endif  //!__PHONEBOOK__H__























// #ifndef  PHONEBOOK_H
// # define PHONEBOOK_H
// # define TRUE=1

// #include "contact.hpp"

// class Phonebook{
// 	private:
// 		Contact	contacts[8];
// 		void add(Phonebook phonebook);
// 		void search(Phonebook phonebook);
// 		void exit();
	
// 	public:
// 	Phonebook(void);
// 	~Phonebook(void);

// 	private:
// };


// #endif //*******************PHONEBOOK CLASS******************/