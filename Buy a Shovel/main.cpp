#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int k,r,i,result,rem,result2,j;
    cin>>k>>r;
    for (i=1;i<=30;i++)
    {
        result=k*i;
        rem=result%10;
        if(rem==r)
        {
            cout<<i;
            exit(0);
        }
    }
    for (j=1;j<=30;j++)
    {
        result2=k*j;
        if(result2%10==0)
        {
            cout<<j;
            exit(0);
        }
    }


}
