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
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].total_marks;
        cin.ignore();
    }

    Student mx;
    mx.total_marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (mx.total_marks < a[i].total_marks)
        {
            mx = a[i];
        }
    }

    cout << mx.name << " " << mx.roll << " " << mx.total_marks << endl;

    return 0;
}
