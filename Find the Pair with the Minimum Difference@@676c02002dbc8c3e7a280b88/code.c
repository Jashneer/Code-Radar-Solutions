#include <stdio.h>

void sortArray(int n, int arr[]) {
    for(int i = 0; i<n-1; i++) {
        for(int j = 0; i<n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int  minDiff_pair(int n, int arr[]) {

    int minDiff = arr[1] - arr[0];
    int pair1 = arr[0], pair2 = arr[1];
    sortArray(n, arr);

    for(int i = 0; i<n; i++) {
        for(int j = i+1; j<n; j++) {
            int diff = arr[j] - arr[i];

            if(diff < minDiff) {
                minDiff = diff;
                pair1 = arr[i];
                pair2 = arr[j];
            }
        }
    }
    printf("%d %d", pair1, pair2);
}

int main() {
    int n; 
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    minDiff_pair(n, arr);

    return 0;


}