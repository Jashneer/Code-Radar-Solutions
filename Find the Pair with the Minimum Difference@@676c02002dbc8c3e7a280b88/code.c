#include <stdio.h>


int pairs(int n, int arr[]) {
    int diff = 1000;
    for(int i = 0; i<n; i++) {
        for(int j = i+1; j<n; j++) {
            if((arr[j] - arr[i] < diff)) {
                printf("%d %d", i, j);
            }
        }
    }
    return 0;

}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    pairs(n, arr);
}