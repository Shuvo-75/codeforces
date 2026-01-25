// Problem link: https://codeforces.com/contest/2193/problem/B

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
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i]; 
        }

        for(int i = 0; i < n; i++)
        {
            int mx = arr[i]; 
            int pos = i; 

            for(int j = i + 1; j < n; j++)
            {
                if(arr[j] > mx)
                {
                    mx = arr[j]; 
                    pos = j; 
                }
            }

            if(mx > arr[i])
            {
                reverse(arr.begin() + i, arr.begin() + pos + 1);
                break;
            }
        }

        for(auto c : arr)
        {
            cout << c << " "; 
        }

        cout << endl; 
    }
    
    return 0;
}