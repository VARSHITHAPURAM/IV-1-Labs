#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char str[] = "HelloWorld";
	char str1[11], str2[11];
	int i, len;
	len = strlen(str);
	printf("Input : %s \nOutput : Input AND 127 = ", str);
	for(i = 0; i < len ; i++)
	{
		str1[i] = str[i] & 127;
		printf("%c", str1[i]);
	}	
	printf("\n");
	printf("Input XOR 127 : ");
	for(i = 0; i < len ; i++)
	{
		str1[i] = str[i] ^ 127;
		printf("%c", str2[i]);
	}	
	printf("\n");
	return 0;
}
