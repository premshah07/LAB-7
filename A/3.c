#include<stdio.h>
void main(){
	int a,b;
	char c;
	printf("enter the number:");
	scanf("%d %d",&a,&b);
	printf("enter the choice:'+'\n'-'\n'*'\n'/'\n=");
	scanf(" %c",&c);
	switch(c){
		case '+':
			printf("sum=%d",a+b);
			break;
		case '-':
			printf("sub=%d",a-b);
			break;
		case '*':
			printf("mul=%d",a*b);
			break;
		case '/':
			if(b!=0){
         		    printf("div=%d",a/b);
		            }
					else{
						printf("error");
						}
						break;
		default:
			printf("invalid choice");
	}
}
