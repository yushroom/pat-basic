// pat 1007
//
// cpp by yunkang yu
#include <iostream>
#define N 10000
using namespace std;

int prime[N] = {2};
int nPrime = 1;

int main()
{
    int n;
    cin >> n;
    for (int i = 3; i <= n; i++) {
        for (int j = 0; j < nPrime; j++) {
            if (i % prime[j] == 0) // not prime
                goto is_not_prime;
        }
        prime[nPrime++] = i;
is_not_prime:
        continue;
    }

    int total = 0;
    for (int i = 1; i < nPrime && prime[i] <= n; i++)
        if (prime[i] - prime[i-1] == 2)
            total++;
    cout << total;
    return 0;
}
