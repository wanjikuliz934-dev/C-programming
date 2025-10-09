/*
Name:Liz Wanjiku
Reg no:CT101/G/26439/25
Description:While loop
*/
#include<stdio.h>

int main(){
	
	int withdraw;
	int balance =1000;
	printf("your current balance is %d\n",balance);

	
	while(balance>0){
		printf("Enter amount to withdraw: ");
		scanf("%d", &withdraw);
		balance-=withdraw;
		printf("New balance: %d\n",balance);
	}
	printf("insufficient balance");
	
	return 0;
}