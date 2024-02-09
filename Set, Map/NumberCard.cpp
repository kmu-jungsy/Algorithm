#include <iostream>
#include <set>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  set<int> s;
  int N, M, num;
  cin >> N;
  for(int i=0;i<N;i++){
    cin >> num;
    s.insert(num);
  }
  cin >> M;
  for(int i=0;i<M;i++){
    cin >> num;
    cout << s.count(num) << " ";
  }
}