//https://codeforces.com/contest/160/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numOfCoins, sumCoins = 0;
    cin >> numOfCoins;
    int coins[numOfCoins];
    for(int i = 0; i < numOfCoins; ++i)
    {
        cin >> coins[i];
        sumCoins += coins[i];
    }
    sort(coins, coins + numOfCoins);
    int minCoins = 0, counter = 0;
    for(int i = numOfCoins - 1; i >= 0; --i)
    {
        minCoins += coins[i];
        ++counter;
        if(minCoins > sumCoins - coins[i])
            break;
        sumCoins -= coins[i];
    }
    cout << counter << "\n";
    return 0;
}
