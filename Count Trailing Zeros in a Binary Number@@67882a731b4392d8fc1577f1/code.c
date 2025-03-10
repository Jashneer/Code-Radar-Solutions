#include <stdio.h>

int main() {
    int number, count = 0;
    scanf("%d", &number);
    if (number == 0) {
        printf("Number of trailing zeros: 32 (for a 32-bit integer)\n");
        return 0;
    }
    while ((number & 1) == 0) {
        count++;
        number >>= 1; 
    }
    printf("%d\n", count);

    return 0;
}
