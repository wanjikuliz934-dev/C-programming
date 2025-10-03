/*
Name:Liz Wanjiku
Reg no:CT101\G\26439\25
Description:C program to access bank loan

*/

#include<stdio.h>
int main(){
	//variable declaration 
	int age;
	float income;
	
	//prompt user to enter age 
	printf("enter your age;");
	scanf("%d", &age);
	
	//prompt user to enter income 
	printf("enter your annual income;");
	scanf("%f", &income);
	
	//check eligibility
	if(age >=21 &&income>=21000){
		printf("congrations you qualify for a loan");}
	else{
		printf("unfortunately,we are unable to offer you a loan at this time");}
		
		return 0;
	}
