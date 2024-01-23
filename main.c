#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	unsigned int k;

	i = strlen("Best School");
	j = strlen("Best School") + 1;
	k = sizeof("Best School");

	printf("strl%d\n", i);
	printf("strl+1%d\n", j);
	printf("best%d\n", k);
}
