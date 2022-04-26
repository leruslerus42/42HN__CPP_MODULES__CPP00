/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:42:19 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/04/26 09:45:03 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;

	if ( argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	while (i < argc)
	{
		while (argv[i][j])
		{
			if (argv[i][j] > 96 && argv[i][j] < 123)
				argv[i][j] -= 32;
			if (argv[i][j] != '"')
				cout << argv[i][j];
			j++;
		}
		if (i != argc - 1 || argv[i][j-1] != '"')
			cout << ' ';
		j = 0;
		i++;
	}


	
	return (0);
}
