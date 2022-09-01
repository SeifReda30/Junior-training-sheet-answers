// not accepted but worked with first test case
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct date
{
  int day,month,year;
  unsigned long long int cons;
};
int main()
{
    int i,n;
    int x=0,result=0,c=0,j;
    int arr[100][100]; // don't initialize 2 dimensional array more than 100 element
    struct date info[1000];
    while (n!=0)
    {
        cin>>n;
        for (i=0;i<n;i++)
        {
            cin>>info[i].day>>info[i].month>>info[i].year>>info[i].cons;
        }
        for (i=0;i<n-1;i++)
        {
            if ((info[i].day==31 && info[i+1].day==1) && (info[i].month == 1 || info[i].month == 3 || info[i].month == 5 || info[i].month ==7 || info[i].month ==8 || info[i].month ==10 || info[i].month ==12))
            {
                if ((info[i].month==12 && info[i+1].month==1) && (info[i+1].year==(info[i].year+1)))
                {
                    c++;
                    result+=(info[i+1].cons-info[i].cons);
                }
                if ((info[i].year==info[i+1].year) && (info[i].month+1==info[i+1].month))
                {
                    c++;
                    result+=(info[i+1].cons-info[i].cons);
                }
            }
            if ((info[i].day==30 && info[i+1].day==1) && (info[i].month == 4 || info[i].month == 6 || info[i].month ==9 || info[i].month ==11))
            {
                if ((info[i].year==info[i+1].year) && (info[i].month+1==info[i+1].month))
                {
                    c++;
                    result+=(info[i+1].cons-info[i].cons);
                }
            }
            if (info[i].month==2)
            {
                if (info[i].year%4==0)
                {
                    if (info[i].year%100==0)
                    {
                        if (info[i].year%400==0)
                        {
                        if (info[i].day==29 && info[i+1].day==1)
                        {
                            if ((info[i].year==info[i+1].year) && (info[i].month+1==info[i+1].month))
                            {
                                c++;
                                result+=(info[i+1].cons-info[i].cons);
                            }
                        }
                        }
                        else
                        {
                        if (info[i].day==28 && info[i+1].day==1)
                        {
                        if ((info[i].year==info[i+1].year) && (info[i].month+1==info[i+1].month))
                        {
                            c++;
                            result+=(info[i+1].cons-info[i].cons);
                        }
                        }
                        }
                    }
                    else
                    {
                        if (info[i].day==29 && info[i+1].day==1)
                        {
                            if ((info[i].year==info[i+1].year) && (info[i].month+1==info[i+1].month))
                            {
                                c++;
                                result+=(info[i+1].cons-info[i].cons);
                            }
                        }
                    }
                }
                else
                {
                    if (info[i].day==28 && info[i+1].day==1)
                    {
                        if ((info[i].year==info[i+1].year) && (info[i].month+1==info[i+1].month))
                        {
                            c++;
                            result+=(info[i+1].cons-info[i].cons);
                        }
                    }
                }
            }
            else
            {
                if ((info[i].year==info[i+1].year) && (info[i].month==info[i+1].month) && (info[i+1].day-info[i].day==1))
                {
                    c++;
                    result+=(info[i+1].cons-info[i].cons);
                }
            }
        }
        arr[x][0]=c;
        arr[x][1]=result;
        c=0;
        result=0;
        x++;
    }
    for (j=0;j<x-1;j++)
    {
        if (j==x-2)
        {
            cout<<arr[j][0]<<" "<<arr[j][1];
            return 0;
        }
        cout<<arr[j][0]<<" "<<arr[j][1]<<endl;
    }

}
/*
accepted

#include <iostream>
using namespace std;

int M[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool oneday(int ad, int am, int ay, int bd, int bm, int by) {
    if (--bd == 0) {
        if (--bm == 0) {
            --by;
            bm=12;
        }

        bd = M[bm-1];

        bool isleap = (by%4==0 && (by%100!=0 || by%400==0));
        if (bm==2 && isleap) bd=29;
    }
    return ad==bd && am==bm && ay==by;

}

int main() {
    int n, ad=0, am=0, ay=0, ac=0;
    while(cin >> n, n) {
        int sum = 0, count=0;
        while(n--) {
            int bd, bm, by, bc;
            cin >> bd >> bm >> by >> bc;
            if (oneday(ad, am, ay, bd, bm, by)) {
                sum += bc-ac; count++;
            }
            ad = bd; am = bm; ay = by; ac = bc;
        }
        cout << count << " " << sum << endl;
    }

    return 0;
}


*/
