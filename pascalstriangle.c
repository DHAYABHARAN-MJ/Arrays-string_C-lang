#include <stdio.h>

int main() {
    int num = 5;
    int arr[num];

    for (int i = 0; i < num; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[j] = 1;
            } else {
                arr[j] = arr[j - 1] + arr[j];
            }
        }

        for (int k = 0; k <= i; k++) {
            printf("%d ", arr[k]);
        }

        printf("\n");
    }

    return 0;
}
