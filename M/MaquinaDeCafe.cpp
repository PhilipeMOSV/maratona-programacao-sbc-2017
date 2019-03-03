#include <iostream>
using namespace std;

int verificarMenor(int num1, int num2) {
    if(num1 < num2) return num1;
    else return num2;
}

int main() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    cout << verificarMenor(verificarMenor(((a2*2) + (a3*4)), (a1*2) + (a3*2)), ((a1*4) + (a2*2))) << endl;

    return 0;
}