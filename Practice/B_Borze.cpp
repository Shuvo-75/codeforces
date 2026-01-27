// Problem link: https://codeforces.com/problemset/problem/32/B

#include <bits/stdc++.h>

using namespace std;
void numerical_value(string s)
{
    int i = 0; 
    while (i < s.size())
    {       
        if(s[i] == '.')
        {
            cout << 0; 
            i++; 
        }else if(s[i] == '-')
        {
            if(s[i + 1] == '.')
            {
                cout << 1; 
            }else
            {
                cout << 2; 
            }
            i += 2; 
        }
    }
    
}
int main()
{
    string s;
    cin >> s;

    numerical_value(s); 
    return 0;
}