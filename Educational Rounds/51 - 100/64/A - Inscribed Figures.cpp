#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n; cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    bool b = true;
    int pt = 0;
    for(int i=1; i<n; i++)
    {
        if(arr[i] + arr[i-1] == 5)
        { 
            b = false;
            break;
        }
        else
        {
            if(arr[i-1] + arr[i] == 3) pt += 3;
            else if(arr[i-1] + arr[i] == 4) pt += 4;
        }
    }

    for(int i=0; i<n; i++)
        if(arr[i] == 3 && arr[min(i+1, n)] == 1 && arr[min(i+2, n)] == 2) 
            pt -= 1;

    if(b)
        cout << "Finite" << '\n' << pt;
    else
        cout << "Infinite" << '\n';

    return 0;
}
