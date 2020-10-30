//contest/807/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    int n, a, b, previous = 0;
    bool isRated = false, unRated = false, maybe = false;
    cin >> n;
    cin >> a >>b;
    if(a != b)
        isRated = true;
    else
    {
        unRated = true;
        maybe = true;
    }

    previous = a;
    int flag = 0;
    while(--n)
    {
        cin >> a >> b;
        if(a != b)
        {
            isRated = true;
            previous = a;
        }

        else if((a == b) && (a > previous))
            {
                unRated = true;
                previous = a;
                flag = 1;
            }
            else if((a == b) && (a <= previous))
            {
                maybe = true;
                previous = a;
            }
    }
    if(isRated == true)
        cout << "rated\n";
    else if(unRated == true && flag == 1)
        cout << "unrated\n";
    else if(maybe == true)
        cout << "maybe\n";

    return 0;
}
