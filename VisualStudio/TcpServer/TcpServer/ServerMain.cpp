#include "define.h"
#include <thread>

void test()
{
	printf("test");
}

int main()
{
	std::thread t1(test);
	t1.join();

	return 0;
}