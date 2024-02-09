#include <iostream>
using namespace std;

int main(){
    int i = 666, temp, count = 0, N;
    cin >> N;
    while(1){
        temp = i;
        while(temp > 0){
            if(temp % 1000 == 666){
                count++;
                break;
            }
            temp /= 10;
        }
        if(N == count)
            break;
        i++;
    }
    cout << i;
}