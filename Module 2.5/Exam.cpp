#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    char name[100];
    float height;
    int age;
    Person(char *n, float h, int a)
    {
        strcpy(name, n);
        height = h;
        age = a;
    }
};
int main()
{
    Person arpan("Arpan Chakraborty", 5.6, 21);
    Person rahat("Rahat Khan Pathan", 5.7, 20);

    switch (arpan.age > rahat.age)
    {
    case true:
        cout << arpan.name << endl;
        break;
    case false:
        cout << rahat.name << endl;
        break;
    }

    return 0;
}
