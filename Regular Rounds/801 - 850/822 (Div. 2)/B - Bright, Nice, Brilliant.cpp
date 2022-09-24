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

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=i; j++)
                cout << ((j == 1 || j == i) ? 1 : 0) << ' '; 
            cout << '\n';
        }
    }
    
    return 0;
}
