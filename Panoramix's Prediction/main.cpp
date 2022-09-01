#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int isprime (int m)
{
    int i,c=0;
    for (i=2;i<m;i++)
   {
       if (m%i==0)
       {
           c++;
       }
   }
   if (c>0)
   {
       return 0;
   }
   else
   {
       return 1;
   }
}
int main()
{
   int n,m,i;
   cin>>n>>m;
   if (isprime(m))
   {
       for (i=n+1;i>0;i++)
       {
           if (isprime(i))
           {
               if (i==m)
               {
                   cout<<"YES";
                   return 0;
               }
               else
               {
                   cout<<"NO";
                   return 0;
               }
           }
       }

   }
   else
   {
       cout<<"NO";
       return 0;
   }

}
