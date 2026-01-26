// Problem link: https://codeforces.com/problemset/problem/146/A

#include <bits/stdc++.h>

using namespace std;

void isEqual(int t, string x)
{
    int half = t/ 2; 
    int sum1 = 0, sum2 = 0; 
    for(int i = 0; i < t; i++)
    {
        if(x[i] != '4' && x[i] != '7')
        {
            cout << "NO" << endl; 
            return; 
        }

        if(i < half)
        {
            sum1 += x[i] - '0'; 
        }else
        {
            sum2 += x[i] - '0'; 
        }
    }
    if(sum1 == sum2)
    {
        cout << "YES" << endl; 
    }else
    {
        cout << "NO" << endl; 
    }
}

int main()
{
    int t;
    cin >> t;
    string x;
    cin >> x;

    if(t % 2 != 0)
    {
        cout << "NO" << endl; 
        return 0; 
    }

    isEqual(t, x); 
    return 0;
}