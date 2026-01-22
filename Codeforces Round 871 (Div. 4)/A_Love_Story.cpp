// Problem link: https://codeforces.com/contest/1829/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, stock;
        cin >> s;
        stock = "codeforces"; 

        int missing = 0; 
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != stock[i])
            {
                missing++; 
            }
        }

        cout << missing << endl; 
    }
    
    return 0;
}