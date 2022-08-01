#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int solve()
{
    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    unordered_set<int> st;
    for(int i=N-1; i>=0; i--)
    {
        if(st.find(v[i]) != st.end())
            return i + 1;
        else
            st.insert(v[i]);
    }

    return 0;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    
    while(tc--)
        cout << solve() << '\n';

    return 0;
}
