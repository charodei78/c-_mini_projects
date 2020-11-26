//
// Created by Holli Heimerdinger on 11/8/20.
//

#include "Phonebook.hpp"


Phonebook::		Phonebook(int max_contacts, t_contact *pContact): contact_max(max_contacts), contact_list(pContact)
{
	this->contact_count = 0;
	std::cout << "New phonebook created! Is available for recording "
	<< this->contact_max
	<<" slots"
	<< std::endl;
}

Phonebook::		~Phonebook()
{
	std::cout << "Phonebook is deleted" << std::endl;
}

void 			Phonebook::add_user()
{
	t_contact 	*tmp_list;

	tmp_list = this->contact_list;
	while (tmp_list->next && tmp_list->index)
		tmp_list = tmp_list->next;

	if (contact_count == contact_max)
	{
		std::cout
		<< "Maximum number of contacts reached"
		<< std::endl;
		return ;
	}
	tmp_list->index = ++contact_count;
	std::cout << "Input first_name: ";
	std::getline(std::cin, tmp_list->first_name);
	std::cout << "Input last_name: ";
	std::getline(std::cin, tmp_list->last_name);
	std::cout << "Input nickname: ";
	std::getline(std::cin, tmp_list->nickname);
	std::cout << "Input login: ";
	std::getline(std::cin, tmp_list->login);
	std::cout << "Input post_address: ";
	std::getline(std::cin, tmp_list->post_address);
	std::cout << "Input email_address: ";
	std::getline(std::cin, tmp_list->email_address);
	std::cout << "Input phone_number: ";
	std::getline(std::cin, tmp_list->phone_number);
	std::cout << "Input birthday_date: ";
	std::getline(std::cin, tmp_list->birthday_date);
	std::cout << "Input favorite: ";
	std::getline(std::cin, tmp_list->favorite);
	std::cout << "Input meal: ";
	std::getline(std::cin, tmp_list->meal);
	std::cout << "Input underwear_color: ";
	std::getline(std::cin, tmp_list->underwear_color);
	std::cout << "Input darkest_secret: ";
	std::getline(std::cin, tmp_list->darkest_secret);
	if (std::cin.eof())
	{
		std::cout << "Unexpected EOF" << std::endl;
		return ;
	}
}

void		 	Phonebook::search_user()
{
	int 		index = 0;
	std::string	tmp;

	if (!this->contact_list->index)
	{
		std::cout << "Database is empty!" << std::endl;
		return ;
	}
	_show_table();
	while (!index)
	{
		std::cout 	<< "Choice contact index: ";
		std::getline(std::cin, tmp);
		if (std::cin.eof())
		{
			std::cout << "Unexpected EOF" << std::endl;
			return ;
		}
		if (!tmp[0])
			continue ;
		index = +tmp[0] - '0';
		if (index > this->contact_count || tmp[1])
		{
			std::cout << "Undefined index: " << tmp << std::endl;
			index = 0;
			continue ;
		}
	}
	_get_contact_line(index);
}

std::string Phonebook::_get_short_line(std::string string)
{
	std::string 	res;

	res = string.substr(0, 10);
	if (string.size() > 10)
		res[9] = '.';
	return res;
}


void			Phonebook::_show_table()
{
	t_contact 	*tmp_list;

	tmp_list = this->contact_list;
	std::cout << "   index    first name last name   nickname    " << std::endl;
	std::cout << "⎡-------------------------------------------⎤" << std::endl;
	while (tmp_list && tmp_list->index)
	{
		std::cout
				<< "|"
				<< std::setw(10) << tmp_list->index
				<< "|"
				<< std::setw(10) << _get_short_line(tmp_list->first_name)
				<< "|"
				<< std::setw(10) << _get_short_line(tmp_list->last_name)
				<< "|"
				<< std::setw(10) << _get_short_line(tmp_list->nickname)
		<< " |" << std::endl;
		tmp_list = tmp_list->next;
	}
	std::cout << "⎣-------------------------------------------⎦" << std::endl;
}

void Phonebook::_get_contact_line(int index)
{
	t_contact 	*tmp_list;

	tmp_list = this->contact_list;
	while (tmp_list && tmp_list->index != index)
		tmp_list = tmp_list->next;
	if (tmp_list)
	{
		std::cout << "===================================" << std::endl;
		std::cout << "index: " << tmp_list->index << std::endl;
		std::cout << "first name: " << tmp_list->first_name << std::endl;
		std::cout << "last name: " << tmp_list->last_name << std::endl;
		std::cout << "nickname: " << tmp_list->nickname << std::endl;
		std::cout << "login: " << tmp_list->login << std::endl;
		std::cout << "postal address: " << tmp_list->post_address << std::endl;
		std::cout << "email address: " << tmp_list->email_address << std::endl;
		std::cout << "phone number: " << tmp_list->phone_number << std::endl;
		std::cout << "birthday date: " << tmp_list->birthday_date << std::endl;
		std::cout << "favorite: " << tmp_list->favorite << std::endl;
		std::cout << "meal: " << tmp_list->meal << std::endl;
		std::cout << "underwear color: " << tmp_list->underwear_color << std::endl;
		std::cout << "darkest secret: " << tmp_list->darkest_secret << std::endl;
		std::cout << "===================================" << std::endl;
	}
	else
		std::cout << "404 Not Found" << std::endl;
}
