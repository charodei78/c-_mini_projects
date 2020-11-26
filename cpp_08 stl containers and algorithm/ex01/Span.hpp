//
// Created by Holli Heimerdinger on 11/23/20.
//

#ifndef CPP_08_SPAN_HPP
#define CPP_08_SPAN_HPP

#include <iostream>
#include <vector>


class Span
{
private:
	std::vector<int> 	_storage;
	Span();

public:
	Span(unsigned size);
	void addNumber(int num);
	void addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
	unsigned shortestSpan();
	unsigned longestSpan();
	Span(Span &src);
	~Span();
	Span &operator=(Span const &src);

};


#endif //CPP_08_SPAN_HPP
