#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst; cin >> tst;
    while(tst--)
    {
        string s; cin >> s;
        int n = s.size();

        vector<int> ans;
        int cost = 0;

        if(s[0] == s[n-1]) // equal
        {
            for(int i=0; i<n; i++)
                if(s[i] == s[0])
                    ans.push_back(i);
        }


        else if(s[0] < s[n-1]) // lo to hi
        {
            vector<vector<int>> grid(26);

            for(int i=0; i<n; i++)
                grid[s[i] - 'a'].push_back(i);

            int x = s[0] - 'a', y = s[n-1] - 'a';

            for(int i=x; i<=y; i++)
                if(grid[i].size() != 0)
                    for(int j=0; j<grid[i].size(); j++)
                        ans.push_back(grid[i][j]);
        }

        else
        {
            vector<vector<int>> grid(26);

            for(int i=0; i<n; i++)
                grid[s[i] - 'a'].push_back(i);

            int x = s[0] - 'a', y = s[n-1] - 'a';

            for(int i=x; i>=y; i--)
                if(grid[i].size() != 0)
                    for(int j=0; j<grid[i].size(); j++)
                        ans.push_back(grid[i][j]);
        }

        for(int i=1; i<ans.size(); i++)
        {
            int x = s[ans[i-1]] - 'a';
            int y = s[ans[i]] - 'a';
            cost += abs(x-y);
        }

        cout << cost << ' ' << ans.size() << '\n';
        for(int i: ans) cout << i + 1 << ' ';
        cout << '\n';
    }

    return 0;
}
