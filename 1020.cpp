// PAT 1020
// greedy
// cpp by yunkang yu
#include <iostream>
#include <list>
using namespace std;

struct cake{
    float s;
    float p;

    cake(float _s, float _p) : s(_s), p(_p/_s) {}
};

list<cake> li;

bool compare_cake(cake& c1, cake& c2) {
    return c1.p > c2.p;
}

int main()
{  
    int n, demand;
    cin >> n >> demand;
    float s[1000+5];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    float p;
    for (int i = 0; i < n; i++) {
        cin >> p;
        li.push_back(cake(s[i], p));
    }
    li.sort(compare_cake);

    float tot = 0;
    int i = 0;
    for (list<cake>::iterator it = li.begin(); it != li.end(); it++){
        if (demand > it->s) {
            tot += it->s * it->p;
            demand -= it->s;
        } else {
            tot += demand * it->p;
            break;
        }
    }
    printf("%.2f", tot);
    return 0;
}

