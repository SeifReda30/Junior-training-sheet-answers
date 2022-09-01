#include <iostream>

using namespace std;

int main()
{
    int arr[30][2];
    int i,j,n,c=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        for (j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }

    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if(arr[i][0]==arr[j][1])
            {
                c++;
            }
        }
    }
    cout<<c;
}
