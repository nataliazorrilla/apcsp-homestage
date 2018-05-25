#include <stdio.h>

int main()
{
	int div;
	printf("Type a number.\n");
	scanf("%d", &div);

	for (int i = 1; i < 101; i++)
	{
		if (div%i == 0)
		{
			printf("%d divides evenly into %d.\n", i, div);
		}
	}
}
