#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int convertToDecimal(int x)
{
    int sum=0,lastDigit,temp,i,count=0;
    temp=x;
    while(temp!=0)
    {
       temp=temp/10;
       count++;
    }
    for(i=0;i<count;i++)
    {
      lastDigit=x%10;
      x=x/10;
      sum += pow(2,i)*lastDigit;
    }
return sum;
}
int main()
{ int num;
    printf("enter number in binary\n");
    scanf("%d",&num);
    printf("your number in decimal form is %d",convertToDecimal(num));
    return 0;
}