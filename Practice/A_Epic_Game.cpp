// // Problem link: https://codeforces.com/problemset/problem/119/A

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int a, b, n;
//     cin >> a >> b >> n;

//     bool turn = false; 
//     while (true)
//     {
//         if(!turn)
//         {
//             int g = __gcd(a, n); 
//             if(n < g)
//             {
//                 cout << 1 << endl; 
//                 break;
//             }
//             n -= g; 
//             turn = true;
//         }

//         if(turn)
//         {
//             int g = __gcd(b, n); 
//             if(n < g)
//             {
//                 cout << 0 << endl; 
//                 break;
//             }
//             n -= g; 
//             turn = false; 
//         }
    
//     }
    
//     return 0;
// }

// Problem link: https://codeforces.com/problemset/problem/119/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;

    bool turn = false; 
    while (true)
    {
        int g = __gcd(a, n); 
        if(n < g)
        {
            cout << 1 << endl; 
            break;
        }
        n -= g; 

        g = __gcd(b, n); 
        if(n < g)
        {
            cout << 0 << endl; 
            break;
        }
        n -= g; 
    
    }
    
    return 0;
}