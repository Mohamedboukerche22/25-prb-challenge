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
    int n;
    cin >>n;
    vector<int>hello(n);
    for(int &i:hello)
    {
        cin >>i;
    
    }
    int ea;
    cin >>ea;
    sort(hello.begin(),hello.end());
    while(ea--)
    {
        int a;
        cin >>a;
        int count = upper_bound(hello.begin(),hello.end(),a) - hello.begin();
        cout <<count<<'\n';

    }


    return 0;
}
