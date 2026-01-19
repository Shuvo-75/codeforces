// Problem link: https://codeforces.com/contest/1352/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        
        vector<int> store; 
        int position = 1; 

        while (x > 0)
        {
            long long digit = x % 10; 

            if(digit != 0)
            {
                store.push_back(digit * position);
            }

            x /= 10; 
            position *= 10; 
        }

        cout << store.size() << endl; 
        // sort(store.begin(), store.end(), greater<int>()); 
        for(int c : store)
        {
            cout << c << " "; 
        }

        cout << endl; 
        
    }
    
    return 0;
}