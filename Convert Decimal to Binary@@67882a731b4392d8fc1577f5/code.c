#include <stdio.h>

int main() {
    int decimal; 
    int binary[32];
    int index = 0; 
    scanf("%d", &decimal);
    if (decimal == 0) {
        printf("0\n");
        return 0;
    }
    while (decimal > 0) {
        binary[index] = decimal % 2; 
        decimal /= 2;               
        index++;
    }
   
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
