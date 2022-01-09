#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ASIZE 20
struct mobile_phone
{
	char name[ASIZE];
	float rate;
	char model[ASIZE];
	char camera[ASIZE];
	char ram[ASIZE];
	char storage[ASIZE];
        char processor[ASIZE];
}m;
void read_details(int);
void view_details(char[],int);
void main()
{
	int r,n;
	char mobile_name[ASIZE];
	printf("To add details press 1\nTo view details press 2\nTo order mobile phone press 3\n");
	scanf("%d",&r);
	if(r == 1)
	{
		printf("How many details you want to add\n");
		scanf("%d",&n);
		read_details(n);
	}
	else if(r == 2)
	{
		printf("Enter the name of the mobile phone to see the details\n");
		scanf("%s",mobile_name);
		view_details(mobile_name,ASIZE);
	}
	else if(r == 3)
	{
		printf("Press 1 to order the mobile phone\n");
	}

} 
void read_details(int n)
{
	int i;
	char filename[ASIZE];
	char ext[] = ".txt";
	FILE *fp;
        struct mobile_phone *p;
	for(i = 1;i <= n;i++)
	{
        p = (struct mobile_phone *)malloc(sizeof(struct mobile_phone));
	printf("Enter the name of mobile phone\n");
        scanf("%s",p->name);
	
	printf("Enter the rate of mobile phone\n");
        scanf("%f",&(p->rate));

	printf("Enter the model of mobile phone\n");
        scanf("%s",p->model);
	
	printf("Enter the camera of mobile phone\n");
        scanf("%s",p->camera);
	
	printf("Enter the ram of mobile phone\n");
        scanf("%s",p->ram);
	
	printf("Enter the storage of mobile phone\n");
        scanf("%s",p->storage);

	printf("Enter the processor of mobile phone\n");
        scanf("%s",p->processor);
        
	strcpy(filename,p->name);
	strcat(filename,ext);
        
	printf("filename is %s\n",filename);
	fp = fopen(filename,"w");

	fprintf(fp,"Mobile name %s\n",p->name);
	fprintf(fp,"Rate %f\n",p->rate);
	fprintf(fp,"Model %s\n",p->model);
	fprintf(fp,"Camera %s\n",p->camera);
	fprintf(fp,"Ram %s\n",p->ram);
	fprintf(fp,"Storage %s\n",p->storage);
	fprintf(fp,"Processor %s\n",p->processor);
        fclose(fp);
	printf("The details is succesfully saved to %s\n",filename);
	}
}
void view_details(char a[],int max)
{
	printf("The details of the mobile phone %s is to be displayed\n",a);
        int r,c;
	FILE *fp;
	char filename[max];
	char ext[] = ".txt";
	strcpy(filename,a);
	strcat(filename,ext);
	fp = fopen(filename,"r");
	while(( c = fgetc(fp)) != EOF)
	{
		putc(c,stdout);
	}
	fclose(fp);
	printf("Do you want to order this mobile phone\n");
	printf("Press 1 to proceed\n");
	printf("Press 0 to exit\n");
	scanf("%d",&r);
	if(r == 1)
	{
	}
	else
	;
}
