#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int tst; cin >> tst;
    while(tst--)
    {
        int n; cin >> n;
        vector<int> v(n);

        for(int i=0; i<n; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int mn = v[2] - v[0];

        for(int i=2; i<n-1; i++)
            mn = min(mn, v[i+1] - v[i-1]);
        cout << mn << '\n';
    }
    
    return 0;
}
