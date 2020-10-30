//https://codeforces.com/contest/1/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    long long n, m, a, w = 0, l = 0;
    cin >> n >> m >>a;
    w = n / a ;
    l = m / a ;
    if(n % a != 0)
        ++w;
    if(m % a != 0)
        ++l;
    cout << w * l << "\n";
    return 0;
}
