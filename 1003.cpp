// PAT 1003
// A Simple Turing Machine
// cpp by yunkang yu
#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    size_t pos;
    int n1, n2;

    cin >> n;
    getline(cin, s);
    for (int i = 0; i < n; i++) {
        getline(cin, s);
        pos = 0;
        int len = s.size();

        // P
        while (pos < len && s[pos] != 'P') {
        	if (s[pos] != 'A')
        		goto print_no;
        	pos++;
        }
        n1 = pos;

        // A*
        pos++;
        if (pos >= s.size() || s[pos] != 'A')
        	goto print_no;
        while (pos < s.size() && s[pos] == 'A')
        	pos++;
        n2 = pos - n1 - 2;

        // T
        if (pos >= s.size() || s[pos] != 'T')
        	goto print_no;

        // A
        if (s.size() - pos - 1 != n1*n2 + n1)
        	goto print_no;

        cout << "YES" << endl;
        continue;
print_no:
		cout << "NO" << endl;
    }
    return 0;
}
