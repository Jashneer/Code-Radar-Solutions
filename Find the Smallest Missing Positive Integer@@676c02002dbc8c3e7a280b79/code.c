#include <stdio.h>

int smallest_missing_number(int n, int arr[]) {
    for(int i = 1; i<=n; i++) {
        int found = 0;
        for(int j= 0; j<n; j++) {
            if(arr[j] == i) {
                found = 1;
                break;
            }
        }
        if(!found) {
            return i;
        }
    }
    return n;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = smallest_missing_number(n, arr);

    printf("%d", result);
}