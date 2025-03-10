#include <stdio.h>

int main() {
    int number, position = 0; 
    scanf("%d", &number);
    if (number == 0) {
        printf("No set bits found.\n");
        return 0;
    }
    while ((number & 1) == 0) {
        position++;
        number >>= 1;
    }
    printf("%d\n", position);

    return 0;
}
