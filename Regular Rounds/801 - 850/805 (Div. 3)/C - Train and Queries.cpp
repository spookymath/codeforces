#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	int T; cin >> T;

	while(T--)
	{
		map<int, pair<int, int>> mp;
		int N, K; cin >> N >> K;

		for(int i=0; i<N; i++)
		{
			int t; cin >> t;

			if(mp.find(t) != mp.end())
			{
				mp[t].first = min(mp[t].first, i);
				mp[t].second = max(mp[t].second, i);
			}

			else
			{
				mp[t] = make_pair(i, i);
			}
		}

		for(int i=0; i<K; i++)
		{
			int p, q; cin >> p >> q;

			if(mp.find(p) != mp.end() && 
			   mp.find(q) != mp.end() &&
			   mp[p].first < mp[q].second) cout << "YES" << '\n';
			else cout << "NO" << '\n';
		}
	}
}
