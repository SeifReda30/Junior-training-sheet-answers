#include <iostream>

using namespace std;

int main()
{
    int n,i,j,p,q,c=0;
    cin>>n;
    int arr[n];
    for (i=0,j=1;i<n,j<=n;i++,j++)
    {
        arr[i]=j;
    }
    cin>>p;
    int x[p];
    for (i=0;i<p;i++)
    {
        cin>>x[i];
    }
    cin>>q;
    int y[q];
    for (i=0;i<q;i++)
    {
        cin>>y[i];
    }
    int m=p+q;
    int brr[m];
    for(i=0;i<p;i++)
    {
        brr[i]=x[i];
    }
    for(i=p,j=0;i<m;i++,j++)
    {
        brr[i]=y[j];
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<m;j++)
        {
            if (arr[i]==brr[j])
            {
                c++;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    if (c==n)
    {
        cout<<"I become the guy.";
    }
    else
    {
        cout<<"Oh, my keyboard!";
    }




}

