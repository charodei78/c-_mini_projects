//
// Created by Holli Heimerdinger on 11/19/20.
//

#ifndef CPP_05_FORM_HPP
#define CPP_05_FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
	std::string  const	_name;
	unsigned 	 const	_gradeForSign;
	unsigned 	 const	_gradeForExecute;
	bool 				_isSigned;
private:

	Form();

public:
	Form(const std::string &name, const unsigned int gradeForSign, const unsigned int gradeForExecute);
	Form(Form &src);
	~Form();
	Form &operator=(Form const &src);

	void	beSigned(Bureaucrat const &bureaucrat);

	unsigned int getGradeForSign() const;
	unsigned int getGradeForExecute() const;
	bool isSigned() const;
	const std::string &getName() const;

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	class AlreadySigned: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};


	class GradeTooHighException: public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

};

std::ostream & operator<<(std::ostream & os, Form & src);

#endif //CPP_05_FORM_HPP
