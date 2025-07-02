/*
Author = mohamed boukerche
Date = 2 jul 2025
Status = !happy
*/
#include<bits/stdc++.h>
using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::max;
using std::upper_bound;
using ll = long long;
using str = string;
int main()
{
    int n,a,b,c;
    cin >>n>>a>>b>>c;
    vector<int>dp(n+1,-1);
    dp[0] = 0;
    for(int i=0;i<=n;i++){
        if(i>=a &&dp[i-a] !=-1)
        {
            dp[i] = max(dp[i],dp[i-a] + 1);
        }
        if(i>=b && dp[i-b] !=-1)
        {
            dp[i] = max(dp[i],dp[i-b] + 1);
        }
        if(i>=c && dp[i-c] !=-1 )
        {
            dp[i] = max(dp[i], dp[i-c] + 1);
        }
    }
    cout <<dp[n];



    return 0;
}
