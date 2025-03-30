#include <stdio.h>


int pairs(int n, int arr[]) {
    int pair1 = -1, pair2 = -1;
    int mindiff = 1000;
    for(int i = 0; i<n; i++) {
        for(int j = i+1; j<n; j++) {
                int currdiff = arr[j] - arr[i];
                if(currdiff < mindiff) {
                    mindiff = currdiff;
                    pair1 = arr[i];
                    pair2 = arr[j];
                }
        }
    }
    printf("%d %d", pair1, pair2);
  
    return -1;

}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    pairs(n, arr);
}