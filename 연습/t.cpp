#include <iostream>

using namespace std;

void bigO(){
    int n = 0;                      // 1
    int cnt = 0;                    // 1
    cin >> n;                       // 1
    for(int i=0;i<n;i++){           // n + 1
        cnt++;                      // n
    } 
}  