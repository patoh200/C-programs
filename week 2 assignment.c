/*
Name:patrick macharia
Reg NO:CT/100/G/30655/26
Description:Week 2 assignment
Date:24/09/2026
*/

#include<stdio.h>

#include<math.h>//volume(),surface area()

#define pi=3.142

int main()
{
	double h;//%lf
	double r;//%lf
	double surfacearea;//%lf
	double volume;//%lf
	
	printf("enter the h\t");
	scanf("%lf",&h);
	
	printf("enter the r\t");
	scanf("%lf",&r);
	
	volume='pi*r*r*h';
	surfacearea='2*pi*r*r+2*pi*r*h';
	
	printf("volume=%.2lf\n",volume);
	
	printf("surfacearea=%.2lf\n",surfacearea);
	
	return 0;
	
	
}