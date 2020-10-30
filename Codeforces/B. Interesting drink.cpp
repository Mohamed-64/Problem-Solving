/*
problem/706/B codeforces

*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, q;
    long long m;
    scanf("%d", &n);
    int x[n];
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", x+i);
    }
    sort(x, x+n);
    scanf("%d", &q);
    for(int j = 0; j < q; ++j)
    {
        scanf("%lld", &m);
        printf("%d\n", upper_bound(x, x+n, m)-x);
    }
    return 0;
}
