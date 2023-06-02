#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    float marks1;
    float marks2;
    Student() {}

    Student(string name, int cls, char section, int id, float marks1, float marks2)
    {
        this->name = name;
        this->cls = cls;
        this->section = section;
        this->id = id;
        this->marks1 = marks1;
        this->marks2 = marks2;
    }
};
bool srt(Student a, Student b)
{
    if ((a.marks1 + a.marks2) > (b.marks1 + b.marks2))
        return true;
    else if ((a.marks1 + a.marks2) == (b.marks1 + b.marks2))
    {
        if (a.id < b.id)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    int n;
    cin >> n;
    Student *a = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name;
        cin >> a[i].cls;
        cin >> a[i].section;
        cin >> a[i].id;
        cin >> a[i].marks1;
        cin >> a[i].marks2;
    }
    sort(a, a + n, srt);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " ";
        cout << a[i].cls << " ";
        cout << a[i].section << " ";
        cout << a[i].id << " ";
        cout << a[i].marks1 << " ";
        cout << a[i].marks2 << endl;
    }
    return 0;
}