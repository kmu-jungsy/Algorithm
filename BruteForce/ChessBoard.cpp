#include <iostream>
#include <algorithm>
using namespace std;

char arr[51][51];

char black[9][9] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
};

char white[9][9] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};

int white_cnt(int x, int y){
    int cnt = 0;
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            if(arr[x+i][y+j] != white[i][j])
                cnt++;
    return cnt;
}

int black_cnt(int x, int y){
    int cnt = 0;
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            if(arr[x+i][y+j] != black[i][j])
                cnt++;
    return cnt;
}

int main(){
    int c = 65, num;
    int N, M;
    cin >> N >> M;
    for(int i=0;i<N;i++)
        cin >> arr[i];
    for(int i=0;i<=N-8;i++)
        for(int j=0;j<=M-8;j++){
            num = min(white_cnt(i,j), black_cnt(i,j));
            if(num < c)
                c = num;
        }
    cout << c;
}