#include <iostream>

using namespace std;

int main() {
    char operador;
    double num1, num2, resultado;

    cout << "Digite a operação desejada (+, -, *, /, %): ";
    cin >> operador;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Erro: Divisão por zero não é permitida!" << endl;
                return 1; // Retorna um código de erro
            }
            break;
        case '%':
            if (num2 != 0) {
                resultado = (int)num1 % (int)num2;
            } else {
                cout << "Erro: Resto da divisão por zero não é permitido!" << endl;
                return 1; // Retorna um código de erro
            }
            break;
        default:
            cout << "Erro: Operador inválido!" << endl;
            return 1; // Retorna um código de erro
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}
