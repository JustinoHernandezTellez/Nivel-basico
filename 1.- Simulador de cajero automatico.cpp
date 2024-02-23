///11399 Simulador de cajero automatico
#include <bits/stdc++.h>
using namespace std;

int main(){
    int saldo = 1000, retirar, depositar;
    char operacion = '\0';
    while (operacion != 'S'){
          cin >> operacion;
          if (operacion == 'R'){
             cin >> retirar;
             saldo -= retirar;
          } else if (operacion == 'D'){
             cin >> depositar;
             saldo += depositar;
          } else if (operacion == 'C'){
             cout << "$" << saldo << '\n';                  
          }
           
    }
    return 0;
}
