//8. Write a program to check whether a given year is a leap year or not
#include<stdio.h>
int main()
{
	int a;
	printf("Enter  a Number\n");
	scanf("%d",&a);
	
	if(((a%4==0) && (a%100!=0)) ||(a%400==0))
	
	    printf("%d is leap year",a);
	else
	    printf("%d is not leap year",a);
	    return 0;
}
