//https://codeforces.com/contest/768/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, counter= 0;
    cin >> n;
    int stewards[n];
    for(int i = 0; i < n; ++i)
        cin >> stewards[i];
    sort(stewards, stewards + n);
    for(int i = 1; i < n - 1; ++i)
    {
        if((stewards[i] > stewards[0]) && (stewards[i] < stewards[n - 1]))
            ++counter;
    }
    cout << counter << "\n";
    return 0;
}
