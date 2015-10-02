// Model solution for problem B
// Author: Lech Duraj

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

void split(string s, vector<string> & R)
{
  R.clear();
  istringstream iss(s);
  do
  {
    string sub;
    iss >> sub;
    if (sub.length()>0)
      R.push_back(sub);
  } while (iss);
}

int main()
{
  int TT;
  cin >> TT;
  while(TT--)
  {
    string s;
    while(s.empty())
      getline(cin,s);
    vector<string> A,B;
    split(s,A);
    do
    {
      string a;
      getline(cin,a);
      vector<string> R;
      split(a,R);
      string x = R.back();
      if (x[x.length()-1]=='?')
        break;
      B.push_back(x);
    } while(true);
    bool space = false;
    for(int i=0; i<A.size(); i++)
    {
      bool ok = true;
      for(int j=0; j<B.size(); j++)
        if (A[i]==B[j])
          ok = false;
      if (ok)
      {
        if (space) cout << " ";
        space = true;
        cout << A[i];
      }
    }
    cout << endl;
  }
}
