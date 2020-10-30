//https://codeforces.com/contest/404/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    set<char>diagonals;
    set<char>otherLetters;
    char square[n][n];
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> square[i][j];
            if((i == j) || (j == (n - i - 1)))
                diagonals.insert(square[i][j]);
            else
                otherLetters.insert(square[i][j]);
        }
    }
    if((diagonals.size() == 1) && (otherLetters.size() == 1) && (*diagonals.begin()) != *otherLetters.begin())
    cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
