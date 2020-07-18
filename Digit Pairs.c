#include<stdio.h>
void main()
{
int n,N,j,large=0,small=1000,remd,i,sum,Pairs=0;
int numbers[500],bitScore[500];
char tem;
scanf("%d",&N);
j=0;
do {
scanf("%d%c", &numbers[j], &tem);
j++;
} while(tem != '\n');
for(j=0;j<N;j++)
{
n=numbers[j];
large=0;
small=1000;
while (n > 0) {
remd = n % 10;
if (remd > large)
{
large = remd;
}
if (remd < small)
{
small = remd;
}
n /=10;
}
bitScore[j]=((large*11)+(small*7))%100;
}
for(i=1;i<9;i++)
{
sum=0;
for(j=0;j<N;j=j+2)
{
n=bitScore[j]/10;
if(n==i)
sum++;
}
if(sum==2)
Pairs++;
else if(sum>=3)
Pairs+=2;
sum=0;
for(j=1;j<N;j=j+2)
{
n=bitScore[j]/10;
if(n==i)
sum++;
}
if(sum==2)
Pairs++;
else if(sum>=3)
Pairs+=2;
}
printf("%d", Pairs);
}
