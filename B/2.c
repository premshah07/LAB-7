#include<stdio.h>
void main(){
	char c;
	printf("enter the char:");
	scanf("%c",&c);
	((c>=66 && c<=89)||(c>=97 && c<=123))?(printf("%c is alphabet",c)):(printf("%c is not alphabet",c));
}
