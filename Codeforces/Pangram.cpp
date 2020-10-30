//contest/520/problem/A
#include<iostream>
#include<algorithm>
using namespace std;
int  main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    int length, counter = 0;
    cin >> length;
    char word[length + 1];
    cin >> word;
    if(length<26)
        cout << "NO\n";
    else
    {
        for(int i = 0; i < length; ++i)
        {
            word[i] = tolower(word[i]);
        }
        sort(word, word + length + 1);
        for(int i = 0; i < length; ++i)
        {
            if(word[i] != word[i + 1])
                ++counter;
        }
        if(counter<26)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}

