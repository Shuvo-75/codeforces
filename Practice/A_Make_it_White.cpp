// Problem link: https://codeforces.com/contest/1927/problem/A

#include <bits/stdc++.h>

using namespace std;

void solve() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int first_b = -1;
    int last_b = -1;

    for (int i = 0; i < n; i++) 
    {
        if (s[i] == 'B') 
        {
            first_b = i;
            break; 
        }
    }


    for (int i = n - 1; i >= 0; i--) 
    {
        if (s[i] == 'B') 
        {
            last_b = i;
            break;
        }
    }

    int ans = last_b - first_b + 1;
    
    cout << ans << endl;
}

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}