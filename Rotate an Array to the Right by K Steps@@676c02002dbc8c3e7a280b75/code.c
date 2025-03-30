#include <stdio.h>

void RotateArray(int n, int arr[], int k) {
    int temp[k];

    //store last k elements in temp Array
    for(int i = 0; i<k; i++) {
        temp[i] = arr[n-k+1];
    }

    //shift the remaining elements to the right
    for(int i = n-k-1; i>=0; i--) {
        arr[i+k] = arr[i];
    }

    //insert the elements stored in the temp array at the atsrt
    for(int i = 0; i<k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n; scanf("%d", &n);

    if(n<2) {
        printf("-1\n"); //not enough elements to compare
    }

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    //if k>n
    k = k%n;

    RotateArray(n, arr,k);

    for(int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
}