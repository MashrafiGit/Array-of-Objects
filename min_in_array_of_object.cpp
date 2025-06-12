#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int total_marks;
};

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

    Student mn;
    mn.total_marks = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (mn.total_marks > a[i].total_marks)
        {
            mn = a[i];
        }
    }

    cout << mn.name << " " << mn.roll << " " << mn.total_marks << endl;

    return 0;
}
