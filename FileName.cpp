#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
//9*9³Ë·¨¿Ú¾÷±í
int main()
{
	int i = 1, j = 1;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <=i; j++)
		{
			printf("%d*%d=%-2d  ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}