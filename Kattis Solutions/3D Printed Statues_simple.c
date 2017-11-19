#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pow_two(int n)
{
    int counter=0;
    while(pow(2,counter)<=n)
    {
        if(pow(2,counter+1)>=n)
        {
            return counter+2;
        }
        counter+=1;
    }

}
int main ()
{
    int n,ans;
    scanf("%d",&n);
    if(n<4)
        {printf("%d",n);}
    else
    {ans=pow_two(n);
    printf("%d",ans);}
}