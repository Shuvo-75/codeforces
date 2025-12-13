// Problem link: https://codeforces.com/contest/2167/problem/B

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
        string new_s; 
        cin >> new_s; 
        for(auto &c : s)
        {
            c = tolower(c); 
        }

        for(auto &c : new_s)
        {
            c = tolower(c); 
        }
        sort(s.begin(), s.end()); 
        sort(new_s.begin(), new_s.end()); 

        if(s == new_s)
            cout << "YES" << endl; 
        else
            cout << "NO" << endl;
    }
    
    return 0;
}