#include<stdio.h>
int hcf(int n1,int n2)
{
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1= n1-n2;
        }
        else
        {
            n2= n2-n1;
        }
    }
    return n1;
}
int max(int n1,int n2)
{
    return n1>n2 ? n1:n2;
}
int min(int n1,int n2)
{
    return n1>n2 ? n2:n1;
}
int lcm(int n1,int n2)
{
    int maxi = max(n1,n2);
    for(int i=maxi;i<=n1*n2;i+=maxi)
    {
        if(i%min(n1,n2)==0)
        {
            return i;
        }
    }
}
int main()
{
    int n1,d1,n2,d2,lcmans,rem,ansnum,ansden,h;
    printf("Enter the numerator and denominator of first fraction\n");
    scanf("%d%d",&n1,&d1);
    printf("Enter the numerator and denominator of second fraction\n");
    scanf("%d%d",&n2,&d2);
    lcmans = lcm(d1,d2);
    rem = lcmans/d1;
    n1*=rem;
    d1 = lcmans;
    rem = lcmans/d2;
    n2*=rem;
    d2 = lcmans;
    ansnum = n1+n2;
    ansden = d1;
    h = hcf(ansnum,ansden);
    ansnum/=h;
    ansden/=h;
    printf("The answer fraction is : %d/%d",ansnum,ansden);
    return 0;
}