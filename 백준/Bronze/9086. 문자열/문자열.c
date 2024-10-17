#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	char string[101];

	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		int k = 0;
		
		scanf("%s", string);

		k = strlen(string);

		printf("%c%c\n", string[0], string[k-1]);
	}

	return 0;
}