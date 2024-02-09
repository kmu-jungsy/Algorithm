#include <iostream>
#include <deque>
#include <queue>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int num;
  deque<int> d;
  queue<int> q;
  int N, M;

  cin >> N;
  for(int i=0;i<N;i++){
    cin >> num;
    if(num == 0)
      q.push(i);
  }

  for(int i=0;i<N;i++){
    cin >> num;
    if(!q.empty()){
      if(q.front() == i){
        d.push_back(num);
        q.pop();
      }
    }
  }
  
  cin >> M;
  for(int i=0;i<M;i++){
    cin >> num;
    d.push_front(num);
    cout << d.back() << " ";
    d.pop_back();
  }
}
