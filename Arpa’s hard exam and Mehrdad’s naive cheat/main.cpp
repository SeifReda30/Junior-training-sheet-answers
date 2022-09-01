#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // there is no data type which store number more than 100 digits so we changed the algorithm (a relationship between outputs)
    // the last digit of 1378 power () equals the last digit of 8 power ()
   unsigned long long int n,i;
   cin>>n;
    if (n==0)
   {
       cout<<1;
       return 0;
   }
   if (n==1)
   {
       cout<<8;
       return 0;
   }
   if (n==2)
   {
       cout<<4;
       return 0;
   }
   if (n==3)
   {
       cout<<2;
       return 0;
   }
   if (n==4)
   {
       cout<<6;
       return 0;
   }
   else
   {
       i=n;
       while (i>4)
       {
           i=i-4;
       }

                if (i==0)
                    {
                        cout<<1;
                        return 0;
                    }
                 if (i==1)
                    {
                        cout<<8;
                        return 0;
                    }
                if (i==2)
                    {
                        cout<<4;
                        return 0;
                    }
                if (i==3)
                    {
                        cout<<2;
                        return 0;
                    }
                if (i==4)
                    {
                        cout<<6;
                        return 0;
                    }
   }
   // the answer has a sequence of 8 , 4 , 2 , 6 (from power 1 to 4) so we should decrement the power until the range from 1 to 4
}
