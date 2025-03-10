#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14;
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}   
