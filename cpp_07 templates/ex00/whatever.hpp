//
// Created by Holli Heimerdinger on 11/22/20.
//

#ifndef CPP_07_WHATEVER_HPP
#define CPP_07_WHATEVER_HPP

template<typename T>
void 		swap(T &item1, T &item2)
{
	T		tmp;

	tmp = item1;
	item1 = item2;
	item2 = tmp;
}

template<typename T>
T	const & max(T &item1, T &item2)
{
	return (item1 > item2 ? item1 : item2);
}

template<typename T>
T	const & min(T &item1, T &item2)
{
	return (item1 < item2 ? item1 : item2);
}


#endif //CPP_07_WHATEVER_HPP
