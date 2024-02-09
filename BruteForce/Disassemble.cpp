#include <iostream>
using namespace std;

int main(){
    int N, sum, cnt = 1, num, i, k, flag = 0;
    cin >> N;
    num = N;
    if(N >= 10){
        while(num>10){
            cnt++;
            num /= 10;
        }
        num = N - 9 * cnt;
    
    for(i=num;i<N;i++){
        k = i;
        sum = k;
        while(k>10){
            sum += k % 10;
            k /= 10;
        }
        sum += k;
        if(sum == N){
            flag = 1;
            break;
        }
    }
    }
    else{
        for(i=1;i<N;i++){
            if(i * 2 == N){
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1)
        cout << i;
    else
        cout << 0;
}