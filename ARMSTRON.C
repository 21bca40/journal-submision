/*write a program to enter any number and check its amstrong number or not*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,re,sum=0,e=0,no;
	clrscr();
	printf("\n Enter a number:");
	scanf("%d",&re);
	no=re;
	while(re!=0)
	{
		a=re%10;
		e=a*a*a;
		sum=sum+e;
		re=re/10;
	}
	if(no==sum)
		printf("%d is an armstrong number",no);
	else
		printf("%d is not an armstrong number",no);
	getch();
}