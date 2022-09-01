#include <iostream>

using namespace std;

int main()
{
    int n,i,x,a;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (i=0;i<n;i++)
{
       x = 180-arr[i]; //law
       if(360%x==0) //law
       {
        cout << "YES" << endl;
       }
       else{
        cout << "NO" << endl;
       }
}
}
