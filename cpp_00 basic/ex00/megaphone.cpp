/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hheimerd <hheimerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:41:12 by hheimerd          #+#    #+#             */
/*   Updated: 2020/11/08 13:45:24 by hheimerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void			string_toupper(char *string)
{
	for(size_t i = 0 ; i < std::strlen(string) ; i++)
		string[i] = std::toupper(string[i]);
}

int 				main(int argc, char const *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for(int i = 1 ; i < argc ; i++)
	{
		string_toupper((char *)argv[i]);
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return 0;
}
