#include <stdio.h>

int main() {
    int number, flipped;
    scanf("%d", &number);
    flipped = ~number;
    printf("%d\n", flipped);

    return 0;
}
