#include <stdio.h>

int sorted(int n, int arr[]) {
    for(int i = 0; i<n; i++) {
        if(arr[i] > arr[i+1]) {
            return -1;
        }
    }
    return 1;
}

int main() {
    int n; 
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", arr[i]);
    }

   sorted(n, arr);

   if(sorted(n, arr)) {
    printf("Sorted");
   }
   
}