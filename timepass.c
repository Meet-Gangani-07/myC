#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n;
float a,b,c,root1,root2,d;
float i;
printf("\n Enter any value of a:");
scanf("%f",&a);
printf("\n Enter any value of b:");
scanf("%f",&b);
printf("\n Enter any value of c:");
scanf("%f",&c);
 d=b*b-4*a*c;
 if(d>0)
 {
n=1;
 }
 else
 {
if(d<0)
{
n=2;
}
else
{
n=3;
}
 }
 switch(n)
 {
case 1:
root1=(-b+sqrt(d))/(2*a);
root2=(-b-sqrt(d))/(2*a);
printf("\n The value for root1 is %f and root2 is %f",root1,root2);
break;
case 2:
root1=-b/2*a;
i=sqrt(-d)/(2*a);
printf("\n The value of root is %f + i%f",root1,i);
break;
case 3:
root1=root2=-b/2*a;
printf("\n The value of root is %f",root1);
break;
default:
printf("\n AAP GALAT HOOOO||||");
 }
}
