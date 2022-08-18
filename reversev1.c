#include<stdio.h>
int main()
{
int x[10],y,e,f,g;
for(y=0;y<=9;y++)
{
printf("Enter a number :");
scanf("%d",&x[y]);
}
e=0;
f=9;
while(e<f)
{
g=x[e];
x[e]=x[f];
x[f]=g;
e++;
f--;
}
for(y=0;y<=9;y++)
{
printf("%d\n",x[y]);
}
return 0;
}