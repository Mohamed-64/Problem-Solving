//http://codeforces.com/contest/584/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len, t, num = 0;
    scanf("%d %d", &len, &t);
    num = len;
    if(num == 1 && t == 10)
        printf("-1\n");
    else
    {
        if(t == 10)
        {
            printf("%d", t);
            for(int i = 1; i < len - 1; ++i)
                printf("0");
            printf("\n");
        }
        else
        {
            printf("%d", t);
            for(int i = 1; i < len; ++i)
                printf("0");
            printf("\n");
        }

    }
    return 0;
}
