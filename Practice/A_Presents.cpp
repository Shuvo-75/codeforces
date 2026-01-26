// Problem link: https://codeforces.com/problemset/problem/136/A

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     vector<int> arr(t); 
//     for(int i = 0; i < t ; i++)
//     {
//         cin >> arr[i]; 
//     }
//     vector<int> new_arr = arr; 
//     sort(new_arr.begin(), new_arr.end()); 

//     for(int i = 0; i < t; i++)
//     {
//         for(int j = 0; j < t; j++)
//         {
//             if(new_arr[i] == arr[j])
//             {
//                 cout << (j + 1) << " "; 
//                 continue;
//             }
//         }
//     }
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int n;
//     cin >> n;

//     vector<int> arr(n), pos(n + 1);

//     for (int i = 0; i < n; i++) 
//     {
//         cin >> arr[i];
//         pos[arr[i]] = i + 1;
//     }

//     for (int i = 1; i <= n; i++) 
//     {
//         cout << pos[i] << " ";
//     }

//     return 0;
// }

// Problem link: https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<int> pos(n + 1);

    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x; 
        pos[x] = i + 1;
    }

    for (int i = 1; i <= n; i++) 
    {
        cout << pos[i] << " ";
    }

    return 0;
}
