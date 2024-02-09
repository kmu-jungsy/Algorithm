#include <iostream>
using namespace std;

int main(){
    int N, M, num, diff, least, sum, min;
    cin >> N >> M;
    least = M;
    int* arr = new int[N];
    for(int i=0;i<N;i++){
        cin >> num;
        arr[i] = num;
    }
    for(int i=0;i<N-2;i++)
        for(int j=i+1;j<N-1;j++)
            for(int k=j+1;k<N;k++){
                sum = arr[i] + arr[j] + arr[k];
                diff = sum - M;
                if(diff > 0)
                    continue;
                diff = -diff;
                if(least > diff){
                    least = diff;
                    min = sum;
                }
            }
    cout << min;
}