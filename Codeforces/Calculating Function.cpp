//https://codeforces.com/contest/486/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    long long n, sum;
    cin >> n;
    if(n % 2 == 0)
    cout << n/2 << "\n";
    else
        cout << -1 * (n / 2 + 1) << "\n";
    return 0;
}
