#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>& v)
{
    for(int i: v)
        cout << i << " ";
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--)
    {
        int n; cin >> n;
        
        vector<int> v(n);
        for(int i=0; i<n; i++) v[i] = i+1;

        cout << n << '\n';
        print(v);
        
        for(int k=2; k<=n; k++)
        {
            int i=k-1;
            swap(v[i], v[i-1]);
            print(v);
        }
    }

    return 0;
}
