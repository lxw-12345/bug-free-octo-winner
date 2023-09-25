#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)//注意此为j<=i，不是j<=9
		{

			printf("%d*%d=%d ", i, j, i * j);

		}

		printf("\n");//注意此句的位置
	}

	return 0;
}