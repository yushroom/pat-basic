// pat 1009
//
// cpp by yunkang yu
#include <iostream>
using namespace std;

string s[80 + 5];

int main()
{
    int n = 0;
    while (cin >> s[n++])
        ;

    cout << s[n-2]; //! not n-1
    for (int i = n-3; i >= 0; i--) {
        cout << ' ' << s[i];
    }

    return 0;
}
