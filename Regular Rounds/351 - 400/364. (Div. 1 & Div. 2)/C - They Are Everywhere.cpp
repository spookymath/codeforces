#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;

    unordered_set<char> st;
    for(char ch: s) st.insert(ch);

    int ans = n; // to be minimized
    
    unordered_map<int, int> mp;
    int i = 0, j = i + 1;
    mp[s[i]] += 1;

    while(j < s.length())
    {
        mp[s[j]] += 1;
        if(mp.size() == st.size())
        {
            int temp = j - i + 1;
            while(mp.size() == st.size())
            {
                mp[s[i]] -= 1;
                if(mp[s[i]] == 0)
                {
                    ans = min(ans, temp);
                    mp.erase(s[i]);
                    i += 1;
                    break;
                }
                else
                {
                    temp -= 1;
                    i += 1;
                }
            }
        }

        j += 1;
    }

    cout << ans << '\n';

    return 0;
}

