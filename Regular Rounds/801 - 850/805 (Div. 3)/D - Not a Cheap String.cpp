#include <iostream>
#include <vector>
#include <unordered_map>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	int T; cin >> T;

	while(T--)
	{
		string s; cin >> s;
		int N; cin >> N;

		string z = "abcdefghijklmnopqrstuvwxyz";

		vector<int> v(26, 0);
		for(int i=0; i<s.length(); i++)
			v[s[i]-97] += 1;

		int x = 0;
		unordered_map<char, int> ump;

		for(int i=0; i<26; i++)
		{
			for(int j=0; j<v[i]; j++)
			{
				if(x + (i+1)<=N)
				{
					x += (i + 1);
					ump[z[i]] += 1;
				}
			}
		}

		string c = "";
		for(int i=0; i<s.length(); i++)
		{
			if(ump[s[i]] != 0)
			{
				c += s[i];
				ump[s[i]] -= 1;
			}
		}

		cout << c << '\n';

	}
}
