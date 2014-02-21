// pat 1010
//
// cpp by yunkang yu
#include <iostream>
using namespace std;

int main()
{
	int coef, exp;
	bool first = true;

	while (cin >> coef >> exp) {
		if (coef*exp != 0) {
			if (first) {
				cout << coef*exp << ' ' << exp-1;
				first = false;
			} else {
				cout << ' ' << coef*exp << ' ' << exp-1;
			}
		}
	}
	if (first)	// ! no output
		cout << "0 0";

    return 0;
}
