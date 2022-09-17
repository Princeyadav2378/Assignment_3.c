/* 6. Write a program to print greater between two numbers. Print one number of both are 
the same.*/
int main()
{
	int a,b;
	printf("Enter Two Number\n");
	scanf("%d %d",&a,&b);
	
	if(a>b)
	   printf("a is greater ");
	else if(b>a)
	    printf("b is greater");
    else
        printf("a and b both are equal is %d",a);
	  return 0;
	  
}
