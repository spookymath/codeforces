#include <iostream>
using namespace std;

int main()
{
	int T; cin >> T;
	
	while(T--)
	{
		int f = -1, s = -1, t = -1;
		int N; cin >> N;

		if(N%3 == 0)
		{
			t = (N/3) - 1;
			s = N/3;
			f = (N/3) + 1;
		}

		else
		{
			t = (N - 3)/3;
			N = N - t;
			if(N%2 == 0)
			{
				s = (N/2) - 1;
				f = (N/2) + 1;
			}
			else
			{
				s = N/2;
				f = (N/2) + 1;
			}
		}

		cout << s << " " << f << " " << t << '\n';
	}

	return 0;
}
