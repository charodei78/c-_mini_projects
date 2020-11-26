//
// Created by Holli Heimerdinger on 11/23/20.
//

#include <list>
#include <numeric>
#include "Span.hpp"


Span::Span()
{

}

Span::Span(Span &src): _storage(src._storage)
{
	*this = src;
}

Span::~Span()
{

}

Span &Span::operator=(Span const &src)
{
	if (this != &src) {
		this->_storage = src._storage;
	}
	return *this;
}

Span::Span(unsigned int size)
{
	_storage.reserve(size);
}

void Span::addNumber(int num)
{
	if (_storage.size() == _storage.capacity())
		throw std::exception();
	_storage.push_back(num);
}

unsigned Span::longestSpan()
{
	if (_storage.size()  < 2)
		throw std::exception();
	return *std::max_element(_storage.begin(), _storage.end()) -
		*std::min_element(_storage.begin(), _storage.end());
}

unsigned Span::shortestSpan()
{
	std::vector<int>		tmp;

	if (_storage.size()  < 2)
		throw std::exception();
	tmp = _storage;
	std::sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
	return *std::min_element(tmp.begin() + 1, tmp.end());
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (_storage.capacity() - _storage.size() < static_cast<unsigned>(abs(std::distance(end, start))))
		throw std::exception();
	_storage.insert(_storage.end(), start, end);
}
