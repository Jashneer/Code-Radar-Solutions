#include <stdio.h>

int main() {
    int number, position, bitValue; 
    scanf("%d %d", &number, &position);
    bitValue = (number & (1 << position)) >> position;
    printf("%d\n", position);

    return 0;
}

