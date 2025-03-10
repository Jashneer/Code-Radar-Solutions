#include <stdio.h>

int main() {
    char name[50];  
    int age;        
    char hobby[50];
    scanf("%s", name);
    scanf("%d", &age);
    scanf("%s", hobby);
    printf("Name: %s, Age: %d, Hobby: %s\n", name, age, hobby);
    return 0;
}

