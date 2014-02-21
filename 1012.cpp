// pat 1012
//
// cpp by yunkang yu
#include <iostream>
using namespace std;

int a[6];
bool exist[6];

int main()
{
	int n, num, nA4 = 0;

	int sign = +1;	// sign for a2

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		switch (num%5) {
			case 0:
				if ((num & 1) == 0) {
					a[1] += num;
					exist[1] = true;
				}
				break;
			case 1:
				a[2] += num * sign;
				sign = -sign;
				exist[2] = true;
				break;
			case 2:
				a[3]++;
				exist[3] = true;
				break;
			case 3:
				a[4] += num;
				nA4 ++;
				exist[4] = true;
				break;
			case 4:
				if (a[5] < num) a[5] = num;
				exist[5] = true;
				break;
		}
	}

	if (exist[1])
		cout << a[1];
	else cout << "N";

	for (int i = 2; i <= 5; i++)
		if (exist[i]) {
			if (i == 4)
				printf(" %.1f", 1.0*a[4]/nA4);
			else
				cout << " " << a[i];
		}
		else cout << " N";


    return 0;
}
