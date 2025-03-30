#include <stdio.h>

int sorted(int n, int arr[]) {
    for(int i = 0; i<n-1; i++) {
        int swap = 0;
        for(int j = 0; j<n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap++;
            }
        }
        if(swap == 0) {
            printf("Sorted");
        }
    }
    return -1;
}

int main() {
    int n; 
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", arr[i]);
    }

   sorted(n, arr);

   
}