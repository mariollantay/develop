#include <my_class.h>


my_class::my_class()
{
	//std::cout << "object being created" << std::endl;
	a = 12;
	b = 24;
}

my_class::~my_class()
{
	//std::cout << "object being destroyed" << std::endl;
}

int my_class::sum()
{
	return a + b;
}

int my_class::sum(int x, int y)
{
	return x + y;
}
