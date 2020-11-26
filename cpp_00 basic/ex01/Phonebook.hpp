//
// Created by Holli Heimerdinger on 11/8/20.
//

#ifndef CPP_1_PHONEBOOK_HPP
#define CPP_1_PHONEBOOK_HPP
#include <iomanip>
#include <iostream>
#include <string>

typedef struct 			s_contact
{
	int 				index;
	std::string			first_name;
	std::string			last_name;
	std::string			nickname;
	std::string			login;
	std::string			post_address;
	std::string			email_address;
	std::string			phone_number;
	std::string			birthday_date;
	std::string			favorite;
	std::string			meal;
	std::string			underwear_color;
	std::string			darkest_secret;
	struct s_contact 	*next;
}						t_contact;

class 			Phonebook {

public:
	Phonebook(int max_items, t_contact *pContact);
	~Phonebook();

	void add_user();
	void search_user();

private:
	int			contact_count;
	int			contact_max;
	t_contact	*contact_list;
	
	void _show_table();
	void _get_contact_line(int index);
	static std::string _get_short_line(std::string string);
};


#endif //CPP_1_PHONEBOOK_HPP
