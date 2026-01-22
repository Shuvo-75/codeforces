// Problem link: https://codeforces.com/contest/1703/problem/C

#include <bits/stdc++.h>

using namespace std;

void sol(int x)
{
    vector<int> arr(x); 
    for(int i = 0; i < x; i++)
    {
        cin >> arr[i]; 
    }

    for(int i = 0; i < x; i++)
    {
        int num;
        string s; 
        cin >> num >> s; 
        int value = arr[i] % 10; 
        for(char c : s)
        {
            if(c == 'D')
            {
                value = (value + 1) % 10; 
            }else
            {
                value = (value - 1 + 10) % 10;
            }
        }

        cout << value << " "; 
    }

    cout << endl; 
}
int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        int x; 
        cin >> x;
        sol(x); 
    }
     
    
    return 0;
}