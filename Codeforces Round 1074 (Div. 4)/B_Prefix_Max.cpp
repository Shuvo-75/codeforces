// Problem link: https://codeforces.com/contest/2185/problem/B

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
        int max_value = 0, temp; 
        for(int i = 0; i < x; i++)
        {
            cin >> temp; 
            max_value = max(max_value, temp); 
        }

        cout << max_value * x << endl; 

    }
    
    return 0;
}


