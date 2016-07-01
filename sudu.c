#include<stdio.h>
int main()
{
int a[12][12];
int i,j,s,t,k=1;
printf("\n Enter Input:\n");
for(i=0;i<12;i++)
{
for(j=0;j<12;j++)
{
scanf("%d",&t);
if(t>0 && t<12)
a[i][j]=t;
else
{
f= 0;
printf("Invalid Input\n");
break;
}
}
if(f)
{
for(i=0;i<12;i++)
{
s=0;
for(j=0;j<12;j++)
s=s+a[i][j];
if(s!=46)
break;
}
if(s==46)
{
for(i=0;i<12;i++)
{
s=0;
for(i=0;i<12;i++)
s=s+a[i][j];
if(s!=46)
break;
}
if(s==46)
printf("valid");
else
printf("Invalid");
}
else
printf("\n Invalid");
}
}
