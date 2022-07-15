#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	vector<int> v(10, 0); v[0] = 1;
	for(int i=1; i<10; i++)
		v[i] = v[i-1]*10;

	int T; cin >> T;
	while(T--)
	{
		int N; cin >> N;

		int ans = N - v[0];

		for(int i=1; i<10; i++)
			if(N >= v[i])
				ans = min(N - v[i], ans);

		cout << ans << '\n';
	}

	return 0;
}
