// Problem link: https://codeforces.com/contest/1873/problem/B

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
        vector<int> store(x); 
        for(int i = 0; i < x; i++)
        {
            cin >> store[i]; 
        }

        long long final_value = 0; 
        for(int i = 0; i < x; i++)
        {
            store[i]++; 
            long long product = 1; 
            for(int j = 0; j < x; j++)
            {
                product *= store[j]; 
            }
            final_value = max(final_value, product); 
            store[i]--; 
        }
        cout << final_value << endl; 
    }
    
    return 0;
}