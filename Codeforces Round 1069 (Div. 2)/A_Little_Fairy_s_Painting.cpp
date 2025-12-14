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
        set<int> distinct_value; 
        int max_val = 0; 
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            distinct_value.insert(arr[i]);
            max_val = max(arr[i], max_val);
        }

        int size = distinct_value.size();
        if(n == 1 || size == 0 || arr.size() == size)
        {
            cout << arr[0] << endl;
        }else
        {
            cout << arr[size-1] << endl;
        }
    }
    return 0;
}