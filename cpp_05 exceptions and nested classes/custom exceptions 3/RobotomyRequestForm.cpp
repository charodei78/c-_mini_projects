//
// Created by Holli Heimerdinger on 11/19/20.
//

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
		:Form("RobotomyRequestForm", 25, 5)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src)
		:Form("RobotomyRequestForm", 25, 5)
{
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	if (this != &src) {
		this->_target = src._target;
	}
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
		:Form("RobotomyRequestForm", 25, 5),
		_target(target)

{
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout
	<< "Makes some drilling noises, and tell us that  "
	<< this->_target
	<< " has been robotomized successfully 50% of the time" << std::endl;
}
