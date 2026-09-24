

#include <stdio.h>

int main(){
	float height;//%f
	double bankBalance;//%lf
	char phoneNumber;//%s
	
	printf("Enter your height (in meters):\t");
	scanf("%f",&height);
	
	printf("Enter youy Bank Balance (in ksh):\t");
	scanf("%lf",&bankBalance);
	
	printf("Enter your Phone Number:\t");
	scanf("%s",&phoneNumber);
	
	printf("\nYour resultes\n");
	printf("Height:%.2f meters\n",height);
	printf("Bank Balance:%.2lf KSH\n",bankBalance);
	printf("Phone Number:%s\n",phoneNumber);
	
	return 0;
}
