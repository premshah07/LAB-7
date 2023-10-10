#include<stdio.h>
void main(){
	int a,b,c;
	printf("enter the number:");
	scanf("%d %d",&a,&b);
	c=a^b;
	switch(c){
		case 0:
			printf("equal numbers:%d & %d",a,b);
			break;
		default:
			printf("not equal:%d & %d",a,b);
			
	}
}
