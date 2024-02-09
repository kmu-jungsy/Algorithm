#include <iostream>
#include <set>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string word;
  int count = 0;
  int N, M;
  set<string> s;
  cin >> N >> M;
  for(int i=0;i<N;i++){
    cin >> word;
    s.insert(word);
  }
  for(int i=0;i<M;i++){
    cin >> word;
    if(s.find(word) != s.end())
      count++;
  }
  cout << count;
}