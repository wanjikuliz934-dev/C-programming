/*
Name:Liz Wanjiku
Reg no:CT101/G/26439/25
Description:3D Array
*/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10
int main(){
	int totaloccupied=0;
	int occupacy[BRANCHES][FLOORS][ROOMS];
	
	srand(time(NULL));
	
	for(int b=0;b<BRANCHES;b++){
		for(int i=0;i<FLOORS;i++){
			for(int j=0;j<ROOMS;j++){
				occupacy[b][i][j]=rand()%2;
				totaloccupied+=occupacy[b][i][j];
			}
		}
	}
	
	printf("Total number of occupied rooms across all branches:%d\n",totaloccupied);;
	
	return 0;
}