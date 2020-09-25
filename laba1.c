// 7. Ввести 10 действительных чисел, вывести максимальное по абсолютной величине число.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float x[10];
	int i;
	float max = 0;
	for (i = 0; i < 10; i++)
	{
		printf("Enter number %d\n", i + 1);
		scanf("%f", &x[i]);
	}
	for (i = 0; i < 10; i++)
	{
		if (x[i] < 0)
		{
			if ((x[i] * (-1)) > max)
			{
				max = x[i] * (-1);
			}
		}
		else
		{
			if (x[i] > max)
			{
				max = x[i];
			}
		}
	}
	printf("Answer is %f", max);
	return 0;
}