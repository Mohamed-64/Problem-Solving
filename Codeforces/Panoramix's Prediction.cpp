//https://codeforces.com/contest/80/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, nextPrime;
    bool primes[51];
    for(int i = 0; i < 51; ++i)
    {
        if(i%2 == 0)
            primes[i] = false;
        else
            primes[i] = true;
    }
    primes[0] = primes[1] = false;
    primes[2] = true;
    for(int i = 3; i*i <= 50; i += 2)
    {
        if(primes[i])
        {
            for(int j = i*i; j <= 50; j += i)
            {
                primes[j] = false;
            }
        }
    }

    scanf("%d %d", &n, &m);
    for(int i = n+1; i <= m; ++i)
    {
        if(primes[i])
        {
            nextPrime = i;
            break;
        }
    }
    if(nextPrime == m)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
