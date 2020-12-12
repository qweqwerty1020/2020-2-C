// file: repetition.c
#include <stdio.h>

int main(void)
{
	//모두 동일한 문자열의 단순한 반복
	printf("C 언어 재미있네요!\n");
	printf("C 언어 재미있네요!\n");
	printf("C 언어 재미있네요!\n");

	int n = 1;

	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);

	return 0;
}