#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int printpattern(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			printf("%d", j);
		printf("\n");
	}

}
int pattern()
{
	int n;
	printf("정수를 입력하시오:");
	scanf("%d", &n);

	printpattern(n);

	return 0;
}
