#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *file;
	char path[100];
	char ch;
	int  characters,words,lines;
	printf("Enter source file path:\n");
	scanf("%s",path);
	file=fopen(path,"r");
	characters=words=lines=0;
		while((ch = fgetc(file) != EOF))
		{
			characters++;
	if ((ch =='\n'|| ch == '\0')){
		lines++;
	}
	if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0' ){
		words++;
		}
		}

	printf("Inside If  words =%d\n",words);
	if( characters>0)
	{
		words++;
		lines++;
	}
	printf(" words =%d\n",words);
	printf("\n");
	printf("Total Characters = %d\n", characters);
	printf("Total  words =%d\n",words);
	printf("Total lines=%d\n",lines);
	fclose(file);
	return 0;
}


