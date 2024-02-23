///9412 Sumatoria con salto
#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n, b, res = 0;
    cin >> b >> n;
    for (unsigned long long i = 1; i <= n; i += b){
        res += i; 
    } 
    cout << res << '\n';
    return 0;
}
