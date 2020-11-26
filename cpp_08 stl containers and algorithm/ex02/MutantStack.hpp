//
// Created by Holli Heimerdinger on 11/23/20.
//

#ifndef CPP_08_MUTANTSTACK_HPP
#define CPP_08_MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>

class MutantStack: public std::stack<T>
{
public:
	typedef T* iterator;
	typedef T const * const_iterator;

	iterator begin()
	{
		if (this->empty())
			throw std::exception();
		return MutantStack::iterator(&this->c[0]);
	}
	iterator end()
	{
		if (this->empty())
			throw std::exception();
		return MutantStack::iterator(&this->c[this->size()]);
	}
	const_iterator begin() const
	{
		if (this->empty())
			throw std::exception();
		return MutantStack::iterator(&this->c[0]);
	}
	const_iterator end() const
	{
		if (this->empty())
			throw std::exception();
		return MutantStack::iterator(&this->c[this->size()]);
	}

};


#endif //CPP_08_MUTANTSTACK_HPP
