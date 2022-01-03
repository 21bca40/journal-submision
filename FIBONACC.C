/*w a p to enter any number and print fibonacci series till that number*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d=1,e;
	clrscr();
	printf("enter the number of terms:");
	scanf("%d",&b);
	printf("fibonacci series:%d",c);
	e=b+c;
	for(a=3;a<=b;a++);
	{
		printf("%d",e);
		d=c;
		c=e;
		e=d+c;
	}
	getch();
}