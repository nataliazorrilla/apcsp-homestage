#include <stdio.h>

void september()
{
	printf("SEPTEMBER\n\n");
	printf("''We know that in September, we will wander through the warm winds of summer's wreckage. We will welcome summer's ghost.'' -Heny Rollins\n\n");
	printf("Wow, you don’t have much homework, but you do have four brand new syllabi that need signing.\n\n");

	char name[256];
	char input[256];

	for (int i = 0; i < 4; i++)
	{
		printf("Syllabus #%d:\n", i + 1);
		printf("Type your first name to sign.\n");
		fgets(input, 256, stdin);
		sscanf(input, "%s", name);
		printf("Now your parent (not you) should type their first and last name.\n");
		fgets(input, 256, stdin);
		printf("\n");
	}

	printf("Let’s be honest— did you actually get your parents to type in their name here? (1=Y, 0=N)\n");
	int yn =  2;
	fgets(input, 256, stdin);
	sscanf(input, "%d", &yn);
	
	if (yn == 1)
	{
		printf("No, you didn’t. Nice try.\n\n");
	}
	else  if (yn == 0)
		{
			printf("Sounds like academic dishonesty to me…\n\n");
		}
		else 
		{
			printf("That's not even an answer.\n\n");
		}

	printf("SEPTEMBER STATS\n");
	printf("24 total hours of sleep lost. 4 lunches bought off-campus. 4 syllabi signed somewhat fraudulently. 9 months to go.\n\n ---- \n\n");

}

