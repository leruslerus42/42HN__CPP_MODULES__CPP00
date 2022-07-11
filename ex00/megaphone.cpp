/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:42:19 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/09 13:11:38 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;

	if ( argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	while (i < argc)
	{
		while (argv[i][j])
		{
			if (argv[i][j] > 96 && argv[i][j] < 123)
				argv[i][j] -= 32;
			if (argv[i][j] != '"')
				std::cout << argv[i][j];
			j++;
		}
		if (i != argc - 1 || argv[i][j-1] != '"')
			std::cout << ' ';
		j = 0;
		i++;
	}
	return (0);
}
