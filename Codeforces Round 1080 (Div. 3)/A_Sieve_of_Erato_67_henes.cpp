// Problem link: https://codeforces.com/contest/2195/problem/A

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
        bool store = false; 
        for(int i = 0; i < x; i++)
        {
            int v; 
            cin >> v;
            if(v == 67)
            {
                store = true; 
            }
        }

        if(store)
        {
            cout << "YES" << endl; 
        }else
        {
            cout << "NO" << endl; 
        }
    }
    
    return 0;
}