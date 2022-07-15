#include <iostream>
#include <unordered_set>
using namespace std;

int main() 
{
    int T; cin >> T;

    while(T--)
    {
        string s; cin >> s;

        unordered_set<char> ust;
        int ans = 0;

        for(int i=0; i<s.length(); i++)
        {
            if(ust.size() == 3 && (ust.find(s[i]) == ust.end()))
            {
                ust.clear();
                ans += 1;
            }
            ust.insert(s[i]);
        }

        if(ust.size() != 0)
            ans += 1;
        cout << ans << '\n';
    }
    
	return 0;
}
