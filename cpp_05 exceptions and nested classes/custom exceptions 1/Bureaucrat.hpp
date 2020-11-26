//
// Created by Holli Heimerdinger on 11/19/20.
//

#ifndef CPP_05_BUREAUCRAT_HPP
#define CPP_05_BUREAUCRAT_HPP


#include <exception>
#include <iostream>
#include <cstdlib>

class Bureaucrat
{
private:

	int 				_grade;
	std::string const	_name;

	Bureaucrat();

public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat &src);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &src);

	void 		gradeUp();
	void 		gradeDown();

	const std::string &getName() const;
	int getGrade() const;

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream & os, Bureaucrat & src);

#endif //CPP_05_BUREAUCRAT_HPP
