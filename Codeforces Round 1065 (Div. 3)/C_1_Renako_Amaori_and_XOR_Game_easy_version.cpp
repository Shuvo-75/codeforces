#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> ajisai(n), mai(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> ajisai[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> mai[i];
        }

        int ajisai_count = 0, mai_count = 0;

        for(int i = 0; i < n; i++) {
            if(ajisai[i] != mai[i]) 
            {
                if(i % 2 == 0) 
                    ajisai_count++;
                else 
                    mai_count++;
            }
        }

        if (ajisai_count > mai_count) 
        {
            cout << "Ajisai" << endl;
        }
        else if (mai_count > ajisai_count) 
        {
            cout << "Mai" << endl;
        }else 
        {
            cout << "Tie" << endl;
        }
    }
    return 0;
}

