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
using ll = long long;
using str = string;
int main()
{
    int n;
    int count = 0;
    cin >>n;
    vector<int>money_talk(n);
    vector<int>larger;
    for(int &interger:money_talk)
    {
        cin >>interger;
    }
    int c = 1;
    int m = 1;
    for(int i =1 ;i<n;++i)
    {
        if(money_talk[i] > money_talk[i-1]){
            ++c;
        }else{
            c =1;
        }
        m = max(m,c);
    }

    cout << m;

    return 0;
}
