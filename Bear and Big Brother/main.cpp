#include <iostream>

using namespace std;

int main()
{
    int a,b,i,y=0;
    cin>>a>>b;
    for (i=1;i>0;i++)
    {
        a=a*3;
        b=b*2;
        y++;
        if (a>b)
        {
            cout<<y;
            exit(0);
        }
    }
}
