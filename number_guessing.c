/*
Name:Liz Wanjiku
Reg no:CT101/G/26439/25
Description:while loop 
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int secretNumber,guess,attempts=0;
	
	srand(time(0));
	
	secretNumber=(rand()%20)+1;
	
	printf("Guess the number (between 1 and 20):\n");
	do{
	printf("enter your guess:");
	scanf("%d",&guess);
	attempts++;
	
	if(guess>secretNumber){
		printf("Too high!\n");
	}else if (guess<secretNumber){
		printf("Too low!\n");
	}else{
		printf("congratulation!you guessed the number in %d attempts.\n",attempts);
		
	}
	}while(guess!=secretNumber);
	
	return 0;

}