///10959 El castigo de aveam
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n, pos;
    vector<int> tipo(2501, 0);
    cin >> m >> n;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> pos;
            tipo[pos]++; 
        }
    }

    for (auto x : tipo){
        if (x != 0){
           cout << x << " "; 
        }
    }    
    return 0;
}
