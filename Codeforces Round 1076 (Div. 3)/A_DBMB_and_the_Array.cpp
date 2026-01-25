// Problem link: https://codeforces.com/contest/2193/problem/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, x;
        cin >> n >> s >> x; 
        // vector<int> arr(n); 
        int sum = 0; 
        // for(int i = 0; i < n; i++)
        // {
        //     cin >> arr[i];
        //     sum += arr[i];  
        // }
        for(int i = 0; i < n; i++)
        {
            int v;
            cin >> v;
            sum += v; 
        }

        if(s >= sum && (s-sum) % x == 0)
        {
            cout << "YES" << endl; 
        }else
        {
            cout << "NO" << endl; 
        }


    }
    
    return 0;
}