/*
Name:Liz Wanjiku
Reg no:CT101/G/26439/25
Descrition: water bill
*/ 
#include<stdio.h>

int main(){
	//variable declaration
	int units;
	float total;
	
	//prompt the user to enter the units
	printf("Enter the units consumed");
	scanf("%d",&units);
	
	if(units<=30){
		(total=units *20);}
	
	else if(units <=60){
		(total=units * 25);}
	else{
		total=units * 30;}
		
		//calculation of the water bill
		printf("Total water bill:%.2f KES\n",total);
		
	return 0;	
	}	
		