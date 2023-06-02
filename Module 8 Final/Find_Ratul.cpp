#include<bits/stdc++.h>
using namespace std;
int main()
{
  string a;
  getline(cin,a);
  stringstream s(a);
  int flag=0;
  s<<a;
  string word;
  while(s>>word)
  {
    (word=="Ratul")?flag++:NULL;
  }
  (flag==0)?cout<<"NO":cout<<"YES";

  return 0;
}