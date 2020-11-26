
#include "Span.hpp"

int main()
{
	Span sp(5);
	Span sp2(10);

	std::vector<int> test(7, 2);
	std::vector<int> test2(3, 7);
	sp.addNumber(5);
	sp.addNumber(8);
	sp.addNumber(17);
	sp.addNumber(-9);
	sp.addNumber(110);
	try {
		sp.addNumber(11);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	sp2.addRange(test.begin(), test.end());
	sp2.addRange(test2.begin(), test2.end());

	try {
		sp2.addRange(test2.begin(), test2.end());
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::vector<int> large;
	Span	lsp(1000);

	srand((unsigned)time(NULL));
	int a = rand() % 1000;
	for (int i =0; i < a; i++){
        int b = rand() % 800 + 1;
        large.push_back(b);
    }
	lsp.addRange(large.begin(), large.end());
	std::cout << lsp.shortestSpan() << std::endl;
	std::cout << lsp.longestSpan() << std::endl;



	return 0;

}