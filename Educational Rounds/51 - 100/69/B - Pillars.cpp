#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    vector<int> v(n);
    for(int& i: v) cin >> i;

    int idx = -1;
    for(int i=0; i<n; i++)
        if(v[i] == n) { idx = i; break; }

    int L = -1, R = -1;

    if(v[max(0, idx-1)] == n-1)
    {
        L = max(0, idx-1);
        R = idx;
    }

    if(v[min(n-1, idx+1)] == n-1)
    {
        L = idx;
        R = min(n-1, idx+1);
    }

    if(L == -1 && R == -1) cout << "NO";
    else
    {
        int check = n - 2;
        bool f = true;

        while(check != 0)
        {
            f = false;

            if(v[max(0, L-1)] == check)
            {
                L = max(0, L-1);
                check -= 1;
                f = true;
            }

            else if(v[min(n-1, R+1)] == check)
            {
                R = min(n-1, R+1);
                check -= 1;
                f = true;
            }

            if(f == false) break;
        }

        cout << ((f == false) ? "NO" : "YES");
    }

    cout << '\n';

    return 0;
}
