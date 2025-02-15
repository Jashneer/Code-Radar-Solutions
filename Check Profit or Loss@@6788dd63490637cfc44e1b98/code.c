#include<stdio.h>

int main() {
    int cost_price;
    int selling_price;
    scanf("%d %d", &cost_price, &selling_price);

    if(selling_price>cost_price) {
        printf("Profit");
    }
    else if(selling_price<cost_price) {
        printf("Loss");
    }
    else {
        printf("Not Profit No Loss");
    }
    return 0;
}