/*13. Write a program to check whether a given number is divisible by 3 and divisible by 2*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a Number\n");
	scanf("%d",&a);
	if(a%3==0)
	  printf("divisible by 3");
	else if(a%2==0)
	  printf("dibisible by 2");
	else
	  printf("Not divisible by 3 or 2");
	return 0;
}
