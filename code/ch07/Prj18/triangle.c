// file: triangle.c

#include <stdio.h>

int main(void)
{
	const int MAX = 10;
	int i, j;

	for (i = 1; i <= MAX; i++)
	{
		printf("%2d ", i);
		for (j = 1; j <= i; j++)
			printf("*");
		puts("");
	}

	return 0;
}