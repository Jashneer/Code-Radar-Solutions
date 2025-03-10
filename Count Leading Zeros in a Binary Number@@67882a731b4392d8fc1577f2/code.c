#include <stdio.h>

int main() {
    unsigned int number;
    int leadingZeros = 0; 
    scanf("%u", &number);
    for (int i = 31; i >= 0; i--) {
        if ((number >> i) & 1) {
            break; 
        }
        leadingZeros++;
    }
    printf("%d\n", leadingZeros);

    return 0;
}
