//contest/766/problem/A
#include<iostream>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    string a, b;
    cin>> a >> b;
    if(a == b)
        cout<<-1<<"\n";
    else
        cout<<max(a.length(), b.length())<<"\n";
    return 0;
}
