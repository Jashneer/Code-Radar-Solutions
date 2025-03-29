#include <stdio.h>

int binarySearch(int n, int arr[], int key) {
    int start = 0, end = n-1;

    while(start <= end) {
        int mid = (start + end)/2;

        //comparison
        if(arr[mid] == key) {
            return mid;
        }
        else if(arr[mid] < key) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);

    int index = binarySearch(n, arr, key);

    printf("%d", index);
}