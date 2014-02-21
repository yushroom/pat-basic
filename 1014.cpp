// pat 1014
//
// cpp by yunkang yu
#include <iostream>
#include <cctype>
using namespace std;


char week[][4] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
//string[] week = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

int main()
{
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    // day
    int i = 0;
    while (s1[i] != s2[i] || !isupper(s1[i]) || s1[i] > 'G') i++;
    cout << week[s1[i] - 'A'] << ' ';

    // hour
    i++;
    while (s1[i] != s2[i] || islower(s1[i]) || s1[i] > 'N') i++;
    if (isdigit(s1[i]))
        cout << 0 << s1[i]-'0' << ':';
    else cout << s1[i]-'A'+10 << ':';

    // min
    i = 0;
    while (s3[i] != s4[i] || !isalpha(s3[i])) i++;
    if (i < 10)
        cout << 0;
    cout << i;

    return 0;
}
