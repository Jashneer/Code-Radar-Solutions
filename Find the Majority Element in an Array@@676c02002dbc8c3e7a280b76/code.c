#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        printf("%d", &arr[i]);
    }
    
    int max_count = -1;
    for(int i = 0; i<n; i++) {
        int count = 1;
        int majority_element = -1;
        for(int j = i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
         if(count > max_count && count >n/2) {
                max_count = count;
                majority_element = arr[j];
            }
    }
    if(majority_element != 0) {
        printf("%d\n", majority_element);
    }
    else {
        printf("-1\n");
    }

    return 0;
}