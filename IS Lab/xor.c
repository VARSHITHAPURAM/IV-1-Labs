#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[] = "HelloWorld";
	char str1[11];
	int i, len;
	len = strlen(str);
	printf("Input : %s \nOutput : ", str);
	for(i = 0; i < len ; i++)
	{
		str1[i] = str[i] ^ 0;
		printf("%c", str1[i]);
	}	
	printf("\n");
	return 0;
}
