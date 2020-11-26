//
// Created by Holli Heimerdinger on 11/22/20.
//

#ifndef CPP_07_ITER_HPP
#define CPP_07_ITER_HPP


#include <cstdio>

template <typename T, typename R>
void 		iter(const T *array, size_t size, R (*f)(T))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

#endif //CPP_07_ITER_HPP
