#include<stdio.h>
struct vote
{
	float acp;
	float ec;
	float ce;
	float ee;
	float m2;
}v;
int result(int tvoter, int a[]);
int result(int tvoter, int a[])
{
	int i;
	float per;
	per= 100/tvoter;
	v.acp=0;
	v.ec=0;
	v.ce=0;
	v.ee=0;
	v.m2=0;
	for(i=0;i<tvoter;i++)
	{
		switch(a[i])
		{
			case 1:
				(v.acp)++;
				break;
			case 2:
				(v.ec)++;
				break;
			case 3:
				(v.ce)++;
				break;
			case 4:
				(v.ee)++;
				break;
			case 5:
				(v.m2)++;
				break;			
		}
	}
	v.acp=(v.acp)*per;
	v.ec=(v.ec)*per;
	v.ce=(v.ce)*per;
	v.ee=(v.ee)*per;
	v.m2=(v.m2)*per;
	printf("\n\n");
	printf("-------------RESULT-------------\n");
	printf("|Advance C Programing  : %0.2f |\n", v.acp);
	printf("|Engineering Chemistry : %0.2f |\n", v.ec);
	printf("|Communicative English : %0.2f |\n", v.ce);
	printf("|Electrical Engineering: %0.2f |\n", v.ee);
	printf("|M-2                   : %0.2f |\n", v.m2);
	printf("--------------------------------\n");
}
int main()
{
	int tvoter, a[70], i, c;
	printf("\tVoting System\n");
	printf("--------------------------------\n");
	printf("Enter the No. of Voters: ");
	scanf("%d", &tvoter);
	for(i=0;i<tvoter;i++)
	{
		printf("Select any one option \n");
		printf("1. Advance C Programing\n");
		printf("2. Engineering Chemistry\n");
		printf("3. Communicative English\n");
		printf("4. Electrical Engineering\n");
		printf("5. M-2\n");
		printf("Enter your Vote: \t");
		scanf("%d", &a[i]);
	}
	printf("\n\n--Voting Completed--\n");
	printf("Press 1 to display the result\n\tOR\nPress 0 to Exit.");
	scanf("%d", &c);
	if(c==1)
	{
		result(tvoter,a);
		if(v.acp>v.ec && v.acp>v.ce && v.acp>v.ee && v.acp>v.m2)
		{
			printf("Winner is Advance C Programing.");
		}
		else if(v.ec>v.acp && v.ec>v.ce && v.ec>v.ee && v.ec>v.m2)
		{
			printf("Winner is Engineering Chemistry.");
		}
		else if(v.ce>v.acp && v.ce>v.ec && v.ce>v.ee && v.ce>v.m2)
		{
			printf("Winner is Communicative English.");
		}
		else if(v.ee>v.acp && v.ee>v.ec && v.ee>v.ce && v.ee>v.m2)
		{
			printf("Winner is Electrical Engineering.");
		}
		else
		{
			printf("Winner is M-2.");
		}
	}
	else
	{
		printf("Result will not display");
	}	
	return 0;
}
