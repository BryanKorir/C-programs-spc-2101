/*
Name: Brian Kipkoech Korir
Reg: PA106/G/29216/25
Description: proram to offer internet data bundles 
conditions
1. 100MB = 50KES
2. 500MB = 200KES
3. 1GB = 350KES
4. 2GB = 600KES
*/

// main function
#include <stdio.h> 

int main() {
	int choice;
	
	//Display menu
	printf("Mobile data bundles\n");
	printf("1. 100MB @ 50KES\n");
	printf("2. 500MB @ 200KES\n");
	printf("3. 1GB   @ 350 KES\n");
	printf("4. 2 GB  @ 600 KES\n");
	
	//prompt user to enter choice 
	printf("Enter your choice(1-4):");
	scanf("%d",&choice);
	
	//switch statement
	switch(choice) {
	case 1:
    	printf("You selected 100MB. cost = 50KES.\n");
    	break;
	
	case 2:
		printf("You selected 500MB. cost = 200KES.\n");
		break;
	
	case 3: 
		printf("You selected 1GB. cost = 350KES.\n");
		break;
	
    case 4:
        printf("You selected 2GB. cost = 600KES.\n");
        break;
    default:
        printf("Invalid  choice !! please enter a number between 1 and 4.\n");
	}
        
        return 0;
}
			