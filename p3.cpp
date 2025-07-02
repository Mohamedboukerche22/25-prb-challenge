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
using ll = long long;
using str = string;
 
int main()
{
    int n;
    cin >>n;
    int count = 0;
    vector<int>div ={100,20,10,5,1};
 
    for(int i: div)
    {
        count += n/i;
        n%=i;
    }
 
    cout <<count;
    return 0;
}
