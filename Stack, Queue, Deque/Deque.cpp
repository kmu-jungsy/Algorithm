#include <iostream>
#include <deque>

using namespace std;

int main() {
  cin.tie(NULL);
  cout.tie(NULL);
  
  deque<int> d;
  int N, num;
  cin >> N;
  for(int i=0;i<N;i++){
    cin >> num;
    switch(num){
      case 1:
        cin >> num;
        d.push_front(num);
        break;
      case 2:
        cin >> num;
        d.push_back(num);
        break;
      case 3:
        if(d.empty())
          cout << -1 << "\n";
        else{
          cout << d.front() << "\n";
          d.pop_front();
        }
        break;
      case 4:
         if(d.empty())
          cout << -1 << "\n";
        else{
          cout << d.back() << "\n";
          d.pop_back();
        }
        break;
      case 5:
        cout << d.size() << "\n";
        break;
      case 6:
        if(d.empty())
          cout << "1" << "\n";
        else
          cout << 0 << "\n";
        break;
      case 7:
        if(d.empty())
          cout << -1 << "\n";
        else
          cout << d.front() << "\n";
        break;
      case 8:
        if(d.empty())
          cout << -1 << "\n";
        else
          cout << d.back() << "\n";
        break;
    }
  }
}
