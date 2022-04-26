/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:47:48 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/04/26 10:57:08 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/contact.hpp"

using namespace std;

Contact::Contact(void) {
	cout << "Constructor called";
	return ;
};

Contact::~Contact(void) {
	cout << "Destructor called";
	return ;
};