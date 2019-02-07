#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    float a[10][10]={0};
    float left=.1;
    float right=1-left;
    a[1][n + 1] = right;
    a[1][n - 1] = left;
       for(int i=2;i<=n;i++)
       {
           for(int j=0;j<=2*n;j++)
           {
               if(j==0)
               {
                   a[i][j]=a[i][j]+a[i-1][j+1]*left;
               }
               else if(j==2*n)
               {
                   a[i][j]=a[i][j]+a[i-1][j-1]*right;
               }
               else
               {
                   a[i][j]=a[i][j]+a[i-1][j+1]*left+a[i-1][j-1]*right;
               }
           }
       }


                for(int j=0;j<=2*n;j++)
                    printf("%5.4f ",a[n][j]);

            }


