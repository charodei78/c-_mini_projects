//
// Created by Holli Heimerdinger on 11/10/20.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void			error_exit(std::string error)
{
	std::cout << error << std::endl;
	exit(0);
}

int 			main(int argc, const char *argv[])
{
	if (argc != 4 || !std::strlen(argv[1]) || !std::strlen(argv[2]) || !std::strlen(argv[3]))
		error_exit("bad input!");

	std::ifstream 		srcFile(argv[1]);
	std::string 		res;
	long 				index;
	size_t 				s1_len;
	size_t 				s2_len;
	std::stringstream 	ss;

	index = 0;
	s2_len = std::strlen(argv[3]);
	s1_len = std::strlen(argv[2]);
	if (!srcFile.is_open())
		error_exit("File can't be open!");
    ss << srcFile.rdbuf();
    res = ss.str();
	srcFile.close();

	while(index + s1_len < res.length())
	{
		if ((index = res.find(argv[2], index)) < 0)
			break ;
		res.replace(index, s1_len, argv[3]);
		index += s2_len;
	}

	std::ofstream		dstFile(std::strcat(const_cast<char *>(argv[1]), const_cast<char*>(".rep")));

	if (!dstFile.is_open())
		error_exit("Cant write to file");
	else
	{
		dstFile << res;
		dstFile.close();
	}
	return 0;
}