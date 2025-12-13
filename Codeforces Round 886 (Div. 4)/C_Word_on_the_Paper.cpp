// Problem link: https://codeforces.com/contest/1850/problem/C

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        char matrix[8][8];
        string result = "";
        for(int i = 0; i < 8; i++)
        {
            for(int j = 0; j < 8; j++)
            {
                cin >> matrix[i][j];
                if(matrix[i][j] >= 'a' && matrix[i][j] <= 'z')
                {
                    result += matrix[i][j];
                }
            }
        }
        cout << result << endl;
    }
    return 0;
}