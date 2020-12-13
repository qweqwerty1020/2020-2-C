﻿// file: srand.c
#include <stdio.h>
#include <stdlib.h>

#include <time.h> // time() 을 위한 헤더파일 포함.

#define MAX 100

int main(void)
{
	long seconds = (long)time(NULL);
	srand(seconds);

	printf("1 ~ %5d 사이의 난수 5개:\n", MAX);
	for (int i = 0; i < 5; i++)
		printf("%5d ", rand() % MAX + 1);
	puts("");

	return 0;
}