#include<stdio.h>
int main(){
	int people;
	float weight;
	printf("Enter Number of people: ");
	scanf("%d",&people);
	printf("Enter Total weight: ");
	scanf("%f",&weight);
	if(people>10){
		printf("Deny due to people limit: ");
	}
	else if(weight>1000){
		printf("Access deny due to overweight: ");
	}
	else if (people>10 && weight>1000){
		printf("Access denied: Overweight and too many people ");
	}
	else
	printf("Elevator can operate normally ");
	return 0;
	}

