#include <iostream>
typedef long long ll;

const size_t Fib(const int);

int main()
{
	int x = 25;
	std::cout << Fib(x);

	return 0;
}

const size_t  Fib(const int f_Num)
{
	if (f_Num == 0) return 0;
	if (f_Num == 1) return 1;
	return Fib(f_Num - 1) + Fib(f_Num - 2);
}