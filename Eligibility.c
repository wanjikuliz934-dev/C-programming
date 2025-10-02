/*
Name:Liz Wanjiku
Reg no:CT101/G/26439/25
Description:Exam eligibility
*/

#include<stdio.h>

int main(){
	
	//variable declaration
	float attendance;
	float average;
	
	//prompt the user to enter attendance
	 printf("enter your attendance");
	 scanf("%f", &attendance);
	 
	 //prompt the user to the average marks
	 printf("enter the  marks");
	 scanf("%f", &average);
	 
	 //checking the eligibility for the final exams
	 if(attendance>=75 && average>=40){
	 	printf("eligible for the final exam");}
else{
			 printf("Not eligible for the final exam");}
	 
	return 0;
}