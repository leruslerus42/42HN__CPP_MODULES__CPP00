/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruslan <ruslan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:01:41 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/05/05 02:26:20 by ruslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  PHONEBOOK_H
# define PHONEBOOK_H

#include "./contact.hpp"



class Phonebook{
	public:
	
		Phonebook(void);
		~Phonebook(void);
		Contact Agenda[8];

		void	add(Contact contact);
		void	search(Contact contact);
};


#endif //*******************PHONEBOOK CLASS******************/