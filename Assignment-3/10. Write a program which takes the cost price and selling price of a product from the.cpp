/*10. Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage.*/
#include<stdio.h>
int main()
{
	float x,y,cp,sp,profit, loss;
	printf("Enter Cost price and Celling price number\n");
	scanf("%f%f",&cp,&sp);
	if(cp>sp)
	{
	  loss=(cp-sp);
	  x=(loss*100)/cp;
	  printf("Loss percentage = %f%%",x);
    }
	if(sp>cp)
	{
	   profit=(sp-cp);
	   y=(profit*100)/cp;
	   printf("Profit percentage = %f%%",y);
	}
	if(cp==sp)
	   printf("No profit or loss");
	return 0;
}

