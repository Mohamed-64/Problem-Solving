/*
problem26B codeforces
*/
#include<iostream>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false), cin.tie(NULL);
    string s;
    cin>>s;
    int sumOpenBracket = 0, regularBracketSequence = 0;
    for(int i = 0, l = s.length(); i < l; ++i)
    {
        if(s[i]=='(')
        {
            ++sumOpenBracket;
        }
        else if(s[i]==')'&&sumOpenBracket!=0)
        {
            regularBracketSequence+=2;
            --sumOpenBracket;
        }

    }
    cout<<regularBracketSequence<<"\n";
    return 0;
}
