#include <stdio.h>
#include <limits.h>

int secondSmallest(int n, int arr[]) {
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    for(int i = 0; i<n; i++) {
        if(arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }

        else if(arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }
    if(second_smallest == INT_MAX) {
        return -1;
    }
    return second_smallest;
}

int main() {
    int n; 
    scanf("%d", &n);

    int arr[n];
    scanf("%d", &arr[i]);

    int result = secondSmallest(n, arr);
    printf("%d", result);

    return 0;
}