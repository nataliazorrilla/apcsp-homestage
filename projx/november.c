#include <stdio.h>
char date[256];

void november ()
{
	printf("NOVEMBER\n\n");
	printf("''It is the first day of November and so, today, someone will die.'' -Maggie Stiefvater\n\n");
	printf("It’s November, and you’re in love. Or at least as in love as a teenager hopped up on hormones can be. And turns out the feeling’s mutual! Wow, I’m so proud of you!\n\n");
	printf("Anyway, you’re in the honeymoon phase right now. It seems unfair for me to burden you. Where do you want to have your next date? The beach? The park? Your favorite restaurant? Sky’s the limit.\n");
	char input[256];
	fgets(input, 256, stdin);
	sscanf(input, "%s", date);
	printf("\n");

	printf("NOVEMBER STATS\n");
	printf("0 Tofurkeys eaten (gross). 1 late pass used. 3 points decreased on the Rice Purity Test. 7 months left.\n\n ---- \n\n");
}	
