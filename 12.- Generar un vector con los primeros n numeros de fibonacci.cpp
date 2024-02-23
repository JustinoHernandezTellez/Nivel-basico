///8890 Generar un vector con los primeros N numeros de fibonacci
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> fib(n, 0);
    fib[0] = 1, fib[1] = 1;
    for (int i = 2; i < n; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (auto x : fib){
        cout << x << " ";
    }
    return 0;
}
