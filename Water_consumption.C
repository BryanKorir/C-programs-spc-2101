/*
Name: Brian Kipkoech Korir
Reg No: PA106/G/29216/25
Description: Program to display water consumption 
conditions:
0-30 units_consumed = 20 KES per unit
31-60 units_consumed = 25 KES per unit
Above 60 units_consumed = 30 KES per unit
*/

//main function
#include <stdio.h> 

int main() {
	int units_consumed;
	float bill; 
	
	//prompt user to enter units consumed;
	printf("Enter units consumed: ");
	scanf("%d",&units_consumed);
	
	if (units_consumed <=30) {
		bill= units_consumed * 20;
		
	}
	else if (units_consumed <=60) {
		bill= units_consumed * 25;
	}
	
	else {
		bill = units_consumed * 30;
	}
	
	printf("Total bill = %.2f KES\n",bill);
	
	return 0;
}
	