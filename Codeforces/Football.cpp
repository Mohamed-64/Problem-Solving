//https://codeforces.com/contest/43/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    int num, fTeam = 0, sTeam = 0;
    string teamName, firstTeam, secondTeam;
    cin >> num;
    cin >> teamName;
    firstTeam = teamName;
    ++fTeam;
    while(--num)
    {
        cin >> teamName;
        if(teamName == firstTeam)
        {
            ++fTeam;
        }
        else
        {
            ++sTeam;
            secondTeam = teamName;
        }
    }
    if(fTeam>sTeam)
        cout << firstTeam <<"\n";
    else
        cout << secondTeam <<"\n";
    return 0;
}
