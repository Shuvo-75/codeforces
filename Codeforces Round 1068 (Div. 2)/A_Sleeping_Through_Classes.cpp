#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int count = 0, sleep = 0; 
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                count = k; 
            }else if(count > 0)
            {
                count--; 
            }else
            {
                sleep++; 
            }

        }

        cout << sleep << endl;
    }
    
    return 0;
}