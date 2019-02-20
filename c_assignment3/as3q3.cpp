#include<stdio.h>
int main()
{
	short int n = 0;
	short int count = 0;

	printf("Entera short integer:");
	scanf("%hd", &n);

	while (n)
	{
		if (n % 2 == 1)
count++;
		n = n / 2;
	}
	printf("Num of One's=%hd", count);
	return 0;
}

    

