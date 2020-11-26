#include "Phonebook.hpp"

int	 				main()
{
	std::string 	command;
	t_contact		contact_1;
	t_contact		contact_2;
	t_contact		contact_3;
	t_contact		contact_4;
	t_contact		contact_5;
	t_contact		contact_6;
	t_contact		contact_7;
	t_contact		contact_8;

	contact_1.next = &contact_2;
	contact_2.next = &contact_3;
	contact_3.next = &contact_4;
	contact_4.next = &contact_5;
	contact_5.next = &contact_6;
	contact_6.next = &contact_7;
	contact_7.next = &contact_8;
	contact_8.next = NULL;

	contact_1.index = 0;
	contact_2.index = 0;
	contact_3.index = 0;
	contact_4.index = 0;
	contact_5.index = 0;
	contact_6.index = 0;
	contact_7.index = 0;
	contact_8.index = 0;

	Phonebook 		phonebook(8, &contact_1);

	std::cout << "Input command (ADD, SEARCH or EXIT): ";

	while (std::getline(std::cin, command))
	{
		if (std::cin.eof())
			break ;
		if (!command.compare("ADD"))
			phonebook.add_user();
		else if (!command.compare("SEARCH"))
			phonebook.search_user();
		else if (!command.compare("EXIT"))
			return (0);
		std::cout << "Input command (ADD, SEARCH or EXIT): ";
	}
	std::cout << "Unexpected EOF" << std::endl;
	return 0;
}

