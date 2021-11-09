#include<stdio.h>
void main()
{
	char c;
	printf("Enter a character (a-z or A-Z):");
	scanf("%c", &c);
	printf("corresponding ASCII number for %c is %d",c,c);
}
