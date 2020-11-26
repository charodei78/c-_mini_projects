//
// Created by Holli Heimerdinger on 11/19/20.
//

#ifndef CPP_05_ROBOTOMYREQUESTFORM_HPP
#define CPP_05_ROBOTOMYREQUESTFORM_HPP

#include <iostream>

#include "Form.hpp"

class RobotomyRequestForm: public Form
{

private:
	std::string 	_target;

	RobotomyRequestForm();
public:
	static Form* create(std::string target);
	void execute(Bureaucrat const & executor) const;
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm &src);
	~RobotomyRequestForm();
	RobotomyRequestForm &operator=(RobotomyRequestForm const &src);
};


#endif //CPP_05_ROBOTOMYREQUESTFORM_HPP
