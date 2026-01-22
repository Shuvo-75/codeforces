// Problem link: https://codeforces.com/contest/1829/problem/B

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

        int count = 0; 
        int longest_count = 0; 
        for(int i = 0; i < x; i++)
        {
            int value; 
            cin >> value; 
            if(value == 0)
            {
                count++; 
                longest_count = max(count, longest_count); 
            }else
            {
                count = 0; 
            }
        }

        cout << longest_count << endl; 
        
    }
    
    return 0;
}