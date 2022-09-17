/*15. Write a program to check whether a given number is positive, negative or zero.*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a Number\n");
	scanf("%d",&a);
	if(a>0)
	   printf("Postive Number");
	else if(a<=0)
	   printf("Negative Number");
	else
	   printf("Zero");
	return 0;
}
