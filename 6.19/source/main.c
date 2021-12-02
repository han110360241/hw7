#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i,b,a,c;
	float per = 0;
	srand(time(NULL));
	for (b = 0; b < 36000; b++)
	{
	
		i = (rand() % 6 + 1);
		a = (rand() % 6 + 1);
		c = i + a;
		printf("%d", c);
		printf("\n");
		if (c == 7)
		{
			per = per + 1;
		}
	}

	printf("出現7的機率為%.6f", per/36000);


	system("pause");
	return 0;
}