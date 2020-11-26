//
// Created by Holli Heimerdinger on 11/19/20.
//

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm()
		:Form("ShrubberyCreationForm", 25, 5)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src)
		:Form("ShrubberyCreationForm", 25, 5)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (this != &src) {
		this->_target = src._target;
	}
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
		:Form("shrubbery creation", 25, 5),
		_target(target)

{
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout << "file called " << this->_target << "_shrubbery, and ASCII trees are written "\
												 "inside it, in the current directory"  << std::endl;
}

Form *ShrubberyCreationForm::create(std::string target)
{
	return new ShrubberyCreationForm(target);
}
