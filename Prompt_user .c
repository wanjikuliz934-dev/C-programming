/*
Name:Liz Wanjiku
Reg no:CT101/G/26439/25
Description:C programm to prompt the user 
*/
#include <stdio.h>
int main () {
	//variable declaration
	int height;
	float bank_balance;
	int phone_number;
	
	//prompt the uset your height
	printf("Enter your height:");
	scanf("%d", &height);
	
	//prompt the user to enter bank balance
	printf("Enter your bank_balance:");
	scanf("%f", &bank_balance);
	
	//prompt the user to enter phone number 
	printf("Enter your phone_number:");
	scanf("%d", &phone_number);
	
	return 0;
}
