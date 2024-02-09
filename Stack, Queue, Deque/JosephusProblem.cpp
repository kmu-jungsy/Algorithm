#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  queue<int> q;
  int N, K;
  cin >> N >> K;
  for(int i=1;i<=N;i++)
    q.push(i);
  cout << "<";
  while(q.size() > 1){
    for(int j=0;j<K-1;j++){
    q.push(q.front());
    q.pop();
    }
    cout << q.front() << ", ";
    q.pop();
  }
  cout << q.front() << ">";
}
