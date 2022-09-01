#include <iostream>

using namespace std;

int main()
{
    int n,i,c,z;
    int even=0;
    int odd=0;
    int arr[100];
    cin>>n;
    if (n>=3&&n<=100)
    {
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
            c=i+1;
        }
        else
        {
            odd++;
            z=i+1;
        }
    }
    if(even>odd)
    {
        cout<<z;
    }
    else
    {
        cout<<c;
    }
    }
    return 0;
}
