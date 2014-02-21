// pat 1006
//
// cpp by yunkang yu
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 100) {
        int k = n / 100;
        while (k-- > 0) cout << 'B';
        n %= 100;
    }
    if (n >= 10) {
        int k = n /10;
        while (k-- > 0) cout << 'S';
        n %= 10;
    }
    for (int i = 1; i <= n; i++)
        cout << i;

    return 0;
}
