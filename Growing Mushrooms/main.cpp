#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    double t1,t2,k,temp;
    double height1,height2,result,height_break;
    cin>>n>>t1>>t2>>k;
    int arr[n][2];
    double percent=k/100;
    double max_height[n][2];
    for (i=0;i<n;i++)
    {
        for (j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    for (i=0;i<n;i++)
    {
        height_break=((arr[i][0]*t1)-((arr[i][0]*t1)*percent));
        height1=height_break+(arr[i][1]*t2);
        height_break=((arr[i][1]*t1)-((arr[i][1]*t1)*percent));
        height2=height_break+(arr[i][0]*t2);
        if (height1>=height2)
        {
            result=height1;
        }
        else
        {
            result=height2;
        }
        max_height[i][0]=i+1;
        max_height[i][1]=result;
    }
    for (i=0;i<n;i++)
    {
        for (j=i;j<n;j++)
        {
            if (max_height[j][1]>max_height[i][1])
            {
                temp=max_height[j][1];
                max_height[j][1]=max_height[i][1];
                max_height[i][1]=temp;

                temp=max_height[j][0];
                max_height[j][0]=max_height[i][0];
                max_height[i][0]=temp;
            }
            else if (max_height[j][1]==max_height[i][1])
            {
                if(max_height[j][0]<max_height[i][0])
                {
                    temp=max_height[j][1];
                    max_height[j][1]=max_height[i][1];
                    max_height[i][1]=temp;

                    temp=max_height[j][0];
                    max_height[j][0]=max_height[i][0];
                    max_height[i][0]=temp;
                }

            }

        }

    }
    for (i=0;i<n;i++)
    {
        printf("%d ",(int)max_height[i][0]);
        printf("%.2f",(double)max_height[i][1]);
        cout<<endl;
    }



}
