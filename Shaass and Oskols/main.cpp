#include <iostream>

using namespace std;

int main()
{
    int n,i,m,x,y,r,l;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    for (i=0;i<m;i++)
    {
        cin>>x>>y;
        r=arr[x-1]-y;
        arr[x-1]=arr[x-1]-1;
        l=y-1;
        arr[x-1]=arr[x-1]-l;
        arr[x-2]=arr[x-2]+l; // if x=1 then x-2 equal -1 so this line will be discarded
        arr[x-1]=arr[x-1]-r;
        arr[x]=arr[x]+r;
    }
    for (i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
