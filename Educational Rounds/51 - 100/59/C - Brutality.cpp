#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k;

    vector<long long int> v(n);
    for(int i=0; i<n; i++) cin >> v[i];
    string s; cin >> s;

    unordered_set<char> st; st.insert(s[0]);
    vector<long long int> tmp; tmp.push_back(v[0]); 
    
    long long int cost = 0;
    
    for(int i=1; i<n; i++)
    {
        if(st.find(s[i]) != st.end())
            tmp.push_back(v[i]);
        else
        {
            sort(tmp.begin(), tmp.end(), greater<long long int>());
            for(int j=0; j<min(k, (int)tmp.size()); j++) cost += tmp[j];
            
            st.clear(); st.insert(s[i]);
            tmp.clear(); tmp.push_back(v[i]);
        }
    }

    sort(tmp.begin(), tmp.end(), greater<long long int>());
    for(int j=0; j<min(k, (int)tmp.size()); j++) cost += tmp[j];
    
    st.clear(); tmp.clear();

    cout << cost << '\n';
    return 0;
}
