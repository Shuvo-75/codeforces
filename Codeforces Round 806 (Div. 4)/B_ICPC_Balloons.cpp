// Problem link: https://codeforces.com/contest/1703/problem/B

#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
        set<char> store; 
        for(auto &c : s)
        {
            store.insert(c);
        }
 
        cout << n + store.size() << endl;
    }
    
    return 0;
}