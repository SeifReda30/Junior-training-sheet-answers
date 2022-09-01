#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n,h,i,row=0,height;
   cin>>n>>h;
   for (i=0;i<n;i++)
   {
       cin>>height;
       if (height<=h)
       {
           row+=1;
       }
       else
       {
           row+=2;
       }
   }
   cout<<row;




}
