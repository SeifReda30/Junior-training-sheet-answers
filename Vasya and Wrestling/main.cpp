#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string last="";
   long long int first_point=0,second_point=0,n,i,a;
   cin>>n;
   int first[n],second[n];
   long long int j,k;
   j=0;
   k=0;
   for (i=0;i<n;i++)
   {
       cin>>a;
       if (a>0)
       {
           first_point+=a;
           first[j]=a;
           j++;

       }
       else
       {
           second_point+=abs(a);
           second[k]=abs(a);
           k++;
       }
       if (i==n-1)
       {
           if (a>0)
           {
               last+="first";
           }
           else
           {
               last+="second";
           }
       }
   }
   if (first_point==second_point)
   {
       if(lexicographical_compare(first,first+j,second,second+k))
       {
           cout<<"second";
       }
       else if (lexicographical_compare(second,second+k,first,first+j))
       {
           cout<<"first";
       }
       else
       {
           cout<<last;
       }
   }
   else
   {
       if (first_point>second_point)
       {
           cout<<"first";
       }
       else
       {
           cout<<"second";
       }
   }



}
