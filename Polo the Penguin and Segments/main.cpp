#include <iostream>

using namespace std;

int main()
{
    int n,k,x,y,i,c=0,e=0;
    cin>>n>>k;
    for (i=0;i<n;i++)
    {
        cin>>x>>y;
        c+=((y-x)+1); // c equal numbers covered
    }
    if(c%k==0)
    {
        cout<<0;
        exit(0);
    }
    else
    {
    for (i=1;i>0;i++)
    {
    if(c%k==0)
    {
        break;
    }
    else
    {
        c++;
        e++;
    }
    }
    }
    cout<<e;



}
