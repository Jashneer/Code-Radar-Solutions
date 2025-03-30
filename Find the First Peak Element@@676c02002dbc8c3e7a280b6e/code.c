#include <stdio.h>

int peak_element(int n, int arr[]) {
    for(int i = 0; i<n; i++) {
        if(i == 0) {
            if(arr[i] > arr[i+1]) {
                return arr[i];
            }
        }
        if(i == n-1) {
            if(arr[i] > arr[i-1]) {
                return arr[i];
            }
        }
        if(arr[i] > arr[i-1] && arr[i] >arr[i+1]) {
            return arr[i]; // first peak element found
        }
    }
    return -1; // first peak element not found
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", peak_element(n, arr));
}