#include <bits/stdc++.h>
using namespace std;

string solve()
{
	int N; cin >> N;

	if(N <= 9) return to_string(N);
	
	int v = 0;
	int i = 9;

	while(N != 0)
	{
		if(N - i >= 0) 
		{
			v = v*10 + i;
			N -= i;
		}

		i -= 1;
	}

	string c = to_string(v);
	reverse(c.begin(), c.end()); 

	return c;
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
