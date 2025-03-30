#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = 0;
    for(int i = 0; i<n; i++) {
        if(arr[i] > max && arr[i]%2 == 0) {
            printf("%d", arr[i]);
        }
        else {
            printf("-1\n");
        }
    }

    return 0;
}