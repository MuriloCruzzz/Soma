// C02EX05.cpp

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    int A, B, R;

    cout << "Informe valor da variavel <A> : "; cin >> A; // operador de exmação
    cin.ignore (80, '\n'); // função limpeza de caracteres depois do enter

    cout << "Informe valor da variavel <b> : "; cin >> B; // operador de exmação
    cin.ignore (80, '\n'); // função limpeza de caracteres depois do enter

   R = A + B;

    cout << "Resultado = " << R << endl;
    cout << endl;
    cin.get();
    return (0);
}
