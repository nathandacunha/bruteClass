/*Crie um registro chamado carro, e adicione atributos para esse registro como
marca, modelo, placa. Depois peça para o usuário informar as informações
de um carro e os imprima na tela.*/
#include <bits/stdc++.h>
using namespace std;

struct carro {
    string marca;
    string modelo;
    string placa;
};

int main() {
    carro usuarioCarro;

    cout << "Digite a marca do carro: " << endl;
    cin >> usuarioCarro.marca; 

    cout << "Digite o modelo do carro: " << endl;
    cin >> usuarioCarro.modelo;

    cout << "Digite a placa do carro: " << endl;
    cin >> usuarioCarro.placa;

    // Imprimindo as informações na tela
    cout << "Marca do carro: " << usuarioCarro.marca << endl;
    cout << "Modelo do carro: " << usuarioCarro.modelo << endl;
    cout << "Placa do carro: " << usuarioCarro.placa << endl;

    return 0;
}
