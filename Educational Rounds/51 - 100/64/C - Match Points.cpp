#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, k; cin >> n >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end());

    int lo = 0;
    int hi = n/2 + 1; // keep it greater than half

    while(hi - lo > 1) // not adjacent
    {
        int mid = lo + (hi - lo)/2;
        
        bool check = true;
        
        for(int i=0; i<mid; i++)
            check &= (v[n-mid+i] - v[i] >= k);

        if(check) lo = mid;
        else      hi = mid;
    }

    cout << lo << '\n';

    return 0;
}
