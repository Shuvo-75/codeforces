// Problem link: https://codeforces.com/contest/2167/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr(4); 
        set<int> new_store; 
        for(int i = 0; i < 4; i++)
        {
            cin >> arr[i]; 

            new_store.insert(arr[i]); 
        }

        if(new_store.size() == 1)
        {
            cout << "YES" << endl; 
        }else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}