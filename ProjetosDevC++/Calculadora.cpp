#include <iostream>

using namespace std;

int main() {
    char operador;
    double num1, num2, resultado;

    cout << "Digite a opera��o desejada (+, -, *, /, %): ";
    cin >> operador;

    cout << "Digite o primeiro n�mero: ";
    cin >> num1;

    cout << "Digite o segundo n�mero: ";
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
                cout << "Erro: Divis�o por zero n�o � permitida!" << endl;
                return 1; // Retorna um c�digo de erro
            }
            break;
        case '%':
            if (num2 != 0) {
                resultado = (int)num1 % (int)num2;
            } else {
                cout << "Erro: Resto da divis�o por zero n�o � permitido!" << endl;
                return 1; // Retorna um c�digo de erro
            }
            break;
        default:
            cout << "Erro: Operador inv�lido!" << endl;
            return 1; // Retorna um c�digo de erro
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}
