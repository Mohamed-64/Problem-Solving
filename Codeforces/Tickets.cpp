#include<iostream>
#include<deque>
using namespace std;
int main()
{
    int n, a, id;
    deque<int>dq;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d%d", &a, &id);
        if(a==1)
        dq.push_back(id);
        else
        {
            if(id==dq.front())
            {
                printf("Yes\n");
                dq.pop_front();
            }
            else
            {
                printf("No\n");
                dq.pop_front();
            }

        }
    }
    return 0;
}
