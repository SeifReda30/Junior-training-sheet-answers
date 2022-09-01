#include <iostream>

using namespace std;

int main()
{
    int n;
    int factor=1;
    unsigned long long temp;
    unsigned long long phone;
    cin>>n;
    cin>>phone;
    temp=phone;
    if (n>=2&&n<=100)
    {
        if (n%2==0)
        {
            {
                while(temp)
                {
                    temp=temp/100;
                    factor=factor*100;
                }
                while (factor>1)
                {

                    factor=factor/100;
                    if(factor==1)
                    {
                        cout<<phone/factor;
                    }
                    else
                    {
                        cout<<phone/factor<<"-";
                    }
                    phone=phone%factor;
                }
            }
        }
        else
        {
                while(temp)
                {
                    temp=temp/1000;
                    factor=factor*100;
                }
                while (factor>1)
                {

                    factor=factor/100;
                    if(factor==1)
                    {
                        cout<<phone/factor;
                    }
                    else if(factor>10000)
                    {
                        factor=factor/1000;
                        cout<<phone/factor;
                    }
                    else
                    {
                        cout<<phone/factor<<"-";
                    }
                    phone=phone%factor;
                }
        }
    }

}
