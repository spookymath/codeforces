#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T; cin >> T;
    
    while(T--)
    {
        int N; cin >> N;
        vector<int> a(N), b(N);

        for(int i=0; i<N; i++) cin >> a[i];
        for(int i=0; i<N; i++) cin >> b[i];

        vector<int> v(N);
        v[0] = b[0] - a[0];

        for(int i=1; i<N; i++)
            v[i] = b[i] - max(a[i], b[i-1]);

        for(int i=0; i<N; i++)
            cout << v[i] << " ";
        
        cout << '\n'; 
    }
    
    return 0;
}
