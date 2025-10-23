/*
Name:Liz Wanjiku
Reg no:CT101\G\26439\25
Description:Electric bill
*/

#include<stdio.h>

//functiom prototype
float electricbill (int units_consumed ,int amount);
float total_bill=0;

int main(){
	int units_consumed;
	float  result,sum,cost;
	
	if(units_consumed <=100){
		(total_bill = units_consumed * 10);
	}else if(units_consumed<=200){
		(total_bill =100 * 10 +(units_consumed-100)*15);
	}else{
		(total_bill = 100 * 10 + 100 * 15 +((units_consumed -200)*20));
	}
	
	printf("Enter units_consumed:");
	scanf("%d",&units_consumed);
	
	result = sum( units_consumed * cost );
	
	printf("sum is =%.2f KES\n",result);
	
	return 0;
}

