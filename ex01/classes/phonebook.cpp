/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:46:13 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/04/27 09:02:12 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/phonebook.hpp"

using namespace std;

Phonebook::Phonebook(void) {
	int		i = 0;
	int		j = 0;
	
	cout << "Constructor called";
	Phonebook *array = new Phonebook;
	while (i < 5)
	{
		array[i] = "";
		i++;
	}
	return ;
};

Phonebook::~Phonebook(void) {
	cout << "Destructor called";
	return ;
};
