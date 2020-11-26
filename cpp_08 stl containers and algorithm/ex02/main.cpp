//
// this class extend stack class for add iterator to it
//

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	MutantStack<int> mstack;
	MutantStack<int> mstack_copy;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(54);
	mstack_copy = mstack;
	mstack.pop();
	mstack.push(236);
	mstack.push(63);
	mstack.push(25);
	//[...]
	mstack.push(0);
	std::cout << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "copy" << std::endl;

	MutantStack<int>::iterator it_c = mstack_copy.begin();
	MutantStack<int>::iterator ite_c = mstack_copy.end();


	while (it_c != ite_c)
	{
		std::cout << *it_c << std::endl;
		++it_c;
	}

	return 0;
}