// Problem link: https://codeforces.com/contest/2167/problem/C

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

        vector<int> arr(n);
        bool odd_have = false, even_have = 0; 

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i]; 

            if(arr[i] % 2 == 0)
                even_have = true; 
            if(arr[i] % 2 != 0)
            {
                odd_have = true; 
            }
        }

        if(odd_have && even_have)
        {
            sort(arr.begin(), arr.end()); 
        }


        for(int c : arr)
        {
            cout << c << " "; 
        }

        cout << endl; 
    }
    
    return 0;
}