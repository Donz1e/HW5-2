#include <stdio.h>
#include<stdlib.h>

void stringReverse(const char a[],int i);

int main(void)
{
	char a[100];
	int  i;

	printf("Enter a string: ");
	gets(a);

	for (i = 0; a[i] != '\0'; i++);
	stringReverse(a,i-1);
	
	printf("\n");
	system("pause");
	return 0;
}

void stringReverse(const char a[],int i)
{
	if (i >= 0)
	{
		printf("%c", a[i]);
		i -= 1;
		stringReverse(a,i);
	}
}