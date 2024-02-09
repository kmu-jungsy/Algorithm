#include <iostream>
#include <stdio.h>
#include <string>
#include <stack>

using namespace std;

int main() {

  string str;
  int flag;

  while(1){
    flag = 1;
    stack<char> PS;
    getline(cin, str);
    if(str.length() == 1 && str[0] == '.')
      break;

    for(int i=0;i<str.length();i++){
      if(str[i] == '(' || str[i] == '[')
        PS.push(str[i]);
      else if(str[i] == ')'){
        if(PS.empty() || PS.top() != '(')
          flag = 0;
        else if(PS.top() == '(')
          PS.pop();
      }
      else if(str[i] == ']'){
        if(PS.empty() || PS.top() != '[')
          flag = 0;
        else if(PS.top() == '[')
          PS.pop();
      }
    }

    if(!PS.empty())
      flag = 0;
    
    if(flag == 1)
      cout << "yes" << "\n";
    else  
      cout << "no" << "\n";
  }
}
