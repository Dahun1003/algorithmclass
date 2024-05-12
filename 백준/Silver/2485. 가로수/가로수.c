#include <stdio.h>

int divisor(int a, int b);

int main(void)
{
	int num1, i;
	int tree[100000];
	int distance[100000];
	int gap;
	int count = 0;
	
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
		count += ((distance[i] / gap) - 1);
		}

		printf("%d", count);

	return 0;
}

int divisor(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return divisor(b, a % b);
	}
}