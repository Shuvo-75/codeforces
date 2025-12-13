// Problem link: https://codeforces.com/contest/2094/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        vector<string> s(3); 
        for(auto &c : s)
        {
            cin >> c;  
        }

        string store; 
        for(auto &c : s)
        {
            store.push_back(c[0]); 
        }

        cout << store << endl;
    }
    
    return 0;
}