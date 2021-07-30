/*Write a c program to check whether the triangle is equilateral or isosceles or scalene triangle:      */



#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter the length of 1st 2nd and 3rd edge");
scanf("%d%d%d",&a,&b,&c);
if(a==b && b==c)
{
printf("\nThe triangle is equilateral");
}
else if(a==b || b==c || a==c)
{
printf("\nThe triangle is isosceles");
}
else
{
printf("\nThe triangle is scalene");
}
getch();
}