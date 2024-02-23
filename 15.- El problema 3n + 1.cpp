#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main (){
    int numero, pasos = 0, mayor = 0;
    cin >> numero;
    mayor = numero;
    while (numero != 1) {
          if (numero % 2 == 0){
                     numero /= 2;
          } else {
                     numero = (numero * 3) + 1;
          }
          if (mayor < numero) mayor = numero;
               pasos++;
    }
    cout << pasos << " " << mayor << '\n';
    return 0;
}
