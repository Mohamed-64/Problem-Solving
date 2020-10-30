//https://codeforces.com/contest/208/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    string song;
    bool flag = false;
    cin >> song;
    for(int i = 0, length = song.length() ; i < length; ++i)
    {
        if(song[i] == 'W' && song[i+1] == 'U' && song[i+2] == 'B')
        {
            i += 2;
            if(flag)
                cout << " ";
        }
        else
        {
            cout << song[i];
            flag = true;
        }
    }
    cout << "\n";
    return 0;
}


