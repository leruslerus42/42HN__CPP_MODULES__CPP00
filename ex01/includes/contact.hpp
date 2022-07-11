/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:30:04 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/09 05:47:17 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT__HPP__
#define __CONTACT__HPP__

#include<iostream>
#include <stdlib.h>
#include<stdio.h>

class Contact{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	Contact();
	~Contact();

	void			set_first_name(std::string first_name) ;
	std::string		get_first_name() const;
	void			set_last_name(std::string last_name);
	std::string		get_last_name() const;
	void			set_nick_name(std::string nick_name);
	std::string		get_nick_name()const;
	void			set_phone_number(std::string phone_number);
	std::string		get_phone_number() const;
	void			set_darkest_secret(std::string darkest_secret);
	std::string		get_darkest_secret() const;

};







#endif



















// #ifndef  CONTACT_H
// # define CONTACT_H



// class Contact{
// 	public:
	
// 		Contact(void);
// 		int		index;
// 		char	first_name[20];
// 		char	last_name[20];
// 		char	nick_name[20];
// 		~Contact(void);
// };


// #endif 
// //*********************CONTACT CLASS**********************/