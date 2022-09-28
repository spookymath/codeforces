#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tst; cin >> tst;

    while(tst--)
    {
        int n; cin >> n;

        vector<int> v(n);
        for(int& i: v) cin >> i;

        sort(v.begin(), v.end());

        cout << min(n-2, v[n-2] - 1) << '\n';
    }

    return 0;
}
