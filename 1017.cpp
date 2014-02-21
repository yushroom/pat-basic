// pat 1017
//
// cpp by yunkang yu
#include <iostream>
using namespace std;

int main()
{
    string s;
    int a, b;
    
    cin >> s >> b;

    a = s[0]-'0';
    if (a > b) {
        cout << a/b;
        a %= b;
    } else if (s.size() == 1){
        cout << '0';
    }
    int i = 1;
    while (i < s.size()) {
        a = a*10 + s[i++]-'0';
        cout << a/b;
        a %= b;
    }

    cout << ' ' << a;
    return 0;
}
