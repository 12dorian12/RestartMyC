#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[])
{
	int i = -10;
	for (i ; i < 10; i++)
	{
		printf("%d\n", i % 3);
	}
	return 0;
}