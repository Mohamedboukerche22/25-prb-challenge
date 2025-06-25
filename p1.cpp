#include<bits/stdc++.h>

using ll= long long;
using std::cin;
using std::cout;
using std::vector;

int main()
{
    vector<ll> way;
    ll a,b;
    cin >>a>>b;
    
    ll c = b;
    while(c>a)
    {
        if(c%2==0)
        {
            c /=2;
            way.push_back(c);
        }
        else
        {
            c -=1;
            if(c%10==0)
            {
            c/=10;
            }
            else{
                break;
            }
            way.push_back(c);
        }
    }
    reverse(way.begin(),way.end());
    if(c == a)
    {
        cout <<"YES\n"<<way.size()+1<<"\n";
        for(ll i:way)
        {
            cout <<i<<" ";
        }
        cout <<b;
    }
    else
    {
        cout <<"NO\n";
    }

}
