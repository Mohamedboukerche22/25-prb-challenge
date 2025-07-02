/*
Author = mohamed boukerche
Date = 2 jul 2025
Status = !happy
*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using str = string;
int main()
{
    int n,g;
    cin >>n>>g;
    vector<int>dp(n);
    for(int i =0;i<n;i++)
    {
        cin >>dp[i];
    }
    int sum = 0 ;
    for(int i=0;i<g;i++)
    {
        sum+=dp[i];
    }
    int lower = sum;
    int index = 0;

    for(int i=1 ; i <= n - g;++i)
    {
      sum = sum -dp[i-1] + dp[i+g-1];
      if(lower > sum)
     {
        lower = sum;
        index = i;
     }

    }
    
    cout <<index + 1<<'\n';


    return 0;
}
