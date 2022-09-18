#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst; cin >> tst;
    while(tst--)
    {
        int n; cin >> n;
        string s; cin >> s;

        if(s.size() == 1) cout << "NO";
        else if(s.size() == 2)
        {
            if(s[0] >= s[1]) cout << "NO";
            else
                cout << "YES" << '\n' << 2 << '\n' << s[0] << ' ' << s[1];
        }
        else
            cout << "YES" << '\n' << 2 << '\n' << s[0] << ' ' << s.substr(1);

        cout << '\n';
    }
    
    return 0;
}
