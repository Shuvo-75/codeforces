// Problem link: https://codeforces.com/contest/1850/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> store(3); 

        for(int i = 0; i < 3; i++)
        {
            cin >> store[i]; 
        }

        sort(store.begin(), store.end(), greater<int>()); 
        if(store[0] + store[1] >= 10)
        {
            cout << "YES" << endl; 
        }else
        {
            cout << "NO" << endl; 
        }
    }
    
    return 0;
}