#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tst; cin >> tst;

    while(tst--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        a -= 1;

        int d = abs(b-c) + abs(c-1);

        if(a == d) cout << 3;
        else if(a < d) cout << 1;
        else cout << 2;

        cout << '\n';
    }

    return 0;
}
