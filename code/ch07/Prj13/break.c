// file: address.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;

	while (1) //���ѹݺ� 
	{
		printf("����[����,0(����), ���]�� �Է� �� [Enter] : ");
		scanf("%d", &input);
		printf("�Է��� ���� %d\n", input);
		if (input == 0)
			break; //0�̸� ����.
	}
	puts("�����մϴ�.");

	return 0;
}