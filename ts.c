#include<stdio.h>
#include<math.h>
#define PI 3.142
int main()
{
float sum,term,num,den,x,deg;
int i;
printf("Enter degree: ");
scanf("%f",&deg);
x=deg*(PI/180);
i=1;
sum=x;
term=x;
num=x;
den=1.0;
do
{
i=i+2;
num=-num*x*x;
den=den*i*(i-1);
term=num/den;
sum=sum+term;
}
while(fabs(term)>=0.000001);
printf("inbuilt function sin(%2f)=%2f\n",deg,sin(x));
printf("user defined sin(%2f)=%2f\n",den,sum);
}
