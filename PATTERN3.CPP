#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,m;
for(i=1;i<=5;i++)
{
for(m=1;m<=i;m++)
{
printf("*");
}
for(j=9;j>=2*i;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("*");
}
printf("\n");
}
for(i=1;i<=5;i++)
{
for(j=5;j>=i;j--)
{
printf("*");
}
for(k=2;k<2*i;k++)
{
printf(" ");
}
for(m=5;m>=i;m--)
{
printf("*");
}
printf("\n");
}
getch();
}
