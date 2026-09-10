#include<stdio.h>
int main(){
	int minutes,plan_choice;
	float bill;
	printf("Enter your used minutes: ");
	scanf("%d",&minutes);
	printf("Enter your plan Choice ");
	scanf("%d",&plan_choice);
	switch (plan_choice){
		case 1:
			if (minutes>1000)
			 bill = 500 + (minutes -1000)*2;
			else
			bill =500;
			break ;
			
			case 2:
				if(minutes>2000)
				bill = 800 + (minutes -2000)*2;
				else
				bill =2000;
				break;
				
				case 3:
				 bill = 1200;
				 break;
				 
				 case 4:
				 	bill =minutes*1;
				 	break;
				 	default:
				 		printf("Invalid plan choice: ");
	}
	printf("Your Total Bill is:Rs %.2f ",bill);
}
