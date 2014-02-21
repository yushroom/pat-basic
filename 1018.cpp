// PAT 1018
//
// cpp by yunkang yu
#include <iostream>
using namespace std;

int win, fail;
int nc1, nj1, nb1;
int nc2, nj2, nb2;

int main()
{  
    int n;
    char a, b;
    scanf("%d\n", &n);


    for (int i = 0; i < n; i++) {
        scanf("%c %c\n", &a, &b);
        switch (a) {
            case 'C':
                switch (b) {
                    case 'C':
                        break;
                    case 'J':
                        win++;
                        nc1++;
                        break;
                    case 'B':
                        fail++;
                        nb2++;
                        break;
                }
                break;
            case 'J':
                switch (b) {
                    case 'C':
                        fail++;
                        nc2++;
                        break;
                    case 'J':
                        break;
                    case 'B':
                        win++;
                        nj1++;
                        break;
                }
                break;
            case 'B':
                switch (b) {
                    case 'C':
                        win++;
                        nb1++;
                        break;
                    case 'J':
                        fail++;
                        nj2++;
                        break;
                    case 'B':
                        break;
                }
                break;
        }
    }

    cout << win << ' ' << n-win-fail << ' ' << fail << endl;
    cout << fail << ' ' << n-win-fail << ' ' <<  win << endl;
    if (nb1 >= nc1) {
        if (nb1 >= nj1)
            cout << 'B';
        else cout << 'J';
    } else {
        if (nc1 >= nj1)
            cout << 'C';
        else cout << 'J';
    }
    cout << ' ';
    if (nb2 >= nc2) {
        if (nb2 >= nj2)
            cout << 'B';
        else cout << 'J';
    } else {
        if (nc2 >= nj2)
            cout << 'C';
        else cout << 'J';
    }
    return 0;
}
