//
// Created by Holli Heimerdinger on 11/19/20.
//

#include "Form.hpp"


Form::Form(): _name(""),
			  _gradeForSign(0),
			  _gradeForExecute(0),
			  _isSigned(false)
{

}

Form::Form(Form &src) : _name(src._name),
						_gradeForSign(src._gradeForSign),
						_gradeForExecute(src._gradeForExecute),
						_isSigned(false)
{
	*this = src;
}

Form::~Form()
{

}

Form &Form::operator=(Form const &src)
{
	if (this != &src) {

	}
	return *this;
}

Form::Form(const std::string &name, unsigned gradeForSign, unsigned  gradeForExecute)
		: _name(name),
		_gradeForSign(gradeForSign),
		_gradeForExecute(gradeForExecute),
		_isSigned(false)
{

}

const std::string &Form::getName() const
{
	return _name;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "too low grade";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

std::ostream & operator<<(std::ostream & os, Form & src)
{
	os << src.getName() << ": " << (src.isSigned() ? "signed" : "not signed");
	return os;
}

const char *Form::AlreadySigned::what() const throw()
{
	return "already signed";
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (_isSigned)
		throw Form::AlreadySigned();
	if ((unsigned)bureaucrat.getGrade() > _gradeForSign)
		throw Form::GradeTooLowException();
	_isSigned = true;
}

unsigned int Form::getGradeForSign() const
{
	return _gradeForSign;
}

unsigned int Form::getGradeForExecute() const
{
	return _gradeForExecute;
}

bool Form::isSigned() const
{
	return _isSigned;
}
