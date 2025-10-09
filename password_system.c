/*
Name:Brian Kipkoech Korir
Regestration no:PA106/G/29216/25
Description:program to check eligibility for bank loan
*/
//main function

#include <stdio.h>//preprocessor directive;scanf(),printf()

#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password == 1234) {
            printf("Access Granted.\n");
        } else {
            printf("Incorrect password.\n");
        }

    } while (password != 1234);

    return 0;
}