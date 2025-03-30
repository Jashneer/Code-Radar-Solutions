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
    if(n==0) {
        return 0;
    }
    
    int max_length = 1;
    int curr_length = 1;
    for(int i = 0; i<n; i++) {
        if(arr[i] = arr[i-1] + 1) {
            curr_length++;
        }
        else if(arr[i] != arr[i-1]) {
            curr_length = 1;
        }
        if(curr_length > max_length) {
            max_length = curr_length;
        }
    }
    return max_length;
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