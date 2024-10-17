#include <stdio.h>

int main(void) {
	int num[9];
	int max = 0, index = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);
	}

	max = num[0];

	for (int i = 0; i < 9; i++) {
		if (num[i] > max) {
			max = num[i];
			index = i;
		}
	}

	printf("%d\n%d", max, index + 1);

	return 0;
}