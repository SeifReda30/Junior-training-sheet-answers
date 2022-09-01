#include <iostream>

using namespace std;

int main()
{
    int n,i,c=0,j;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool valid = true;
    for (i=0;i<n;i++)
    {
        c=0;
        for (j=0;j<n;j++)
        {
        if (arr[i]==arr[j])
        {
            c++;
        }
        }
        if (n<2*c-1) //if there is no enough numbers to swap the most occure numbers
        {
            valid = false;
            break;
        }
    }
                if (valid)
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }



}
