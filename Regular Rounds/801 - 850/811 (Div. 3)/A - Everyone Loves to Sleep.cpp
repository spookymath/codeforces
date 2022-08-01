#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--)
    {
    	int N, H, M; cin >> N >> H >> M;
    	int p = H*60 + M;

    	int mx = -1;

    	for(int i=0; i<N; i++)
    	{
    		int h, m; cin >> h >> m;
    		int q = h*60 + m;

    		if(p <= q)
    		{
    			if(mx == -1) mx = q - p;
    			else mx = min(mx, q - p);
    		}

    		else
    		{
    			int r = (24*60 - p) + q;
    			if(mx == -1) mx = r;
    			else mx = min(mx, r);
    		}
    	}
    	
    	int x = mx / 60;
    	int y = mx % 60;

    	cout << x << " " << y << '\n';
    }
    
	return 0;
}
