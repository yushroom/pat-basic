// PAT 1005
// 
// cpp by yunkang yu
#include <iostream>
using namespace std;

int num[100+5];
bool covered[100+5];    // is covered

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
        covered[i] = false;
    }

    // bubble sort
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (num[i] < num[j]) {
                int temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (covered[i])
            continue;

        int a = num[i];
        while (a != 1) {
            if (a % 2 == 0)
                a /= 2;
            else a = (3*a + 1) / 2;

            for (int j = 0; j < n; j++) {
                if (i != j && a == num[j])
                    covered[j] = true;
            }
        }
    }

    bool first = true;
    for (int i = 0; i < n; i++) {
        if (!covered[i]) {
            if (first) {
                cout << num[i];
                first = false;
            }
            else 
                cout << ' ' << num[i];
        }
    }

    return 0;
}
