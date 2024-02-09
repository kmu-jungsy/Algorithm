#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  stack<int> money;
  int K, num, sum = 0;
  cin >> K;
  for(int i=0;i<K;i++){
    cin >> num;
    if(num != 0)
      money.push(num);
    else
      money.pop();
  }

  while(!money.empty()){
    sum += money.top();
    money.pop();
  }
  cout << sum;
}
