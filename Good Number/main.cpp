#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,k,ch=-1,cnt1=0,cnt=0;
  cin>>n>>k;
  string s,str="0123456789";
  while(n--){

     cin>>s;
     for(int i=0;i<=k;i++){
           ch=s.find(str[i]);
            if(ch!=-1){
            cnt1++;
            ch=-1;
           }
     }
     if(cnt1>=k+1)
    cnt++;
    cnt1=0;

  }
  cout<<cnt;

}
