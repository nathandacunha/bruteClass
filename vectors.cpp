#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    vector<string> carros = {"volvo", "bmw", "vrumvrum"};
    
    // como imprimir os valores dentro do vector usando for em cpp
    for(string carro: carros) {
        cout << carro << endl;
    }

    // adicionado o elemento no vector 
    carros.push_back("paiaCarro");

    cout << "Novo elemento adicionado no vector" << endl;
    for(string carro: carros) {
        cout << carro << endl;
    }


    // definindo o tamanho em um vector size
    cout << "Tamanho do vector" << endl;
    cout << carros.size() << endl;

    return 0;
}