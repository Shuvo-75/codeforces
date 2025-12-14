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
        if(x > 2)
        {
            int remain_for_chiken = x % 4;
            cout << (x/4) + (remain_for_chiken/2) << endl;
        }else
        {
            cout << x/2 << endl;
        }
    }
    
    return 0;
}