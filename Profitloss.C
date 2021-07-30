/*Write a c program to calculate profit or loss           */


#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int cp,sp,result;
printf("Enter the cost price and selling price: ");
scanf("%d%d",&cp,&sp);
result=fabs(cp-sp);
if(sp>=cp)
{
printf("\nThe profit is %d",result);
}
else
printf("\nThe loss is %d",result);
getch();
}