#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str = "abcdefghijklmnopqrstuvwxyz";

    int tst; cin >> tst;
    while(tst--)
    {
        int n; cin >> n;
        string s; cin >> s;

        string c = "";

        for(int i=n-1; i>=0; i--)
        {
            if(s[i] == '0')
            {
                int x = s[i-2] - '0';
                int y = s[i-1] - '0';
                c += str[x*10 + y - 1];
                i -= 2;
            }

            else
            {
                int x = s[i] - '0';
                c += str[x - 1];
            }
        }

        reverse(c.begin(), c.end());
        cout << c << '\n';
    }

    return 0;
}
