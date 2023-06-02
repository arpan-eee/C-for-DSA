#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    char section;
    float marks1;
    float marks2;
    Student() {}

    Student(string name, int cls, char section, float marks1, float marks2)
    {
        this->name = name;
        this->cls = cls;
        this->section = section;
        this->marks1 = marks1;
        this->marks2 = marks2;
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
        cin>>a[i].marks1;
        cin>>a[i].marks2;
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<a[i].name<<" ";
        cout<<a[i].cls<<" ";
        cout<<a[i].section<<" ";
        cout<<a[i].marks1<<" ";
        cout<<a[i].marks2<<endl;
    }
    return 0;
}