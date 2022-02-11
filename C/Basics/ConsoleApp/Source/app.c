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
void menu();
void E_menu();
void HA_menu();
void F_menu();
void C_menu();
void view_details_1();

void main()
{
	menu();
/*	int r,n;
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
*/
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
void menu()
{
	char ent;
	int choice;
	printf("WELCOME TO E-SHOPPING\n\n");
	printf("Do you wish to proceed (press Enter)\n");
	scanf("%c",&ent);
  if(ent == '\n')
  {
	printf("1.Electronics\n2.Home Appliance\n3.Furnitures\n4.Clothing\n\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: {
		       printf("\nWelcome to Electronics Section\n");
			       E_menu();    		    		       
		       break;
	        }
		case 2:{
		       printf("\nWelcome to Home-Appliances Section\n");
			       HA_menu();
		       break;
	       }
		case 3:{
		       printf("\nWelcome to Furnitures Section\n");
			       F_menu();		       		       
		       break;
	       }
		case 4:{
		       printf("\nWelcome to clothing Section\n");		  
			       C_menu(); 
		       break;
	       }
	}
   }
}
void E_menu()
{
	int a;
	char per;
	printf("Want to go through the Electronic section\n[Yes - Y,no - n]\n");
        scanf("%c",&per);
        scanf("%c",&per);
        if(per == 'Y'){
printf("1.Mobile Phones\n2.Laptops\n3.Smart Watches\n4.Tablets\n");
view_details_1();
	}
printf("\nEnter your choice to proceed\n");
scanf("%d",&a);
}
void HA_menu()
{
	 int a;
	 char per;
	 printf("Want to go through the Home-Appliances section\n[Yes - Y,no - n]\n");
         scanf("%c",&per);
         scanf("%c",&per);
         if(per == 'Y'){
printf("1.Smart Tv's\n2.Refridgerator\n3.Air Conditioner\n4.\n");
}
printf("\nEnter your choice to proceed\n");
scanf("%d",&a);
}
void F_menu()
{
	int a;
	char per;
	printf("Want to go through the Furnitures section\n[Yes - Y,no - n]\n");
        scanf("%c",&per);
        scanf("%c",&per);
        if(per == 'Y'){
printf("1.Dining Table\n2.Chair\n3.\n4.\n");
}
printf("\nEnter your choice to proceed\n");
scanf("%d",&a);
}
void C_menu()
{
	 int a;
	 char per;
	 printf("Want to go through the Clothing section\n[Yes - Y,no - n]\n");
         scanf("%c",&per);
         scanf("%c",&per);
        if(per == 'Y'){
printf("1.Men's Clothing\n2.Women's Clothing\n3.Children's Clothing\n4.\n");
}
printf("\nEnter your choice to proceed\n");
scanf("%d",&a);
}

void view_details_1()
{
//	printf("The details of the mobile phone %s is to be displayed\n",a);
        int c;
	FILE *fp;
	fp = fopen("sample.txt","r");
	while(( c = fgetc(fp)) != EOF)
	{
		putc(c,stdout);
	}
	fclose(fp);
}
