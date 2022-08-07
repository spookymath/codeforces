#include <iostream>
#include <vector>
using namespace std;

int solve()
{
	int N, M; cin >> N >> M;

	vector<int> v(N);
	for(int i=0; i<N; i++) cin >> v[i];

	vector<int> deg(N, 0), x(M), y(M);
	for(int i=0; i<M; i++)
	{
		cin >> x[i] >> y[i];
		x[i] -= 1;
		y[i] -= 1;


		deg[x[i]] += 1;
		deg[y[i]] += 1;
	}

	if(!(M & 1)) return 0;

	int ans = -1;
	for(int i=0; i<N; i++)
	{
		if(deg[i] & 1)
		{
			if(ans == -1) ans = v[i];
			else ans = min(ans, v[i]);
		}
	}

	for(int i=0; i<M; i++)
		if(!(deg[x[i]] & 1) && !(deg[y[i]] & 1))
		{
			if(ans == -1) ans = v[x[i]] + v[y[i]];
			ans = min(ans, v[x[i]] + v[y[i]]);
		}

	return ans;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T; cin >> T;
    while(T--)
    	cout << solve() << '\n';

    return 0;
}
