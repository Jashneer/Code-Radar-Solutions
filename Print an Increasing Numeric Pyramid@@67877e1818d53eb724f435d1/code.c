#include <stdio.h>

int main() {
    int rows; 
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; 
    }
    for (int i = 1; i <= rows; i++) { 
        for (int j = 1; j <= i; j++) { 
            printf("%d ", j);
        }
        printf("\n"); 
    }

    return 0;
}


