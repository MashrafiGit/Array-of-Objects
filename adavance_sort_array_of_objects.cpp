#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int total_marks;
};

bool cmp(Student l, Student r)
{
    return (l.total_marks == r.total_marks) ? l.total_marks > r.total_marks : l.roll > r.roll;
}

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].total_marks;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].total_marks << endl;
    }

    return 0;
}
