#include<stdio.h>
void main(){
	int n;
	printf("enter the day number:");
	scanf("%d",&n);
		switch(n){
		case 1:
			printf("Day is Monday");
			break;
		case 2:
			printf("Day is Tuesday");
			break;
		case 3:
			printf("Day is Wednesday");
			break;
		case 4:
			printf("Day is Thursday");
			break;
		case 5:
			printf("Day is Friday");
			break;
		case 6:
			printf("Day is Saturday");
			break;		
		case 7:
			printf("Day is Sunday");
			break;
		default:
			printf("Invalid Choice");
	}
}
