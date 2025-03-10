#include <stdio.h>

int main() {
    int number, position, bitValue; 
    scanf("%d %d", &number, &position);
    bitValue = (number >> position) & 1;
    printf("%d\n", position, bitValue);

    return 0;
}
