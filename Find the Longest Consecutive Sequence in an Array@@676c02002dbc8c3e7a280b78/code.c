#include <stdio.h>

void sortArray(int n, int arr[]) {
    for(int i = 0; i<n-1; i++) {
        for(int j = 0; j<n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int Longest_Consecutive_Sequence(int n, int arr[]) {

    int length = 0;
    for(int i = 0; i<n; i++) {
        int start = i;
        for(int j = i; j<n; j++) {
            int end = j;
            length = 0;
            for(int k = start; k<=end; k++) {
                length++;
            }
        }
    }
    return length;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = Longest_Consecutive_Sequence(n, arr);

    printf("%d", result);
}