// A. Shizuku Hoshikawa and Farm Legs

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int legs_n;
        cin >> legs_n;
        if(legs_n % 2 == 0)
        {
            cout << (legs_n/4) + 1 << endl;
        }else
        {
            cout << 0 << endl;
        }
    }
    
    return 0;
}