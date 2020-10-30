//contest/136/problem/A
#include<iostream>
using namespace std;
int main()
{
    int n, a;
    scanf("%d", &n);
    int arr[n] = {0};
    for(int i = 1; i <= n; ++i)
    {
        scanf("%d", &a);
        arr[a] = i;
    }
    for(int i = 1; i <= n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
