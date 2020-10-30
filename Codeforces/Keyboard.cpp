//contest/474/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    string unusualKeyboard = "qwertyuiopasdfghjkl;zxcvbnm,./", sentence;
    char direction;
    cin >> direction >> sentence;
    for(int i = 0, l = sentence.length(); i < l; ++i)
    {
        int index = unusualKeyboard.find(sentence[i]);
        if(direction == 'R')
            cout<<unusualKeyboard[index - 1];
        else
            cout<<unusualKeyboard[index + 1];
    }
    cout<<"\n";
    return 0;
}

