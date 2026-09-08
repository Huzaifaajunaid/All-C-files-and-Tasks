#include<stdio.h>
int main(){
	float entry_test;
	float fsc_marks;
	printf("Enter your entry test score: ");
	scanf("%f",&entry_test);
	printf("Enter you fsc score: ");
	scanf("%f",&fsc_marks);
	float combined_score=(entry_test*0.50)+(fsc_marks*0.50);
	if(combined_score>=80){
		printf("Admission in Computer Science: ");
	}
	else if(combined_score>=65 && combined_score<=79){
		printf("Admission in Software engineering: ");
	}
	else if(combined_score>=50){
		printf("Admission in IT(Information Technology): ");
	}else
	printf("Rejected: ");
}