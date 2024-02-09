#include <iostream>
#include <deque>

using namespace std;

int main() {
  
  deque<int> balloon;
  deque<int> paper;
  int N, num, temp, temp2;
  cin >> N;
  for(int i=1;i<=N;i++){
    balloon.push_back(i);
    cin >> num;
    paper.push_back(num);
  }
  num = 0;
  while(1){
    cout << balloon[num] << " ";
    balloon.erase(balloon.begin() + num);
    if(balloon.empty())
      break;
    temp = num;
    temp2 = balloon.size();
    if(paper[num] > 0)
      num = (num + paper[num] - 1) % temp2;
    else{
      num = (num + paper[num] + temp2) % temp2;
      if(num < 0)
        num += temp2;
    }
    paper.erase(paper.begin() + temp);
  }
}
