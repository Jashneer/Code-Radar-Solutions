#include <stdio.h>


int pairs(int n, int arr[]) {
    int mindiff = 1000;
    for(int i = 0; i<n; i++) {
        for(int j = i+1; j<n; j++) {
                int currdiff = arr[j] - arr[i];
                if(currdiff < mindiff) {
                    mindiff = currdiff;
                }
        }
         printf("%d %d", arr[i], arr[j]);
    }
  

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