
#include <string>
#include <iostream>
#include <limits>

void from_char(char c);

void 				printConversion(char c, int i, float f, double d)
{
	std::cout << "char: ";
	if (std::isprint(c))
		std::cout << c;
	else
		std::cout << "impossible";
	std::cout << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void 				printChar(char c, bool impossible)
{

	std::cout << "char: ";
	if (impossible)
		std::cout << "impossible";
	else if(!std::isprint(c))
		std::cout <<  "Non displayable";
	else
		std::cout << c;
	std::cout << std::endl;
}

void 				printInt(int i, bool impossible)
{
	std::cout << "int: ";
	if (impossible)
		std::cout << "impossible";
	else
		std::cout << i;
	std::cout << std::endl;
}

void 				impossible()
{
	std::cout
	<< "char: impossible" << std::endl
	<< "int: impossible" << std::endl
	<< "float: impossible" << std::endl
	<< "double: impossible" << std::endl;
}

bool				is_nan(double number)
{
	return (number != number);
}

bool 				is_inf(double number)
{
	return (std::numeric_limits<double>::infinity() == number);
}

void 				from_double(double const number)
{
	bool 			is_NaN_inf;

	is_NaN_inf = is_inf(number) || is_nan(number);
	printChar(static_cast<char>(number),
			is_NaN_inf || number < CHAR_MIN || number > CHAR_MAX);
	printInt(static_cast<int>(number),
		  is_NaN_inf || number < INT_MIN || number > INT_MAX);
	std::cout << "float: " << number << "f" << std::endl;
	std::cout << "double: " << number << std::endl;
}

void from_char(char c)
{
	printChar(c, false);
	printInt(static_cast<int>(c), false);
	std::cout << "float: " << +c << "f" << std::endl;
	std::cout << "double: " << +c << std::endl;
}


int				 	main(int argc, char **argv)
{
	double 			number;

	if (argc != 2)
		return 1;

	std::string 	argument(argv[1]);

	std::cout.precision(1);
    std::cout.setf(std::ios::fixed);
	try {
		number = std::stod(argument);
		from_double(number);
	} catch (std::invalid_argument) {
		if (argument.length() == 1)
			from_char(static_cast<char>(argument[0]));
		else
			impossible();
	} catch (std::exception &e) {
		impossible();
	}
	return 0;
}

