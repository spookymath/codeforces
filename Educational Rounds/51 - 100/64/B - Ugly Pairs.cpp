#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int tst; cin >> tst;

    while(tst--)
    {
        string str = "abcdefghijklmnopqrstuvwxyz";
        unordered_map<char, int> mp;
        for(const char& ch: str) mp[ch] = 0;

        string s; cin >> s;
        for(char ch: s) mp[ch] += 1;

        string c1 = "", c2 = "";
        for(int i=0; i<26; i++)
            if(mp[str[i]] != 0)
            {
                if(i & 1)
                    for(int j=0; j<mp[str[i]]; j++)
                    c2 += str[i];
                else
                    for(int j=0; j<mp[str[i]]; j++)
                    c1 += str[i];
            }

        char u1 = c1[0]; char u2 = c1[c1.size()-1];
        char v1 = c2[0]; char v2 = c2[c2.size()-1];

        int x = -1;

        if(abs((u2 - '0') - (v1 - '0')) != 1)
        x = 12; //c1 + c2

        else if(abs((v2 - '0') - (u1 - '0')) != 1)
        x = 21; //c2 + c1

        else x = 0;

        if(x == 12) cout << c1 + c2;
        else if(x == 21) cout << c2 + c1;
        else cout << "No answer";

        cout << '\n';
    }

    return 0;
}
