// Problem link: https://codeforces.com/contest/1873/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        vector<char> str = {'a', 'b', 'c'};
        int must_swap = 0;
        for(int i = 0; i < x.length(); i++)
        {
            if(str[i] != x[i])
            {
                must_swap ++;
            }
        }
        if(must_swap == 2 || must_swap == 0)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}