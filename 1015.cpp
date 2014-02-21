// pat 1015
//
// cpp by yunkang yu
#include <iostream>
#include <list>
using namespace std;

struct student {
    string id;
    int mark1;
    int mark2;

    student(string _id, int _mark1, int _mark2) 
        : id(_id), mark1(_mark1), mark2(_mark2) {}
    friend ostream& operator<<(ostream& os, student& s) {
        os << s.id << ' ' << s.mark1 << ' ' << s.mark2;
        return os;
    }
};

list<student> list1;
list<student> list2;
list<student> list3;
list<student> list4;

bool compare_student(student s1, student s2) {
    if (s1.mark1+s1.mark2 == s2.mark1+s2.mark2) {
        if (s1.mark1 == s2.mark1)
            return s1.id < s2.id;
        return s1.mark1 > s2.mark1;
    }
    return s1.mark1+s1.mark2 > s2.mark1+s2.mark2;
}

int main()
{
    int n, l, h;
    string id;  // do not use int
    int mark1, mark2;
    int m = 0;
    cin.sync_with_stdio(false); //!
    cin >> n >> l >> h;
    for (int i = 0; i < n; i++) {
        cin >> id >> mark1 >> mark2;
        m++;
        if (mark1 < l || mark2 < l){
            m--;
        }
        // class 1
        else if (mark1 >= h && mark2 >=h) {
            list1.push_back(student(id, mark1, mark2));
        }
        // class 2
        else if (mark1 >= h) {
            list2.push_back(student(id, mark1, mark2));
        }
        // class 3
        else if (mark1 >= mark2) {
            list3.push_back(student(id, mark1, mark2));
        }
        // class 4
        else {
            list4.push_back(student(id, mark1, mark2));
        }
    }
    list1.sort(compare_student);
    list2.sort(compare_student);
    list3.sort(compare_student);
    list4.sort(compare_student);

    cout << m << '\n';  // endl is slow...
    list<student>::iterator it;
    for(it = list1.begin(); it != list1.end(); it++)
        cout << *it << '\n';
    for(it = list2.begin(); it != list2.end(); it++)
        cout << *it << '\n';
    for(it = list3.begin(); it != list3.end(); it++)
        cout << *it << '\n';
    for(it = list4.begin(); it != list4.end(); it++)
        cout << *it << '\n';
    return 0;
}
