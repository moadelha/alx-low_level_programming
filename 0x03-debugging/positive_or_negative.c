#include <stdio.h>

int main(void)
{
	int i;
	
	printf("type a nuber: ");
	scanf("%d", &i);
	if(i < 0)
	{
		printf("this number provided is negative \n");
	}else
	{
		printf("its positive\n");
	}
}
