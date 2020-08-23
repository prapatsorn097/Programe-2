#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, i;
	int c = 1;
	scanf("%d%d", &a, &b);
	for (i = 2; i <= a; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			if (c < i)
			{
				c = i;
			}
		}
	}
	printf("%d", c);
	return 0;
}