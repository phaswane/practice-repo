#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *str = "Hello World";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		//putchar(str[i]); OR
		printf("%c", str[i]);
	}

	putchar('\n');

	return(0);
}
