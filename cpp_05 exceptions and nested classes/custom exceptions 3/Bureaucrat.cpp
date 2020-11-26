//
// Created by Holli Heimerdinger on 11/19/20.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	if (this != &src) {
		this->_grade = src._grade;
	}
	return *this;
}

const std::string &Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::gradeUp()
{
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::gradeDown()
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form &form)
{
	try {
		form.beSigned(*this);
		std::cout
		<< this->getName()
		<< " signs "
		<< form.getName() << std::endl;
		std::cout << form << std::endl;
	} catch (std::exception &e) {
		std::cout
		<< this->getName() << " cannot sign "
		<< form.getName() << " because " << e.what() << std::endl;
	}

}

void Bureaucrat::executeForm(const Form &form)
{
	try {
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
		form.execute(*this);
	} catch (std::exception &e) {
		std::cout
		<< this->getName() << " can't execute "
		<< form.getName() << " because "
		<< e.what()
		<< std::endl;
	}
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "too low grade";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "too high grade";
}

std::ostream & operator<<(std::ostream & os, Bureaucrat & src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return os;
}
