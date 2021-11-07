#include<stdio.h>
void main()
{
	int mark1,mark2,mark3,mark4,mark5;
	printf("Program to calculate internal marks\n");
	printf("Enter your mark out of 100\n\n");
	printf("Enter your English Mark\n");
	scanf("%d",&mark1);
	printf("Enter your Maths Mark\n");
	scanf("%d",&mark2);
	printf("Enter your DSA Mark\n");
	scanf("%d",&mark3);
	printf("Enter your DPSD Mark\n");
	scanf("%d",&mark4);
	printf("Enter your OOPs Mark\n");
	scanf("%d",&mark5);
	printf("\nYour marks are\n");
	printf("English: %d\nMaths: %d\nDSA: %d\nDPSD: %d\nOOPs: %d\n\n",mark1,mark2,mark3,mark4,mark5);
	mark1 = mark1/2;
	mark2 = mark2/2;
	mark3 = mark3/2;
	mark4 = mark4/2;
	mark5 = mark5/2;
	printf("After calculation the internal marks are\n");
	printf("English: %d\nMaths: %d\nDSA: %d\nDPSD: %d\nOOPs: %d\n\n",mark1,mark2,mark3,mark4,mark5);
}
