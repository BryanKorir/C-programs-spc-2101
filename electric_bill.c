/*
 Name: Brian Kipkoech korir
 Reg: PA106/G/29216/25
 Description: Program to calculate electric bill
*/

#include<stdio.h>//preprocessor directive

float calculateElectricBill(int units);

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    float total = calculateElectricBill(units);
    printf("Total Bill: KSh. %.2f\n", total);

    return 0;
}

float calculateElectricBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10;
    }
    else if (units <= 200) {
        bill = (100 * 10) + (units - 100) * 15;
    }
    else {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return bill;
    return 0;
}