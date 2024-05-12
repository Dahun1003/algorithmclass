#include <stdio.h>

int divisor(int a, int b);

int main(void)
{
	int num1, i, gap, total = 0;
	int tree[100000];
	int distance[100000];
	
	scanf("%d", &num1);

	for (i = 1; i <= num1; i++)
	{
		scanf("%d", &tree[i]);
	}
	
	for (i = 1; i < num1; i++)
	{
		distance[i] = tree[i + 1] - tree[i];
	}
	
	gap = tree[2] - tree[1];

	for (i = 1; i < num1; i++)
	{
		gap = divisor(gap, distance[i]);
	}
	
	for (i = 1; i < num1; i++)
		{
		total += ((distance[i] / gap) - 1);
		}

		printf("%d", total);

	return 0;
}

int divisor(int a, int b)
{
	int big = a, small = b, num1, num2;
	

	if (a < b)
	{
		big = b;
		small = a;
	}
	
	for(;;)
	{
		num1 = big / small;
		num2 = big % small;
		if (num2 == 0) 
			break;
		
		big = small;
		small = num2;
	}

	return small;
}