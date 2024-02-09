#include <iostream>
#include <set>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a, b, num;
  set<int> A;
  set<int> B;
  cin >> a >> b;
  for(int i=0;i<a;i++){
    cin >> num;
    A.insert(num);
  }
  for(int i=0;i<b;i++){
    cin >> num;
    if(A.find(num) != A.end()){
      A.erase(num);
    }
    else{
      B.insert(num);
    }
  }
  cout << A.size() + B.size();
}
