#include <iostream>
#include <string>
using namespace std;

int somaDigitos(string numero) {
    int soma = 0;
    for(int i = 0; i < numero.size(); i++) {
        soma += (int)(numero[i]-'0');
    }
    return soma;
}

int main() {

    string num;
    cin >> num;
    int valor = somaDigitos(num);

    if(valor % 3 == 0) cout << 0 << endl;
    else if((valor-1) % 3 == 0) cout << 1 << endl;
    else cout << 2 << endl;

    return 0;
}