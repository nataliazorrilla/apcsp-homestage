#include <stdio.h>
#include <string.h>
#include "november.h"

void february()
{
	printf("FEBRUARY\n\n");
	printf("''Even though February was the shortest month of the year, sometimes it seemed like the longest.'' ―J.D. Robb\n\n");

	printf("Happy Valentine’s Day! Are you having a super awesome day filled with romantic love?\n\n");
	printf("Yeah, well, stop. You just got dumped a couple days back. I’m not saying you should wallow— that’s probably a bad idea. But I wouldn’t frown upon you for eating some heart-shaped chocolates. Actually, I wouldn’t frown on you for doing that even if you hadn’t just broken up with someone. Heart-shaped chocolates are pretty good.\n\n");

	printf("Hey, just curious— where did you go on that date all those months back?\n");
	char input[256];
	fgets(input, 256, stdin);
	
	if (strcmp(input, date) == 0)
	{
		printf("Yeah. Man, you kinda miss that.\n\n");
	}
	else
	{
		printf("No, you went to %s, but forgetting means you’re getting over it, right? Good for you.\n\n", date);
	}

	printf("FEBRUARY STATS\n");
	printf("2 presidents honored. 23 heart-shaped chocolates eaten. 4 months left.\n\n ---- \n\n");
}
