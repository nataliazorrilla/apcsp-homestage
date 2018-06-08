#include <stdio.h>
#include <string.h>

void april()
{
	printf("APRIL\n\n");
	printf("‘’April is the cruelest month, breeding lilacs out of the dead land, mixing memory and desire, stirring dull roots with spring rain.’’ -T.S. Eliot\n\n");

	printf("It’s raining. Stay inside. Drink a cup of tea, or coffee, but weren’t you planning to cut back? Write some cliche poetry.\n");
	
	int check = 2;
	char input[2000];
	while (check != 1)
	{
		fgets(input, 2000, stdin);
		if (strlen(input) > 500)
		{
			printf("Nice.\n\n");
			check = 1;
			break;
		}
		else
		{
			printf("Is that an actual poem? Make it longer than 500 characters.\n");
			check = 2;
		}
	}

	printf("APRIL STATS\n");
	printf("1 spring break taken. 2 long college books read. 17 days with rain. 2 months left.\n\n ---- \n\n");

}
