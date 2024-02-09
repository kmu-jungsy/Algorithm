#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  queue<int> q;

  string word;
  int N, num;
  cin >> N;

  for(int i=0;i<N;i++){
    cin >> word;
    if(word == "push"){
      cin >> num;
      q.push(num);
    }
    else if(word == "pop"){
      if(q.empty())
        cout << -1 << "\n";
      else{
        cout << q.front() << "\n";
        q.pop();
      }
    }
    else if(word == "size"){
      cout << q.size() << "\n";
    }
    else if(word == "empty"){
      if(q.empty())
        cout << 1 << "\n";
      else
        cout << 0 << "\n";
    }
    else if(word == "front"){
      if(q.empty())
        cout << -1 << "\n";
      else
        cout << q.front() << "\n";
    }
    else if(word == "back"){
      if(q.empty())
        cout << -1 << "\n";
      else
        cout << q.back() << "\n";
    }
  }
}
