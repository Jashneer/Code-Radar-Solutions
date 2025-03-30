#include <stdio.h>


int largest_even_number(int n, int arr[]) {

    int max = 0;
    for(int i = 0; i<n; i++) {
        if(arr[i] > max && arr[i]%2==0) {
            max = arr[i];
            return max;
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

    printf("%d", largest_even_number(n, arr));

    return 0;
}