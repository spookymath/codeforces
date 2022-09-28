#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin >> n >> k;

    vector<int> v(n);
    for(int& i: v) cin >> i;

    vector<int> d(n-1);
    for(int i=1; i<n; i++) d[i-1] = v[i] - v[i-1];

    sort(d.begin(), d.end(), greater<int>());
    
    int ans = v[n-1] - v[0];
    for(int i=0; i<k-1; i++) ans -= d[i];

    cout << ans;

    return 0;
}
