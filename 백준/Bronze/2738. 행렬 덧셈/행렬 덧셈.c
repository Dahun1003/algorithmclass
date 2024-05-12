#include <stdio.h>

int main() {

    int arr1[100][100], arr2[100][100], arr3[100][100];
    int i, j;
    int num1, num2, num3;

    scanf("%d %d", &num1, &num2);

    for (i = 0; i < num1; i++) {
        for (j = 0; j < num2; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (i = 0; i < num1; i++) {
        for (j = 0; j < num2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (i = 0; i < num1; i++) {
        for (j = 0; j < num2; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (i = 0; i < num1; i++) {
        for (j = 0; j < num2; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}