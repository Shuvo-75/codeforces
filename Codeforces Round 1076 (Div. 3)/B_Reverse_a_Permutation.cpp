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
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }

        vector<int> suffixMaxPos(n);
        suffixMaxPos[n - 1] = n - 1;

        for (int i = n - 2; i >= 0; i--) 
        {
            if (arr[i] > arr[suffixMaxPos[i + 1]])
                suffixMaxPos[i] = i;
            else
                suffixMaxPos[i] = suffixMaxPos[i + 1];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[suffixMaxPos[i]] > arr[i]) 
            {
                reverse(arr.begin() + i, arr.begin() + suffixMaxPos[i] + 1);
                break;
            }
        }

        for (int x : arr) 
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
