#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k; 
    cin >> n >> m >> k;

    vector<int> v;
    
    int t1, t2; cin >> t1;
    for(int i=0; i<n-1; i++)
    {
        cin >> t2;
        v.push_back(t2-t1-1);
        t1 = t2;
    }

    sort(v.begin(), v.end());

    int d = 0;
    for(int i=0; i<n-k; i++) d += v[i];

    cout << d + n << '\n';

    return 0;
}
