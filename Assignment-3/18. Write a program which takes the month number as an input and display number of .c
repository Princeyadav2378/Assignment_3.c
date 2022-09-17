/*18. Write a program which takes the month number as an input and display number of 
days in that month*/
#include<stdio.h>
int main()
{
	int month;
	printf("Enter Month Number (1-12):\n");
	scanf("%d",&month); 
	if(month==1)
	{
	   printf("Enter Month : January\n");
	   printf("Number of days : 31");
    }
    else if(month==2)
    {
	  printf("Enter Month : february\n");
	  printf("Number of days : 28 or 29");
    }
	else if(month==3)
	{
	  printf("Enter Month : March\n");
	  printf("Number of days : 31");
    }
    else if(month==4)
    {
	  printf("Enter Month : April\n");
	  printf("Number of days : 30");
    }
	else if(month==5)
	{
	  printf("Enter Month : May\n");
	  printf("Number of days : 31");
    }
	else if(month==6)
	{
	  printf("Enter Month : June\n");
	  printf("Number of days : 30");
    }
	else if(month==7)
	{
	  printf("Enter Month : July\n");
	  printf("Number of days :31 ");
    }
	else if(month==8)
	{
	  printf("Enter Month : August\n");
	  printf("Number of days :31 ");
    }
	else if(month==9)
	{
	  printf("Enter Month : September\n");
	  printf("Number of days : 30");
    }
	else if(month==10)
    {
	  printf("Enter Month : October\n");
	  printf("Number of days : 31 ");
    }
	else if(month==11)
	{
	  printf("Enter Month : November\n");
	  printf("Number of days : 30");
    }
	else if(month==12)
	{
	  printf("Enter Month : December\n");
	  printf("Number of days :31 ");
    }
	else
	  printf("invalid input Month");
	return 0;
}

