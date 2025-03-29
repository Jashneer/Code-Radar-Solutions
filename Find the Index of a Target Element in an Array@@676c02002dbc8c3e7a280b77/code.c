#include <stdio.h>

int linearSearch(int n, int arr[], int T) {
    for(int i =0; i<n; i++) {
        if(arr[i] == T) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d " &arr[i]);
    }

    int T;
    scanf("%d", &T);

    int index = linearSearch(n, arr, T);
    printf("%d", index);

    return 0;
}