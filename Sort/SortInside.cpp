#include<iostream>
#include <algorithm>
#include <string.h>
using namespace std;

bool desc(int a, int b){
    return a > b;
}

int main() {
	string N;
    cin >> N;
    int len = N.length();
    int* arr = new int[len+2];
    for(int i=0;i<len;i++)
        arr[i] = N[i] - '0';
    sort(arr, arr+len, desc);
    for(int i=0;i<len;i++)
        cout << arr[i];
}