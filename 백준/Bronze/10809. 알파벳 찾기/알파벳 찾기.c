#include <stdio.h>
#include <string.h>

int main(void) {
	char word1[100];
	char word2[26];
	int i, j;

	scanf("%s", &word1);

	for (i = 0; i < 26; i++) {
		word2[i] = -1;
	}

	for (i = 0; i < strlen(word1); i++) {
		for (j = 0; j < 26; j++) {
			if (word1[i] == 97 + j) {
				if (word2[j] != -1) {
					
				}
				else {
					word2[j] = i;
				}
			}
		}
	}

	for (i = 0; i < 26; i++) {
		printf("%d ", word2[i]);
	}

	return 0;
}