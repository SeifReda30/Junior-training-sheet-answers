#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long n,m;
    int c1=0,c2=0,min=10000;
    cin>>n>>m;
    if (n>m)
    {
        cout<<n-m;
    }
    else if (n<m)
    {
        long long num1=n;
        long long num2=n;
        if ((n*2)>m)
        {
            while (true)
            {
                num1--;
                c1++;
                if ((num1*2)==m)
                {
                    c1++;
                    cout<<c1;
                    return 0;
                }
            }

        }
        else if ((n*2)<m)
        {
                num1=n;
                c2=0;
                num2=num1;
                while (true)
                {
                    num2*=2;
                    c2++;
                    if (num2>m)
                    {
                        c2+=(num2-m);
                        if (c2<min)
                        {
                            min=c2;
                        }
                        break;
                    }
                }
            num1--;
            while ((num1)!=0)
            {
                c2=0;
                num2=num1;
                while (true)
                {
                    num2*=2;
                    c2++;
                    if (num2>m)
                    {
                        c2+=(num2-m);
                        if (c2<min)
                        {
                            min=c2;
                        }
                        break;
                    }
                }
                num1--;
                min++;

            }
            cout<<min;

        }
        else
        {
            cout<<1;
        }
    }
    else
    {
        cout<<0;
    }

}
