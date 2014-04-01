#include <iostream>

int main(int argc, char* argv[]) { 
	int n = 0;
	// std::cout << *argv[1];
	for(int i = 0; i < 1000; i++) {
		bool a = (i%3 == 0);
		bool b = (i%5 == 0);
		if (a or b)
			n+=i;
	}

	std::cout << n << "\n";
	return 0;
}