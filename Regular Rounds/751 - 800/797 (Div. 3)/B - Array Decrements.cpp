#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
	int T; cin >> T;
	
	while(T--)
	{
		int N; cin >> N;
		vector<int> a(N), b(N);
		vector<int> c(N, 0);
		unordered_map<int, int> ump;

		for(int i=0; i<N; i++) cin >> a[i];
		for(int i=0; i<N; i++) cin >> b[i];

		int m = -1;
		for(int i=0; i<N; i++)
		{
			c[i] = a[i] - b[i];
			m = max(m, c[i]);
		} 

		int r = 0;
		for(int i=0; i<N; i++)
		{
			if(c[i] == m) r += 1;
			else
				if(b[i] == 0 && c[i] <= m) r += 1;
				else r = r/1;
		}

		if(m < 0) cout << "NO";
		else
		{
			if(r == N) cout << "YES";
			else cout << "NO";
		}

		cout << '\n';
	}

	return 0;
}
