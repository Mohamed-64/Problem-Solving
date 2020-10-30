//https://codeforces.com/contest/785/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(0), cin.tie(0);
    int n, sum = 0;
    string geometricFigure;
    cin >> n;
    while(n--)
    {
        cin >> geometricFigure;
        if(geometricFigure == "Tetrahedron")
            sum+=4;
        else if(geometricFigure == "Cube")
            sum+=6;
        else if(geometricFigure == "Octahedron")
            sum+=8;
        else if(geometricFigure == "Dodecahedron")
            sum+=12;
        else
            sum+=20;
    }
    cout << sum <<"\n";

    return 0;
}
