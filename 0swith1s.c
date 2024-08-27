#include<stdio.h>
int main()
{
    int num,num2=0,rem,r;
    printf("Enter the number\n");
    scanf(" %d",&num);
    if(num==0)
    {
        num2 =1;
    }
    while(num>0)
    {
        rem = num%10;
        if(rem==0)
        {
            rem = 1;
        }
        num2 = num2*10+rem;
        num=num/10;
    }
    num = 0;
    while(num2>0)
    {
        r = num2%10;
        num = num*10+r;
        num2=num2/10;
    }
    printf("The number : %d",num);
    return 0;
}