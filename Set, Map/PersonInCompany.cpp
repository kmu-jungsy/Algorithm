#include <iostream>
#include <set>
using namespace std;

struct cmp{
  bool operator() (const string& a, const string& b) const{
    return a > b;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  set<string, cmp> s;
  set<string>::iterator iter;
  string name, entry;
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> name >> entry;
    if(entry == "enter" && s.find(name) == s.end())
      s.insert(name);
    else
      s.erase(name);
  }
  for(iter = s.begin(); iter != s.end(); iter++)
    cout << *iter << "\n";
}
