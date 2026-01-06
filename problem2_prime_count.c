#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int prime_count()
{
	int x, y;
	int count = 0;

	printf("정수 2개를 입력하시오:");
	scanf("%d %d", &x, &y);

	for (int i = x; i <= y; i++)
	{
		if (isPrime(i))
			count++;
	}

	printf("Number of primes: %d\n", count);

	return 0;
}