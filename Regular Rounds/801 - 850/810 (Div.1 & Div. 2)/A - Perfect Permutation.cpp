#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T; cin >> T;
    while(T--)
    {
    	int N; cin >> N;

    	vector<int> v;
    	for(int i=1; i<=N; i++)
    	{
    		if(N & 1)
    		{
    			if(i == N) v.push_back(i);
    			else if(i & 1) v.push_back(i+1);
    			else v.push_back(i-1);
    		}
    		else
    		{
    			if(i & 1) v.push_back(i + 1);
    			else v.push_back(i-1);
    		}
    	}

    	if(N & 1 && N != 1) { v[0] = N; v[N-1] = 2;}

    	for(int i=0; i<N; i++) cout << v[i] << ' ';
    	cout << '\n';
    }

    return 0;
}
