/*
Name:Liz Wanjiku
Reg no :CT101/G/26439/25
Description:do while loop for pwd

*/

#include<stdio.h>
#include<string.h>

int main(){
	char password[20];
	
	do{
		printf("Enter password:");
		scanf("%s",password);
	}while(strcmp(password,"1234")!=0);
	
	printf("Access granted\n");
	
	return 0;
}