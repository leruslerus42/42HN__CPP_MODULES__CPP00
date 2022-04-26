/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:46:13 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/04/26 10:57:11 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/phonebook.hpp"

using namespace std;

Phonebook::Phonebook(void) {
	cout << "Constructor called";
	return ;
};

Phonebook::~Phonebook(void) {
	cout << "Destructor called";
	return ;
};
