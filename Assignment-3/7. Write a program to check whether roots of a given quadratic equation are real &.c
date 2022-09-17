/*7. Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary roots*/
#include<stdio.h>4
int main()
{
	int a,b ,c;
	int D;
	printf("Enter Three Number\n");
	scanf("%d %d %d",&a,&b,&c);
	D=b*b-4*a*c;
	if(D>0)
	   printf("Real & distinct");
	else if(D<0)
	  
	    printf("Real & Imaginary");
    else
        printf("Real & Equal");
	  return 0;
	  
}
