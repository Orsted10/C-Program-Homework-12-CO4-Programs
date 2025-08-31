#include <stdio.h>

void modifyPrices(float *prices, int n, float percentage) {
    int i;
    for (i = 0; i < n; i++) {
        *(prices + i) = *(prices + i) + (*(prices + i) * percentage / 100);
    }
}

int main() {
    float prices[5];
    float percentage;
    int i;
    
    printf("Enter 5 prices: ");
    for (i = 0; i < 5; i++) {
        scanf("%f", &prices[i]);
    }
    
    printf("Enter percentage to increase: ");
    scanf("%f", &percentage);
    
    printf("\nOriginal prices: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", prices[i]);
    }
    
    modifyPrices(prices, 5, percentage);
    
    printf("\nModified prices: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", prices[i]);
    }
    printf("\n");
    
    return 0;
}
