#include <stdio.h>
#include <string.h>
#include <unistd.h>

int score = 0;
int apnum = 2;

struct AP {
	char question[500];
	char answer[500];
	char correct;
};

void printcheckAP(struct AP* ap)
{
	printf("Ready? The question is:\n");
	printf(" %s\n", ap->question);
	printf(" %s\n", ap->answer);
	char input[500];
	char youranswer;
	fgets(input, 500, stdin);
	sscanf(input, "%c", &youranswer);
	if (ap->correct == youranswer)
	{
		score = score + 1;
	}
	printf("\n\n");
}


void may()
{
	printf("MAY\n\n");
	printf("‘’April showers bring May flowers.’’ -A folk saying\n\n");
	printf("Hey, remember when you decided to take 8 APs? And then you decided to wait to study for your four fall ones “until later”? Yeah, neither did I. But you’re at the Fairgrounds, like, now, so you should p r o b a b l y rack your brain for a couple of these answers. Type only the correct LETTER in UPPERCASE.\n\n");

	struct AP myAP[5];

	strcpy(myAP[0].question, "1. How many cookies did you bake in December?\n");
	strcpy(myAP[0].answer, "A. 48\n B. 64\n C. 72\n D. 24\n");
	myAP[0].correct = 'C';

        strcpy(myAP[1].question, "2. How many cups of coffee did you drink in October?\n");
        strcpy(myAP[1].answer, "A. 50\n B. 23\n C. 65\n D. 34\n");
        myAP[1].correct = 'A';

        strcpy(myAP[2].question, "3. How many runs did you ski in January?\n");
        strcpy(myAP[2].answer, "A. 10\n B. 15\n C. 20\n D. 30\n");
        myAP[2].correct = 'D';

        strcpy(myAP[3].question, "4. How many late passes did you use in November?\n");
        strcpy(myAP[3].answer, "A. 4\n B. 0\n C. 2\n D. 1\n");
        myAP[3].correct = 'D';

        strcpy(myAP[4].question, "5. How many days did it rain in April?\n");
        strcpy(myAP[4].answer, "A. 16\n B. 17\n C. 18\n D. 19\n");
        myAP[4].correct = 'B';
 
	for (int i = 0; i < 5; i++)
	{
		printcheckAP(&myAP[i]);
	}

	if (score == 0)
	{
		score = 1;
	}

	printf("Did you take an AP number label sticker out of your AP student pack?  (1=Y/anything else=N)\n");
	char input[256];
	fgets(input, 256, stdin);
	sscanf(input, "%d", &apnum);
	printf("\n\n");
	
	if  (apnum == 1)
	{
		printf("Okay, your score is… (wait for it)\n\n\n");
		sleep(3);
		printf("LOL did you actually think you were getting your scores now? Nope. They’ll be ready in July, just when you’ve nearly forgotten about them.\n\n");
	}
	else
	{
		printf("Oh… uh… good luck getting your scores, then! Better pray to the gods of College Board.\n\n");
	}

	printf("MAY STATS\n");
	printf("40 hours of study done. 8 AP tests taken. Stress levels critical. 1 month left.\n\n ---- \n\n");	
}




