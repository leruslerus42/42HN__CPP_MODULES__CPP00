/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruslan <ruslan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:46:13 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/05/05 03:20:15 by ruslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/phonebook.hpp"

using namespace std;

Phonebook::Phonebook(void) {
	int		i = 0;
	int		j = 0;
	
	cout << "Constructor called";

	//Phonebook *array = new Phonebook;

	//return ;
};

Phonebook::~Phonebook(void) {
	cout << "Destructor called";
	return ;
};

