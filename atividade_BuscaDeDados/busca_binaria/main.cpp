#include <iostream>

using namespace std;

void buscaBinaria(int vetor[], int tamanho, int valorBuscado, int posicoesEncontradas[], int& tamanhoResultado) {
    tamanhoResultado = 0;

    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] == valorBuscado) {
            posicoesEncontradas[tamanhoResultado++] = i;
        }
    }
}

int main() {
    int vetor[] = {1, 2, 3, 2, 4, 5, 2, 6, 7, 2};
    int valorBuscado = 2;
    int posicoesBinarias[10]; 

    int tamanhoResultado;
    buscaBinaria(vetor, 10, valorBuscado, posicoesBinarias, tamanhoResultado);

    if (tamanhoResultado == 0) {
        cout << "Chave não encontrada." << endl;
    } else {
        cout << "Chave encontrada nas posições:";
        for (int i = 0; i < tamanhoResultado; ++i) {
            cout << " " << posicoesBinarias[i];
        }
        cout << endl;
    }

    return 0;
}

