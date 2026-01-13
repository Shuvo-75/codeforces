// Problem link: https://codeforces.com/contest/2184/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        if(x == 2 || x == 3)
        {
            cout << x << endl; 
        }else if(x % 2 == 0)
        {
            cout << "0" << endl; 
        }else if(x % 2 == 1)
        {
            cout << "1" << endl; 
        }
    }
    
    return 0;
}