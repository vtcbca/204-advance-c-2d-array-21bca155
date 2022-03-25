#include<stdio.h>
#include<conio.h>
void sumofdigites();
void palindrom(int);
int armstrong();
int squareseries(int);
int menu();

void main()
{
	int a,c,b,no;
	char yn;
	do
	{
		clrscr();
		c=menu();
		switch(c)
		{
			case 1:
				sumofdigites();
				break;

			case 2:
				printf("\n enter any number");
				scanf("%d",&a);
				palindrom(a);
				break;

			case 3:
				printf("\n enter any number");
				scanf("%d",&no);
				c=squareseries(no);
				printf("%d",&c);
				break ;

			case 4:
				b=armstrong();
				if(b==1)
					printf("\n\t it is armstrong");
				else
					printf("\n\t it is not armstrong");
				getch();
				break;
			case 5:
				exit(0);

			default:
				printf("\n invalid choice \n\t please enter number between 1 to 4");
				break ;


		}
		printf("\n do you want to continue?(YES=Y/y,NO=N/n:)");
		flushall();
		scanf("%c",&yn);
       }while(yn=='Y'||yn=='y');
	getch();
}
int menu()
{
	int choice;
	printf("\n\t MENU");
	printf("\n----------------------------------");
	printf("\n1.sumofdigit\n2.palindrom\n3.squareseries\n4.armstrong\n5.exit");
	printf("\n-------------------------");
	printf("\n enter your choice:");
	scanf("%d",&choice);
	return(choice);
}
void sumofdigites()
{
	int n,r,sum=0;
	printf("enter number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum of digit=%d",sum);
}
void palindrom(int x)
{
	int b,c,s=0;
	c=x;
	while(x>0)
	{
		b=x%10;
		s=b+s*10;
		x=x/10;
	 }
	 if(c==s)
		printf("\n %d is palidom number");
	 else
		printf("\n%d is not palidom number");
}
int squareseries(int x)
{
	int i;
	for(i=1;i<x;i++)
	{
		printf("%d",i*i);
	}
	return(i);
}
int armstrong()
{
	int a,b,sum=0,r;
	clrscr();
	printf(" enter any number:");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
		r=a%10;
		sum=sum+(r*r*r);
		a=a/10;
	}
	if(b==sum)
		b=1;
	else
		b=0;
	return b;
}
