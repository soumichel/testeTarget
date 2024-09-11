#include <iostream>
#include <string>
using namespace std;

int contarLetraA(const string& texto) {
    int contador = 0;
    
    for (char c : texto) {
        if (c == 'a' || c == 'A') {
            contador++;
        }
    }
    
    return contador;
}

int main() {
    string texto;
    cout << "Informe uma string: ";
    getline(cin, texto);

    int quantidade = contarLetraA(texto);

    cout << "A letra 'a' (ou 'A') aparece " << quantidade << " vezes.\n";

    return 0;
}
