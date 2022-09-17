/*14. Write a program to check whether a given number is divisible by 7 or divisible by 3*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a Number\n");
	scanf("%d",&a);
	if(a%7==0)
	  printf("divisible by 7");
	else if(a%3==0)
	  printf("dibisible by 3");
	else
	  printf("Not divisible by 7 or 3");
	return 0;
}
