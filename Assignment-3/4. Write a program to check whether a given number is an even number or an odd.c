/*4. Write a program to check whether a given number is an even number or an odd 
number without using % operator.*/
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a Number\n");
	scanf("%d",&x);
	y=x&1;
	if(y==1)
		printf("Odd");
	else
	     printf("Even");
	 return 0;
}
