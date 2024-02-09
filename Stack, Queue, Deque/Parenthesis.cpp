#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int main() {
  int T, flag;
  string str;
  cin >> T;

  for(int i=0;i<T;i++){
    stack<char> PS;
    flag = 1;
    cin >> str;
    for(int j=0;j<str.length();j++){
      if(str[j] == '('){
        PS.push(str[j]);
      }
      else{
        if(PS.empty())
          flag = 0;
        else
          PS.pop();
      }
    }
    if(!PS.empty()){
      flag = 0;
    }
    if(flag == 0)
      cout << "NO" << "\n";
    else  
      cout << "YES" << "\n";
  }
}
