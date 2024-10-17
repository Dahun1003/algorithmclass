#include <stdio.h>

int main(void) {
	int a;
	char num[101];
	int sum = 0;

	scanf("%d %s", &a, &num);

	for (int i = 0; i < a; i++) {
		sum += num[i] - 48;
	}

	printf("%d", sum);

	return 0;
}