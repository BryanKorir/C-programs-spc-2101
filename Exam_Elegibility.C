/*
Name:Brian Kipkoech korir
Registration: PA106/G/29216/25
Description: Program to determine eligibility for exams:
1.Attendance >=75%
2.Average marks >=40
*/
//main function

#include <stdio.h>

int main() {
	int attendance,average_marks;
	
	printf("Enter your attendance: ");
	scanf("%d",&attendance);
	
	//Prompt user to enter Average_marks
	printf("Enter average marks: ");
	scanf("%d",&average_marks);
	
	if (attendance >= 75&& average_marks>=40) {
		printf("Eligible");
	}
	else {
	printf("Not Eligible");
	}
	return 0;
}
