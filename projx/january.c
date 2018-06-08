#include <stdio.h>
#include <string.h>

void january()
{
	printf("JANUARY\n\n");
	printf("‘’Lots of people go mad in January. Not as many as in May, of course. Nor June. But January is your third most common month for madness.’’ —Karen Joy Fowler\n\n");

	printf("Finals are coming up... but you’re planning to go skiing, so forget those, right? Unfortunately, your teachers haven’t forgotten. To make up for the two-week break you just had, they’ve assigned bonus work. Lucky you!\n\n");
	printf("Okay, you had a good time on your trip, but you have to finish a 2000 word essay on the 2-hour plane ride back. You wrote it out on the ride there (your computer was dead), but now you have to type it out. And if you mess up any words, you’ll probably fail. Capitalization and punctuation count. Ready? Okay.\n");

	char alpha = 'A';
	char essay[8];

	for (int i = 0; i < 7; i++)
	{
		essay[i] = alpha;
		alpha++;
	}
	
	char essayC[] = "The genesis of the word \"breakdown\" came somewhere between the bloody collapse of the Western Roman Empire and the sack of Constantinople. Europe fragmented and then stooped to pick up its pieces; amid the chaos of the Crusades, a new word emerged. Sometimes, just having a way to describe the swirling pandemonium is enough to ward it off. We have heard countless times of the breakdown of society, and yet society always splices itself back together. It would, of course, be a mistake to call a breakdown peaceful. Anyone who has felt their throat close up or mouth go dry in a panic attack can testify to the contrary. Maggots will devour a corpse with revolting ravenousness until they become flies, leaving nothing but a half-gnawed skeleton. For an imploding empire, a breakdown may mean riots or rebellions, with Molotov cocktails and makeshift torches cutting lines of fire through the night. Breakdowns become crackdowns as disintegrating governments grasp for the last strings of power. Fear feeds anger and violence, which in turn feed more fear.\n";

	for (int i = 0; i < 7; i++)
	{
		printf("%c\n Now you copy:\n", essay[i]);
		char input[2000];
		fgets(input, 256, stdin);
		if ((*input) == essay[i])
		{
			printf("Good.\n");
			if (i == 6)
			{ 
				printf("%s\n Now you copy:\n", essayC);
				fgets(input, 2000, stdin);
				if (strcmp(input, essayC) == 0)
				{
					printf("Um. Wow. Okay, you did it.\n\n");
					break;
				}
				else
				{
					printf("Nope. You fail.\n\n");
					break;
				}
			}
				
		}
		else
			{
				printf("Nope. You fail.\n\n");
				break;
			}

	}

	printf("JANUARY STATS\n");
	printf("1 mental breakdown had (5 total). 4 finals taken. 30 runs skied. 5 months left.\n\n ---- \n\n");
}
