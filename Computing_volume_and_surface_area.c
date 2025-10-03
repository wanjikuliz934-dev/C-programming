/*
Name: Liz Wanjiku 
Reg no:CT101/G/26439/25
Description: Computing the surface area and the volume 
*/

#include<stdio.h>


int main(){
	//variable declaration 
	float pi = 3.142, radius ,height;
	double  volume ,surface_area;
	
	//prompt the user to enter the radius of the cylinder
	printf("enter radius of the cylinder ;");
	scanf("%f",&radius);
	
	//prompt the user to enter the height of the cylinder 
	printf("enter the height of the cylinder :");
	scanf("%f",&height);
	
	//compute volume
	volume = 3.142 * radius * radius * height;
	
	//display volume 
	printf("\n volume is %.2f", volume);
	
	//compute surface_area 
	surface_area = 2 * 3.142 * radius * radius + 2 * 3.142 * radius * height;
	
	//display surface_area 
	printf("\n surface_area is %.2f", surface_area);
	
	return 0;

	
	
	
	return 0;
	
}
