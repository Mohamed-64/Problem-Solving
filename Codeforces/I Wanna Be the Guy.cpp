//contest/469/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    int n, p, q, x = 0;
    cin >> n ;
    int freq[n] = {0};
    cin >> p;
    for(int i = 0; i < p; ++i)
    {
        cin >> x;
        ++freq[x - 1];
    }
    cin >> q;
    for(int i = 0; i < q; ++i)
    {
        cin >> x;
        ++freq[x - 1];
    }
    sort(freq, freq + n);
    if(freq[0] == 0)
        cout << "Oh, my keyboard!\n";
    else
        cout << "I become the guy.\n";
    return 0;
}
