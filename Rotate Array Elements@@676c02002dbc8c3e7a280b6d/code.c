#include <stdio.h>


void rotateArray(int n, int arr[], int k) {
    int temp[k];

    //store the last k elements in temp array
    for(int i = 0; i<k; i++) {
        temp[i] = arr[n-k+i];
    }

    //shift the remainig elements to the right
    for(int i = n-k-1; i>=0; i--) {
        arr[i+k] = arr[i];
    }

    //insert the elements stored in temp array at the start
    for(int i = 0; i<k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    //if k>n
    k = k%n;

    rotateArray(n, arr, k);

    for(int i = 0; i<n; i++) {
        printf("%d", arr[i]);
    }
}