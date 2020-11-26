//
// Created by Holli Heimerdinger on 11/21/20.
//

#include <string>
#include <iostream>

struct Data {
	std::string		s1;
	int				n;
	std::string		s2;
};

void 			*serialize(void)
{
	char 	s1[9];
	int 	n;
	char 	s2[9];
	char 	*serialized = new char[20];

//	generate string
	srand(static_cast<unsigned>(time(nullptr)));
	n = static_cast<int>(rand());
	for (int i = 0; i < 8; ++i) {
		s1[i] = static_cast<char>( 33 + rand() % 63);
		s2[i] = static_cast<char>( 33 + rand() % 63 + 1);
	}
	std::cout
	<< "s1 : " << s1 << std::endl
	<< "n  : " << n << std::endl
	<< "s2 : " << s2 << std::endl;

//	serialize
	for (int i = 0; i < 8; ++i) {
		serialized[i] = s1[i];
	}
	reinterpret_cast<int *>(&serialized[8])[0] = n;
	for (int i = 12; i < 20; ++i) {
		serialized[i] = s2[i - 12];
	}
	return static_cast<void *>(serialized);
}

Data 			*deserialize(void * raw)
{
	Data		*data = new Data;

	data->s1 = std::string(reinterpret_cast<char*>(raw), 8);
	data->n = reinterpret_cast<int *>(raw)[2];
	data->s2 = std::string(&(reinterpret_cast<char*>(raw)[12]), 8);
	return data;
}

int 			main()
{
	void *raw = serialize();

	Data *data = deserialize(raw);
	std::cout
	<< std::endl
	<< "s1 : " << data->s1 << std::endl
	<< "n  : " << data->n << std::endl
	<< "s2 : " << data->s2 << std::endl;
	return (0);
}
