// Problem link: https://codeforces.com/contest/2191/problem/A

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
        vector<int> arr(x);
        for(int i = 0; i < x; i++)
        {
            cin >> arr[i]; 
        }

        bool odd = false, even = false; 
        if(arr[0] % 2 == 0)
        {
            even = true; 
        }else
        {
            odd = true; 
        }
        vector<int> new_arr; 

        bool possible = false; 
        for(int i = 0; i < x; i += 2)
        {
            if(arr[i] % 2 != 0 && even == true)
            {
                possible = true; 
                break;
            }

            if(arr[i] % 2 == 0 && odd == true)
            {
                possible = true; 
                break;
            }
        }

        if(possible)
            cout << "NO" << endl; 
        else
            cout << "YES" << endl; 
        
        
    }
    
    return 0;
}