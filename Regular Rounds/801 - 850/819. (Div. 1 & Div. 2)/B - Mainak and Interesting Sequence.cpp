#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int tst; cin >> tst;
	while(tst--)
	{
		int n, m; cin >> n >> m;

		if(n == 1)
		{
			cout << "Yes" << '\n';
			cout << m << '\n';
		}

		else if(m == 1)
		{
			cout << "No" << '\n';
		}

		else
		{
			if(n > m) cout << "No" << '\n';
			else if(n == m)
			{
				cout << "Yes" << '\n';
				for(int i=0; i<n; i++) cout << 1 << ' ';
				cout << '\n';
			}

			else // m > n
			{
				if(m % n == 0)
				{
					cout << "Yes" << '\n';
					for(int i=0; i<n; i++) cout << (m/n) << ' ';
					cout << '\n';
				}

				else
				{
					if((n & 1) && (m & 1))
					{
						cout << "Yes" << '\n';
						for(int i=1; i<=n-1; i++) cout << 1 << ' ';
						cout << (m - (n - 1)) << '\n';
					}

					else if(!(n & 1) && !(m & 1))
					{
						cout << "Yes" << '\n';
						for(int i=1; i<=n-2; i++) cout << 1 << ' ';
						cout << (m - (n - 2)) / 2 << ' ' << (m - (n - 2)) / 2 << '\n';
					}

					else if((n & 1) && !(m & 1))
					{
						cout << "Yes" << '\n';
						for(int i=1; i<=n-1; i++) cout << 1 << ' ';
						cout << (m - (n - 1)) << '\n';
					}

					else cout << "No" << '\n';
				}

			}
		}
	}

	return 0;
}
