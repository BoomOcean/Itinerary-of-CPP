#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyandLog(int a, int b)
{
	int result= a*b;
	std::cout << result << std::endl;
}

int main()
{
	MultiplyandLog(95, 4);
	MultiplyandLog(45, 4); 
	MultiplyandLog(942, 4);
	MultiplyandLog(95, 2);
	MultiplyandLog(14, 4);

	std::cin.get();
	return 0;
}