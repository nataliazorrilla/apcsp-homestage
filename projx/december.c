#include <stdio.h>

void december()
{
	printf("DECEMBER\n\n");
	printf("‘’December, in my memory, is white as Lapland, though there were no reindeers. But there were cats.’’ ― Dylan Thomas\n\n");
	
	printf("Happy holidays! What do you want for your Secret Santa gift?\n\n");
	
	char input[256];
	char gift[256];
	fgets(input, 256, stdin);
	sscanf(input, "%s", gift);
	printf("\n");

	printf("Ooh, good to know. Now take a break. You’ve got half the month off anyway. \n\n");

	printf("DECEMBER STATS\n");
	printf("$200 left on your gift cards before buying gifts. $10 left on your gift cards after buying gifts. 72 cookies baked. 6 months left.\n\n ---- \n\n");
}
