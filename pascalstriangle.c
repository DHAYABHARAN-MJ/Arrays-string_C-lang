 //To print the Pascal's triangle up to a given number of rows (num)
 #include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    int arr[num];

    // Outer loop for iterating over the number of rows
    for (int i = 0; i < num; i++) {
        // Inner loop for calculating the values in each row
        for (int j = i; j >= 0; j--) {
            if (j == i || j == 0) {
                // If it's the first or last element of the row, set it to 1
                arr[j] = 1;
            } else {
                // Calculate the value based on the previous row
                arr[j] = arr[j - 1] + arr[j];
            }
        }

        // Loop for printing the elements in the current row
        for (int k = 0; k <= i; k++) {
            printf("%d ", arr[k]);
        }

        printf("\n");
    }

    return 0;
}