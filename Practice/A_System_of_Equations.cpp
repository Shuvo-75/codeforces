// Problem link: https://codeforces.com/problemset/problem/214/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    long long n, m;
    cin >> n >> m;

    long long count = 0;

    for (long long a = 0; a * a <= n; a++) 
    {
        long long b = n - a * a;
        if (b >= 0 && a + b * b == m) 
            count++;
    }

    cout << count << endl;
    return 0;
}
