// pat 1016
//
// cpp by yunkang yu
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sa, sb;
    int a, b;
    char ca, cb;
    long long da = 0, db = 0; 
    cin >> sa >> a >> sb >> b;
    ca = a + '0';
    cb = b + '0';

    size_t pos = -1;
    while ((pos = sa.find(ca, pos+1)) != string::npos) {
        da = da*10 + a;
    }
    pos = -1;
    while ((pos = sb.find(cb, pos+1)) != string::npos) {
        db = db*10 + b;
    }

    cout << da + db;

    return 0;
}
