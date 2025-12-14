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

        vector<long long> arr(n);
        vector<long long> another_arr(n);

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin >> another_arr[i];
        }


        long long max_red = 0, max_blue = 0; 
        for(int i = 0; i < n; i++)
        {
            long long val1 = max_red - arr[i];
            long long val2 = max_blue - arr[i];
            long long val3 = another_arr[i] - max_blue;
            long long val4 = another_arr[i] - max_red;

            max_red = max({val1, val2, val3, val4});
            max_blue = min({val1, val2, val3, val4});
        }

        cout << max(max_red, max_blue) << endl;
        
    }
    
    return 0;
}