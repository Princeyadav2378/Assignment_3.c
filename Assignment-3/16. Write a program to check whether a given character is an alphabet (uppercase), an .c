/*16. Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
int main()
{
	char c;
	printf("Enter a character\n");
	scanf("%c",&c);
	if(c>='A'&&c<='Z')
	   printf("Uppercase Character");
	else if(c>='a'&&c<='z')
	   printf("Lowercase Character");
	else if(c>='0'&&c<='9')
	   printf("digit");
	else
	   printf("Special Character");
	return 0;
}
