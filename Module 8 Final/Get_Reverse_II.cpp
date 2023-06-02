#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    Student() {}

    Student(string name, int cls, char section, int id)
    {
        this->name = name;
        this->cls = cls;
        this->section = section;
        this->id=id;
    }
};
int main()
{
    int n;
    cin >> n;
    Student* a = new Student[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name;
        cin>>a[i].cls;
        cin>>a[i].section;
        cin>>a[i].id;
    }
    for(int i=0;i<n/2;i++)
    {
        swap(a[i].id,a[n-i-1].id);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" ";
        cout<<a[i].cls<<" ";
        cout<<a[i].section<<" ";
        cout<<a[i].id<<endl;
    }
    return 0;
}