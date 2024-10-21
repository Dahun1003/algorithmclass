#include <stdio.h>

int main(void) {
	int arr[8];
	int k = 0, l = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 8; i++) {
		if (arr[i] == i + 1) {
			k++;
		}
	}

	for (int i = 0; i < 8; i++) {
		if (arr[i] == 8 - i) {
			l++;
		}
	}

	if (k == 8) {
		printf("ascending");
	}
	else if (l == 8) {
		printf("descending");
	}
	else {
		printf("mixed");
	}

	return 0;
}