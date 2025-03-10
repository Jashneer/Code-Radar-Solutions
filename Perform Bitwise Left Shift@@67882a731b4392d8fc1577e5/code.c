#include <stdio.h>

int main() {
    int number, positions, result;
    scanf("%d %d", &number, &positions);
    result = number << positions;
    printf("%d\n", result);

    return 0;
}
