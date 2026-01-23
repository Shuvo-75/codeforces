// Problem link: https://codeforces.com/contest/2009/problem/B

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

        vector<int> store; 
        for(int i = 0; i < x; i++)
        {
            string s;
            cin >> s;

            for(int j = 0; j < 4; j++)
            {
                if(s[j] == '#')
                {
                    store.push_back(j+1); 
                    break;
                }
            }
        }

        reverse(store.begin(), store.end()); 

        for(auto c : store)
        {
            cout << c << " "; 
        }

        cout << endl; 
    }
    
    return 0;
}