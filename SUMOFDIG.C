/*write a program to enter any number and print sum of digit*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c,sum;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&n);
	while(n>0);
	{
		c=n%10;
		sum=sum+c;
		n=n/10;
	}
	 printf("\n Sum is %d",sum);
	getch();
}
