/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruslan <ruslan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:30:04 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/05/05 02:19:36 by ruslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  CONTACT_H
# define CONTACT_H

#include <string>

class Contact{
	public:
	
		Contact(void);
		~Contact(void);

		void get_first_name(void);
		void get_last_name(void);
		void get_nickname(void);
		void get_phone_number(void);
		void get_darkest_secret(void);

		void set_first_names(std::string first_name);
		void set_last_name(std::string last_name);
		void set_nickname(std::string nickname);
		void set_phone_number(std::string phone_number);
		void set_darkest_secret(std::string darkest_secret);
		

	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

};


#endif 
//*********************CONTACT CLASS**********************/