//https://codeforces.com/problemset/problem/767/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    int snacks[n + 1] = {0};
    for(int i = 1; i <= n; ++i)
        cin >> snacks[i];
        bool visited[n + 1] = {false};
        int index = n;
        for(int i = 1 ; i <= n; ++i)
        {
            visited[snacks[i]] = true;
            while(visited[index] && index > 0)
                cout << index-- << " ";
            cout<< "\n";
        }
return 0;
}
