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

    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        mx = max(a[i].total_marks, mx);
    }

    cout << mx << endl;

    return 0;
}
