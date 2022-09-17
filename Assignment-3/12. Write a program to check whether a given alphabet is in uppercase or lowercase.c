/*12. Write a program to check whether a given alphabet is in uppercase or lowercase.*/
#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character\n");
	scanf("%c",&c);
	if(c>='A'&&c<='Z')
	   printf("Uppercase Character");
	else
	   printf("Lowercase Character");
	return 0;
}
