// Problem link: https://codeforces.com/contest/1850/problem/B

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
        vector<int> result; 
        for(int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y; 
            if(x <= 10)
            {
                result.push_back(y);
            }else
            {
                result.push_back(0); 
            }
        }

        int max_value = 0; 
        int response = 0; 
        for(int i = 0; i < result.size(); i++)
        {
            if(max_value < result[i])
            {
                max_value = result[i]; 
                response = i + 1; 
            }
        }

        cout << response << endl;    
    }
    
    return 0;
}