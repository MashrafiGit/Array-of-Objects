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

    int mn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        mn = min(a[i].total_marks, mn);
    }

    cout << mn << endl;

    return 0;
}
