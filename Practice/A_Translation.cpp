// Problem link: https://codeforces.com/problemset/problem/41/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, s2;
    cin >> s >> s2; 

    if(string(s.rbegin(), s.rend()) == s2) 
        cout << "YES" << endl; 
    else 
        cout << "NO" << endl; 
    return 0;
}