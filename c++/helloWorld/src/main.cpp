#include <iostream>
#include <my_class.h>

int main ()
{
	my_class cosa;
	
	std::cout << cosa.sum() << std::endl;
	std::cout << cosa.sum(3,6) << std::endl;
	return 0;
}

