/*
Name:Liz Wanjiku
Reg no:CT101/G/26439/25
Description:Data bundle purchace
*/

#include<stdio.h>

int main(){
	
	int choice;
	
	//Menu
	printf("select data bundle:\n");
	printf("1.100MB @ 50KES\n");
	printf("2.500MB @ 200KES\n");
	printf("3.1GB @ 350KES\n");
	printf("4.2GB @ 600KES\n");
	
	//prompt the user to enter the choice
	printf("Enter your choice(1-4):");
	scanf("%d",&choice);
	
	//Handle the choice using switch
	switch(choice){
		case 1:
		printf("you selected 100MB.Cost=50KES\n");
		break;
	case 2:
		printf("you selected 500MB.Cost=200KES\n");
		break;
	case 3:
		printf("you selected 1GB.Cost=350KES\n");
		break;
	case 4:
		printf("you selected 2GB.Cost=600KES\n");
		break;
	default:
		printf("invalid choice.\n");
	}
	
	return 0;
}