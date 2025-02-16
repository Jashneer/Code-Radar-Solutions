#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not Prime");
        return 0;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            printf("Not Prime");
            return 0;
        }
    }

    printf("Prime");

    return 0;
}
