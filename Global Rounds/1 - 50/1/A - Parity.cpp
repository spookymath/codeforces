#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int b, k;
	cin >> b >> k;

	vector<int> a(k);
	for(int i=0; i<k; i++) cin >> a[i];

	int s = 0;
	bool c1 = (b&1)? true:false;

	for(int i=0; i<k-1; i++)
	{
		bool c2 = (a[i]&1)? true:false;
		if(c1 && c2) s += 1;
	}

	if(a[k-1]&1) s+=1;

	cout << ((s&1)?"odd":"even") << '\n';

	return 0;
}
