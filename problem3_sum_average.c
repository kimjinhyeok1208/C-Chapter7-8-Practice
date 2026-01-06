#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count = 0;

int sumNumbers()
{
    int n;
    int sum = 0;

    while (1)
    {
        scanf("%d", &n);

        if (n == 0)
            break;

        sum += n;
        count++;
    }

    return sum;
}

int sum_average()
{
    int sum;
    double average;

    printf("양의 정수를 입력하시오(0 입력 시 종료): ");

    sum = sumNumbers();

    average = (double)sum / count;
    printf("sum = %d\n", sum);
    printf("average = %.2f\n", average);
        
    return 0;
}
