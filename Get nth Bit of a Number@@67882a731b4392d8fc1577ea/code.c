#include <stdio.h>

int main() {
    int number, position, bitValue; 
    scanf("%d %d", &number, &position);
    bitValue = (number & (1 << position)) >> position;
    printf("%d\n",bitValue);

    return 0;
}

