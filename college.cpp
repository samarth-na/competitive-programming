#include <iostream>
using namespace std;

int main() {
	int n = 5;
	for (int i = 1; i <= n; i++) {
		for (int j = n; j > 0; j--) {
			if (i == j) {
				std::cout << "*";
			} else {
				std::cout << j;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
