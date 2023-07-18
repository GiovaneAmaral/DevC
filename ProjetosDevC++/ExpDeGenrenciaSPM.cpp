#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Produto {
    int codigo;
    string nome;
    double preco;
    int quantidade;
};

int main() {
    vector<Produto> estoque;

    estoque.push_back({1, "Arroz", 10.0, 50});
    estoque.push_back({2, "Feijão", 6.5, 30});
    estoque.push_back({3, "Macarrão", 4.0, 40});

    cout << "Bem-vindo ao Supermercado XYZ!" << endl;

    while (true) {
        cout << "\nEscolha uma opção:" << endl;
        cout << "1 - Listar produtos disponíveis" << endl;
        cout << "2 - Realizar uma compra" << endl;
        cout << "0 - Sair" << endl;

        int opcao;
        cin >> opcao;

        if (opcao == 0) {
            cout << "Obrigado por utilizar nosso sistema de gerenciamento. Até logo!" << endl;
            break;
        } else if (opcao == 1) {
            cout << "Produtos disponíveis:" << endl;
            for (const Produto& produto : estoque) {
                cout << produto.codigo << " - " << produto.nome << " - R$ " << produto.preco << " - Estoque: " << produto.quantidade << endl;
            }
        } else if (opcao == 2) {
            int codigoProduto, quantidadeCompra;
            cout << "Digite o código do produto que deseja comprar: ";
            cin >> codigoProduto;
            cout << "Digite a quantidade que deseja comprar: ";
            cin >> quantidadeCompra;

            Produto* produtoCompra = nullptr;
            for (Produto& produto : estoque) {
                if (produto.codigo == codigoProduto) {
                    produtoCompra = &produto;
                    break;
                }
            }

            if (produtoCompra == nullptr) {
                cout << "Produto não encontrado. Tente novamente." << endl;
            } else if (produtoCompra->quantidade < quantidadeCompra) {
                cout << "Estoque insuficiente para a quantidade desejada." << endl;
            } else {
                double valorTotal = produtoCompra->preco * quantidadeCompra;
                produtoCompra->quantidade -= quantidadeCompra;
                cout << "Compra realizada com sucesso!" << endl;
                cout << "Valor total: R$ " << valorTotal << endl;
            }
        } else {
            cout << "Opção inválida. Tente novamente." << endl;
        }
    }

    return 0;
}
