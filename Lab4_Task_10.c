#include<stdio.h>
int main(){
	int heart_rate;
	float temp;
	printf("Enter Your Heart Rate ");
	scanf("%d",&heart_rate);
	printf("Enter your body Temperature ");
	scanf("%f",&temp);
	if(heart_rate>120 || temp>39){
		printf("critical - immediate attention");
	}
	else if (heart_rate>=100 && heart_rate<=120 && temp>=37.5 && temp<=39){ 
	printf("Urgent");
} else
   printf("Normal");
   return 0;
}
