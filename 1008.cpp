// pat 1008
//
// cpp by yunkang yu
#include <iostream>
using namespace std;

int a[100+5];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // ! 
    while (m > n) m -= n;
    if (m == 0) m = n;
    cout << a[n-m];
    for (int i = n-m+1; i < 2*n-m; i++) {
        cout << ' '<< a[i%n];
    }
    return 0;
}
