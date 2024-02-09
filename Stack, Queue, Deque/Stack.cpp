#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  int num;

    stack<int> s;
    
  cin >> num;
    for (int t=0; t<num; t++) {
      int oper, temp;
      cin >> oper;
      
      switch (oper) {
        case 1:
          cin >> temp;
          s.push(temp);
          break;
        
        
        case 2:
          if (!s.empty()) {
            cout <<  s.top() << "\n";
            s.pop();
          } else {
            cout << -1 << "\n";
          }
          break;
        
        
        case 3:
          cout << s.size() << "\n";
          break;


        case 4:
          if (!s.empty()) {
            cout << 0 << "\n";
          } else {
            cout << 1 << "\n";
          }
          break;
        
        
        case 5:
          if (!s.empty()) {
            cout << s.top() << "\n";
          } else {
            cout << -1 << "\n";
          }
          break;

      }



    }
    

    
}
