#include <stdio.h>

int main() {
    int size, i, j, count;
    scanf("%d", &size);

    int arr[size];
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        count = 1;
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; // Mark as visited
            }
        }
        if (arr[i] != -1) {
            printf("%d %d\n", arr[i], count);
        }
    }

    return 0;
}