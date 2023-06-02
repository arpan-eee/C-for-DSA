#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        int t = a.find(b);
        while (t>=0)
        {
            a.replace(t,b.size(),"$");
            t = a.find(b);
        }
        cout<<a<<endl;
    }
    return 0;
}