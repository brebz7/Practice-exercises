#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>


https://www.hackerrank.com/challenges/c-tutorial-strings/problem

int main() {
	std::string a;
	std::string b;
	char temp;

	std::cin >> a;
	std::cin >> b;
	std::cout << a.size() << " " << b.size() << std::endl;
	std::cout << a + b << std::endl;
	temp = b[0];
	b[0] = a[0];
	a[0] = temp;
	std::cout << a << " " << b;

	return 0;
}
