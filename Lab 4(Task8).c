#include<stdio.h>
int main(){
	int zone_type;
	float speed, limit, fine;
	printf("Enter zone type: ");
    scanf("%d", &zone_type);

    printf("Enter speed: ");
    scanf("%f", &speed);
    
    switch(zone_type){
    	case 1:
    		limit =30;
    		if(speed>limit+20){
    		fine =1000*2;
			}
			else if(speed>limit){
			fine=1000;
		}
		else{
			fine=0;
		}
		break ;
		case 2:
			limit =100;
			if(speed>limit+20){
				fine=1000*2;
			}
			else if(speed>limit){
				fine=1000;
			}
			else
			fine =0;
			break;
			case 3:
				limit =50;
				if(speed>limit+20){
					fine =1000*2;
				}
				else if(speed>limit){
					fine =1000;
				}
				else
				fine =0;
				break ;
				default:
					printf("Invalid Zone Type\n ");
	}
	printf("Fine amount:Rs %.2f ",fine);

}