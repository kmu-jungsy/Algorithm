#include <iostream>

using namespace std;

int tmp[500001], count = 0, answer = -1;

void merge(int* A, int p, int q, int r, int K){
  int i = p;
  int j = q+1;
  int t = 1;
  while(i<=q && j<=r){
    if(A[i] <= A[j])
      tmp[t++] = A[i++];
    else
      tmp[t++] = A[j++];
  }
  while(i<=q)
    tmp[t++] = A[i++];
  while(j<=r)
    tmp[t++] = A[j++];
  i=p; t=1;
  while(i<=r){
    count++;
    if(count == K)
      answer = tmp[t];
    A[i++] = tmp[t++];
  }
}

void merge_sort(int* A, int p, int r, int K){
  if(p < r){
    int q = (p+r) / 2;
    merge_sort(A, p, q, K);
    merge_sort(A,q+1, r, K);
    merge(A, p, q, r, K);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N, K, num;
  int A[500001];
  cin >> N >> K;

  for(int i=0;i<N;i++){
    cin >> num;
    A[i] = num;
  }

  merge_sort(A, 0, N-1, K);
  cout << answer;
}
