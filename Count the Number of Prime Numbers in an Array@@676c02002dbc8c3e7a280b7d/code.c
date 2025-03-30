#include <stdio.h>
#include <math.h>


int isPrime(int num) {

    
    if(num<=1) {
        return 0;
    }

    if(num==2) {
        return 1;
    }
    for(int i = 2; i<= sqrt(num); i++) {
        if(num%i==0) {
            return 0;
        }
    }
    return 1;
}

int count_prime(int n, int arr[]) {
    int count = 0;
    for(int i = 0; i<n; i++) {
        if(isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}
int main() {
    int n; 
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = count_prime(n, arr);
    printf("%d", count);
}