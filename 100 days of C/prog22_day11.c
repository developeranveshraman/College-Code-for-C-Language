//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main() {
    double cost_price, selling_price;
    
    scanf("%lf %lf", &cost_price, &selling_price);
    
    if (selling_price > cost_price) {
        double profit = selling_price - cost_price;
        double profit_percent = (profit / cost_price) * 100.0;
        printf("Profit %g%%\n", profit_percent);
    } else if (cost_price > selling_price) {
        double loss = cost_price - selling_price;
        double loss_percent = (loss / cost_price) * 100.0;
        printf("Loss %g%%\n", loss_percent);
    } else {
        printf("No Profit No Loss\n");
    }
    
    return 0;
}
