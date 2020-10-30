//https://codeforces.com/contest/127/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<pair<int, int>>v;
    double n, k, x, y, previousX, previousY, sum = 0;
    scanf("%lf %lf", &n, &k);
    scanf("%lf %lf", &x, &y);
    previousX = x; previousY = y;
    while(--n)
    {
        scanf("%lf %lf", &x, &y);
        sum += sqrt(pow((previousX - x), 2) + pow((previousY - y), 2));
        previousX = x; previousY = y;
    }
    printf("%.9f\n", sum * (k / 50));
    return 0;
}
