#include <iostream>

int Mul(int a, int b)
{
	return a * b;
}

int main()
{
	std::cout << Mul(1,   2)   << std::endl;
	std::cout << Mul(1.1, 2.2) << std::endl;
}