#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <string>
using namespace std;

bool cmp(string a, string b){
  if(a.length() == b.length())
    return a < b;
  return a.length() < b.length();
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<string> word;
  string temp;
  int N;
  cin >> N;
  for(int i=0;i<N;i++){
    cin >> temp;
    word.push_back(temp);
  }
  sort(word.begin(), word.end(), cmp);
  word.erase(unique(word.begin(), word.end()), word.end());
  for(int i=0;i<word.size();i++)
    cout <<  word[i] << endl;
}