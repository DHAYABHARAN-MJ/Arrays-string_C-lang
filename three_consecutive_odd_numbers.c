#include <stdio.h>

int threeConsecutiveOdds(int* arr, int num) {
    int count = 0;
    for (int i = 0; i < num; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        } else {
            count = 0;
        }
        if (count >= 3) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);

    int arr[num];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    int result = threeConsecutiveOdds(arr, num);
    if (result) {
        printf("There are at least three consecutive odd numbers in the array.\n");
    } else {
        printf("There are no three consecutive odd numbers in the array.\n");
    }

    return 0;
}
