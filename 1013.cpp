// pat 1013
//
// cpp by yunkang yu
#include <iostream>
#define N 10000+5
using namespace std;

int prime[N] = {2, 2};
int nPrime = 1;

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 3; nPrime < n; i++) {
        for (int j = 1; j <= nPrime && prime[j]*prime[j] <= i; j++) {
            if (i % prime[j] == 0) // not prime
                goto is_not_prime;
        }
        prime[++nPrime] = i;
is_not_prime:
        continue;
    }

    int nNum = 0;
    for (int i = m; i <= n; i++) {
        if (++nNum == 10) {
            cout << prime[i] << endl;
            nNum = 0;
        } else if (i != n) 
            cout << prime[i] << ' ';
        else 
            cout << prime[i];
    }
    return 0;
}
