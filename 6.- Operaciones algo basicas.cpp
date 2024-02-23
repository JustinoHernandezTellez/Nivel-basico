///10880 Operaciones algo basicas
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, suma, resta, multi, division, pot = 1;
    cin >> a >> b;
    suma = a + b;
    resta = a - b;
    division = a / b;
    multi = a * b;
    for (long long i = 1; i <= suma; i++){
        pot = pot * 2;
    }
    cout << suma << '\n' << resta << '\n' << division << '\n' << multi << '\n' << pot << '\n';
    return 0;
}
