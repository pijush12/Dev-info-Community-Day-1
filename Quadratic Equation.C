/*Write a c program to find all roots of a quadratic equation          */


#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,d,e,x,y;
printf("Enter the value of a, b, c: ");
scanf("%f%f%f",&a,&b,&c);
d=(b*b)-(4*a*c);
e=sqrt(fabs(d));
x=(-b)/(2*a);
y=(e)/(2*a);
if(d>=0)
{
printf("\nThe roots are %f and %f",x+y,x-y);
}
else
{
printf("\nThe roots are %f+i%f and %f-i%f",x,y,x,y);
}
getch();
}