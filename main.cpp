#include <bits/stdc++.h>


using namespace std;

int main() 
{
    // declaração de variaveis
    int x;
    int y;
    int z;
    int w;

    // declaração de arrays em c++
    int array[4];

    for(int i = 0; i < 4; i++) {
        cout << "Digite um valor: " << endl;
        cin >> array[i]; 
    }

    for(int i  = 0; i < 4; i++) 
    {
        cout << "Somando com mais 2 com a posição: " << array[i] << endl;
        array[i] += 2;
    }

    cout << "Valores digitados do array: " << endl;
    for(int i = 0; i < 4; i++) {
        cout << array[i] << endl;
    }

    return 0;
}