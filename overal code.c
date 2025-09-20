//Program to display my height,ID number and Bank bllance 
/*
Name:Brian KIpkoech Korir
Registration No:PA106\G\29216\25
Description:Program to display my height,ID number and bank balance
*/
#include <stdio.h>

int main() {
    int height;
    long long Id_number;
    float bank_balance; //%2f


    printf("Enter your height: ");
    scanf("%d", &height);
    printf("Your height is %d\n", height);

    printf("Enter your ID number: ");
    scanf("%lld", &Id_number);
    printf("Your ID number is %lld\n", Id_number);

    printf("Enter your bank_balance: ");
    scanf("%f", &bank_balance);
    printf("Your bank_balance is %.2f\n", bank_balance);

    return 0;
}