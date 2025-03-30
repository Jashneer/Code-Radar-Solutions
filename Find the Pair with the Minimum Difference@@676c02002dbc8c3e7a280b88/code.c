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

void minDiff_pair(int n, int arr[]) {

    if(n<2) {
        printf("-1\n") // not enough elements to find the pair
    }

    sortArray(n, arr);
    int minDiff = arr[1] - arr[0];
    int pair1 = arr[0], pair2 = arr[1];

    for(int i = 0; i<n; i++) {
            int diff = arr[i+1] - arr[i];

            if(diff < minDiff) {
                minDiff = diff;
                pair1 = arr[i];
                pair2 = arr[i+1];
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