#include <stdio.h>
#include <limits.h>

int secondLargest(int n, int arr[]) {
     int largest = INT_MIN;
    int second_largest = INT_MIN;

    for(int i = 0; i< n; i++) {
        if(arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    return second_largest;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = secondLargest(n, arr);
    printf("%d", result);
}