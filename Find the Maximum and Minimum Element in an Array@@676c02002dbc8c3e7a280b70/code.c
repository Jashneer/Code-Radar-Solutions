#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i<n; i++) {
       scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[n-1];

    for(int i = 0; i<n; i++) {
        if(arr[i] > max) {
           max = arr[i];
        }
        if(arr[i] < min) {
          min = arr[i];
        }
    }

    printf("%d %d", min, max);

    return 0;


}

