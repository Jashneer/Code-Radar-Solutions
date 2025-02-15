#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 2; i<=n; i++) {
        if(n==2) {
            printf("Prime");
        }
        else if(n%i==0) {
            printf("Not Prime");
        }
        else {
            printf("Prime");
        }
    }
    return 0;
}