//https://codeforces.com/contest/270/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    int t, a;
    cin >> t;
    while(t--)
    {
        cin >> a;
        if(360 % (180 - a) == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
