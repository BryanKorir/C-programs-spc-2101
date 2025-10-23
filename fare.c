/*
Name: Brian Kipkoech Korir
Reg: PA106/G/29216/25,
Deascription: Program to calculate fare
*/
#include<stdio.h>//preprocessor directive 

// calculation of fare
// declared variables: distanceInKilometre, fareInKsh
// ksh50 = one kilometre

int main() {
    float distanceInKilometre, fareInKsh;

    printf("Enter distance in kilometre: ");
    scanf("%f", &distanceInKilometre);

    fareInKsh = distanceInKilometre * 50;

    printf("Fare in shillings: %.2f\n", fareInKsh);

    return 0;
}