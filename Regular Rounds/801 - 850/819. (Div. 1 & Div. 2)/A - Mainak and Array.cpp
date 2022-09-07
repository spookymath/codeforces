#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int tst; cin >> tst;
	while(tst--)
	{
		int n; cin >> n;

		vector<int> v(n); cin >> v[0];

		int ans = 0;

		for(int i=1; i<n; i++)
		{
			cin >> v[i];
			ans = max(v[i-1] - v[i], ans);
		} // cyclic rotation


		for(int i=1; i<n; i++)
			ans = max(v[i] - v[0], ans);
		for(int i=n-1; i>=0; i--)
			ans = max(v[n-1] - v[i], ans);

		cout << ans << '\n';
	}

	return 0;
}
