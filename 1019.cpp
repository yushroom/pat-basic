// PAT 1019
//
// cpp by yunkang yu
#include <iostream>
using namespace std;

int get_num(int n, int flag) {
    int a[4];
    a[0] = n/1000;
    a[1] = (n%1000)/100;
    a[2] = (n%100)/10;
    a[3] = n%10;

    // sort
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 4; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    if (flag == 1)
        return a[3]*1000 + a[2]*100 + a[1]*10 + a[0];
    return a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
}

void printn(int n) {
    if (n < 10)
        cout << "000";
    else if (n < 100)
        cout << "00";
    else if (n < 1000)
        cout << '0';
    cout << n;
}

int main()
{  
    int n, n1, n2;
    cin >> n;
    do {
        n1 = get_num(n, 1);
        n2 = get_num(n, 2);
        n = n1 - n2;
        printn(n1);
        cout << " - ";
        printn(n2);
        cout << " = ";
        printn(n);
        cout << endl;

        if (n == 0) return 0;
    } while (n != 6174);
    return 0;
}

