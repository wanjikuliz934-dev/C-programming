/*
Name:Liz Wanjiku
Reg no:CT10/G/26439/25
Description:2D Array
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define FLOORS 5
#define ROOMS 10

int main(){
	int occupacy [5][10];
	int occupied, vacant;
	
	srand(time(NULL));
	
	for (int i=0;i<FLOORS;i++){
		for(int j=0;j<ROOMS;j++){
			occupacy[i][j]=rand()%2;
		}
	}
	for(int i=0;i<FLOORS;i++){
		occupied=0;vacant=0;
		for (int j=0;j<10;j++){
			if(occupacy[i][j]==1) occupied++;
			else vacant++;
			}
		
	printf("Floor %d: occupied:%d,vacant:%d\n",i+1,occupied,vacant);
	}
	return 0;
}