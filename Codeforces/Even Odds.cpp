//contest/318/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    long long n, k;
    cin >> n >> k;
        if(k<=(( n + 1 ) / 2 ))
        {
            cout << 2 * k - 1 << "\n";
        }
        else
        {
            cout << 2 * ( k - (n + 1) / 2) << "\n";
        }
    return 0;
}
