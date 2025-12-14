// Problem link: https://codeforces.com/contest/2176/problem/A

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
        if (n == 0) 
        {
            cout << 0 << endl;
            continue;
        }

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i]; 
        }

        vector<int> ans;
        ans.push_back(arr[0]); 

        int value = arr[0]; 
        for(int i = 1; i < n; i++)
        {
            if(value <= arr[i])
            {
                ans.push_back(arr[i]); 
                value = arr[i]; 
            }
        }

        cout << arr.size() - ans.size() << endl;
    }
    
    return 0;
}