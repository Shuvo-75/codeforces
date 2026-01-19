// Problem link: https://codeforces.com/contest/2185/problem/A

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
        for(int i = 1; i <= x; i++)
        {
            cout << i << " "; 
        } 

        cout << endl; 
    }
    
    return 0;
}

// #include <iostream>

// using namespace std;

// void solve() {
//     int n;
//     // Read n, the number of distinct perfect roots required
//     if (!(cin >> n)) return;

//     // Output the first n positive integers as they are all perfect roots
//     for (int i = 1; i <= n; ++i) {
//         cout << i << (i == n ? "" : " ");
//     }
//     cout << "\n";
// }

// int main() {
//     // Standard competitive programming I/O optimization
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     if (cin >> t) {
//         while (t--) {
//             solve();
//         }
//     }
//     return 0;
// }