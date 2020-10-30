//contest/567/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long city[n];
    for(int i = 0; i < n; ++i)
        cin >> city[i];
        for(int  i = 0; i < n; ++i)
        {
            if(i == 0)
                cout << abs(city[0] - city[1]) << " " << abs(city[0] - city[n - 1]) << "\n";
            else if(i == (n - 1))
                cout << abs(city[i] - city[i - 1]) << " " << abs(city[i] - city[0]) << "\n";
            else
                cout << min(abs(city[i] - city[i - 1]), abs(city[i] - city[i + 1])) << " " << abs(max(city[i] - city[0], city[n - 1] - city[i])) << "\n";
        }
    return 0;
}
