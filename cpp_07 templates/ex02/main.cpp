//
// Created by Holli Heimerdinger on 11/22/20.
//

#include "Array.hpp"

int 			main()
{
	std::cout << "test 1" << std::endl;

	Array<int>		test;

	try {
		std::cout << test[0] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "test 2" << std::endl;

	Array<int>		test2(1);
	try {
		std::cout << test2[0] << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "test 3" << std::endl;

	Array<int>		test3(10);

	for (unsigned i = 0; i < test3.size(); ++i) {
		std::cout << test3[i] << std::endl;
	}

	std::cout << "test 4" << std::endl;


	Array<int>		test4(4);

	std::cout << test4[3] << std::endl;
	test4[3] = 10;
	std::cout << test4[3] << std::endl;


	std::cout << "test 4" << std::endl;


	Array<float>		test5(3);

	std::cout << test5[2] << std::endl;
	test5[2] = 1.52f;
	std::cout << test5[2] << std::endl;



	return 0;
}