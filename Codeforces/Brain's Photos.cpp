//https://codeforces.com/contest/707/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    int n, m;
    cin >> n >> m;
    char photo[n * m];
    bool isColord = false;
    for(int i = 0; i < n * m; ++i)
    {
        cin >> photo[i];
        if((photo[i] == 'C') ||(photo[i] == 'M') || (photo[i] == 'Y'))
            isColord = true;
    }
    if(isColord == true)
        cout << "#Color\n";
    else
        cout << "#Black&White\n";
     return 0;
}
