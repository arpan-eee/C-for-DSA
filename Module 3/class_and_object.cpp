#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()
{
    Student rahim;
    rahim.roll=29;
    rahim.cls=9;
    rahim.section='A';
    char nm[100]="Rahim Uddin";
    strcpy(rahim.name,nm);

    Student karim;
    karim.roll=55;
    karim.cls=9;
    karim.section='C';
    strcpy(karim.name,"Karim Cholimulla");

    cout<<karim.name<<endl;
    cout<<rahim.name;
    return 0;
}