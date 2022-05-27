#include "Header.h"

int main()
{
	Stack<int> s;
	s.create(20);
	s.push(10);
	int x = s.pop();
	s.Resize(5);

	return EXIT_SUCCESS;
}