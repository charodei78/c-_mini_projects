//
// Created by Holli Heimerdinger on 11/22/20.
//

#ifndef CPP_08_EASYFIND_HPP
#define CPP_08_EASYFIND_HPP

#include <algorithm>

template<typename T>

bool easyfind(T arr, int find)
{
	typename T::iterator tmp;

	return (std::find(arr.begin(), arr.end(), find) != arr.end());
}


#endif //CPP_08_EASYFIND_HPP
