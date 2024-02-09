#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct member{
  int age;
  string name;
  int num;
};


bool cmp(const member& a, const member& b){
  if(a.age == b.age)
    return a.num < b.num;
  return a.age < b.age;
}

int main() { 
  member m[100001];  
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin >> N; 
  int t = 0;
  for(int i=0;i<N;i++){
    cin >> m[i].age;
    cin >> m[i].name;
    m[i].num = t++;
  }
  sort(m, m+N, cmp);
  for(int i=0;i<N;i++){
    cout <<  m[i].age << " " << m[i].name << "\n";
  }
}