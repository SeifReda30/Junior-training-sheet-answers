#include <iostream>
using namespace std;

int main()
{
    int n,i,c=0,s1[1000],s2[1000],s3[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s1[i]>>s2[i]>>s3[i];
    }
    for (i=0;i<n;i++)
    {
        if((s1[i]==1)&&(s2[i]==1)&&(s3[i]==1))
        {
            c++;
        }
        else if (((s1[i]==1)&&(s2[i]==1))||((s2[i]==1)&&(s3[i]==1))||((s1[i]==1)&&(s3[i]==1)))
        {
            c++;
        }
    }
    cout<<c;
}
