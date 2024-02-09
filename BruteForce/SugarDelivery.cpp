#include <iostream>
using namespace std;

int main(){
    int N, five, three, num;
    cin >> N;
    five = N / 5;
    while(five > 0){
        num = N - 5 * five;
        if(num % 3 == 0)
            break;
        five--;
    }
    if(five == 0 && N % 3 != 0)
        cout << -1;
    else{
        num = N - 5 * five;
        three = num / 3;
        cout << three + five;
    }
}