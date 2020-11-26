//
// Created by Holli Heimerdinger on 11/22/20.
//

#ifndef CPP_07_ARRAY_HPP
#define CPP_07_ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	unsigned 	_size;
	T  			*_arr;
public:
	Array()
	{
		_size = 0;
	}

	Array(unsigned size){
		this->_arr = static_cast<T*>(operator new[](size));
		for (unsigned i = 0; i < size; ++i) {
			new(_arr + i) T();
		}
		this->_size = size;
	}

	Array(Array &src)
	{
		*this = src;
	}
	unsigned size() { return this->_size; }

	~Array(){};

	Array &operator=(Array const &src)
	{
		if (this != &src)
		{
			if (this->_size > 0)
				delete _arr;
			_arr = static_cast<T*>(operator new[](src._size * sizeof(T)));
			this->_size = src._size;
			for (unsigned i = 0; i < src._size; ++i) {
				_arr[i] = src._arr[i];
			}
		}
		return *this;
	}

	T& operator[] (unsigned index)
	{
		if (index >= this->_size)
			throw std::exception();
		return _arr[index];
	};
};



#endif //CPP_07_ARRAY_HPP
