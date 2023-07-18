#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int combustivel;
    double litros, valorTotal;

    cout << "Bem-vindo ao posto de gasolina!" << endl;

    cout << "Selecione o tipo de combustível:" << endl;
    cout << "1 - Gasolina" << endl;
    cout << "2 - Etanol" << endl;
    cout << "3 - Diesel" << endl;
    cin >> combustivel;

    if (combustivel < 1 || combustivel > 3) {
        cout << "Opção inválida. Encerrando o programa." << endl;
        return 1; 
    }

    cout << "Quantos litros deseja abastecer? ";
    cin >> litros;

    switch (combustivel) {
        case 1:
            valorTotal = litros * 5.30; 
            break;
        case 2:
            valorTotal = litros * 4.10; 
            break;
        case 3:
            valorTotal = litros * 4.80; 
            break;
    }

    cout << fixed << setprecision(2);
    cout << "Valor total a pagar: R$ " << valorTotal << endl;
    cout << "Obrigado por abastecer no nosso posto de gasolina!" << endl;

    return 0;
}
