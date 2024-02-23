///7468 Buscando a tavo
#include <bits/stdc++.h>
using namespace std;

int main(){
    int contador = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++){
        if (s[i] == '*'){
           contador++; 
        }
    }
    if (contador <= 1){
       cout << "BIEN\n"; 
    } else if (contador == 2){
       cout << "HAPPY\n"; 
    } else {
       cout << "BUSCAR A TAVO\n"; 
    }
    return 0;
}
