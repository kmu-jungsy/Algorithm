#include <iostream>
#include <algorithm>
using namespace std;

struct coordinate{
  int x,y;
};

bool cmp(const coordinate& a, const coordinate& b){
  if(a.y == b.y)
    return a.x < b.x;
  return a.y < b.y;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  cin >> N;
  coordinate coord[100001];

  for(int i=0;i<N;i++)
    cin >> coord[i].x >> coord[i].y;

  sort(coord, coord+N, cmp);
  for(int i=0;i<N;i++)
    cout << coord[i].x << " " << coord[i].y << "\n";
}