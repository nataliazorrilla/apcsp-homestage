#include <stdio.h>

void october()
{
	printf("OCTOBER\n\n");
	printf("‘’October, baptize me with leaves! Swaddle me in corduroy and nurse me with split pea soup. October, tuck tiny candy bars in my pockets and carve my smile into a thousand pumpkins. O autumn! O teakettle! O grace!'' ―Rainbow Rowell\n\n");
	printf("Time to buckle down. What's your main extracurricular again?\n");
	char input[256];
	char ec[256];
	fgets(input, 256, stdin);
	sscanf(input, "%s", ec);
	printf("\n");

	printf("Yikes. There's a little bit of drama in %s.  See, Leo and Katie both really want to go to the away competition this weekend. But there’s only one spot open. Leo has better records from past competitions, but Katie generally works harder. You’re captain— you pick. (1=Leo, 0=Katie)\n", ec);
	int yn = 2;
	fgets(input, 256, stdin);
        sscanf(input, "%d", &yn);
	
	if (yn == 1)
	{
		printf("‘’I mean,’’ says Katie, ‘’It’s fine… I just don’t really understand how the selection process worked. And I mean, some of us are concerned we aren’t getting enough opportunity in the club. That’s all.’’\n\n");
	}
	else
	{
		 if (yn == 0)
			{
				printf("’Oh,’’ says Leo. ‘’You picked her? That’s okay. I guess. But I mean. I do have more experience. And better records. So it would be a shame if you just, like, picked your friends or something.’’\n\n");
			}
		else
			{	
				printf("The other captain picked Leo. Katie is a little upset.\n\n");
			}
	}

	printf("OCTOBER STATS\n");
	printf("50 cups of coffee consumed. You should really limit your intake. 0 pieces of Halloween candy collected-- finals were the next day. 8 months to go.\n\n ---- \n\n");
}	


