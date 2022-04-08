#include<stdio.h>
int btod(int bin);
int main()
{
int bin,dec;
printf("Enter the binary number:");
scanf("%d",&bin);
dec=btod(bin);
printf("Decimal number is %d\n",dec);
return 0;
}
int btod(int bin)
{
if(bin==0)
return 0;
else
return bin%10+btod(bin/10)*2;
}
