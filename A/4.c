#include<stdio.h>
void main(){
	int a,b,c,max;
	printf("Enter the number:");
	scanf("%d %d %d",&a,&b,&c);
	max=(a>b)?a:b;
	max=(c>max)?c:max;
	printf("%d is largest",max);
}   
