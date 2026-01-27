// Problem link: https://codeforces.com/problemset/problem/47/A

#include <bits/stdc++.h>

using namespace std;
bool isTriangleNumber(int num)
{
    long long value = (1ll * num * 8) + 1; 
    long long root_value = round(sqrt(value)); 

    return (root_value * root_value == value);
}
int main()
{
    int n;
    cin >> n; 

    if(isTriangleNumber(n))
        cout << "YES" << endl;   
    else
        cout << "NO" << endl; 
    
    return 0;
}