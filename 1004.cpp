// PAT 1004
// 
// cpp by yunkang yu
#include <iostream>
using namespace std;

int main()
{
    int n;
    string name, id;
    string sname, sid;
    string bname, bid;
    int mark, bmark = -1, smark = 101;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> id >> mark;
        //cout << name << ' ' << id << ' '  << mark << endl;
        if (bmark < mark) {
            bmark = mark;
            bname = name;
            bid = id;
        }
        if (smark > mark) {
            smark = mark;
            sname = name;
            sid = id;
        }
    }

    cout << bname << ' ' << bid << endl << sname << ' ' << sid;
    return 0;
}
