/*
Name:Liz Wanjiku
Reg no:CT101/G/26439/25
Description:1D Array 
*/

#include<stdio.h>

int main(){
	int i;
	int sum= 0;
	float average;
	int revenue[7];
	
	for(i=0;i<7;i++){
      printf("day %d:",i+1);
      scanf("%d",&revenue[i]);
       sum +=revenue[i];
	}
	average = sum /7.0;
	printf("Average daily revenue:%.2f\n", average);
	printf("Total weekly revenue:%d\n",sum);
	

	return 0;
}