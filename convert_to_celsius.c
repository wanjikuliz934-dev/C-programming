/*
Name:Liz Wanjiku
Reg no:CT101/G/26439/25
Description:converting to celcius 
*/

#include<stdio.h>
float convertToCelsius(float fahrenheit)
{
	return(fahrenheit-32)*5.0/9.0;
}

int main(){
	float fahreheit;
	
	printf("Enter temperature in Fahrenheit:");
	scanf("%f",&fahreheit);
	
	printf("Temperature in celsius =%.2f C\n",convertToCelsius(fahreheit));
	
	return 0;
}