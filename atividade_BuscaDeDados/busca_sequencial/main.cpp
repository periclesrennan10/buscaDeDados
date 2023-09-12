#include <iostream>

using namespace std;

int* buscaSequencial(int vetor[], int tamanho, int valorBuscado, int& tamanhoResultado) {
    int* posicoesEncontradas = 0;
    tamanhoResultado = 0;

    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] == valorBuscado) {
            int* novoTR = new int[tamanhoResultado + 1];
            for (int j = 0; j < tamanhoResultado; ++j) {
                novoTR[j] = posicoesEncontradas[j];
            }
            if (posicoesEncontradas != 0) {
                delete[] posicoesEncontradas;
            }
            posicoesEncontradas = novoTR;
            posicoesEncontradas[tamanhoResultado++] = i;
        }
    }

    return posicoesEncontradas;
}

int main() {
    int vetor[] = {1, 2, 3, 2, 4, 5, 2, 6, 7, 2};
    int tamanho = 10;
    int valorBuscado = 2;

    int tamanhoResultado;
    int* posicoesSequenciais = buscaSequencial(vetor, tamanho, valorBuscado, tamanhoResultado);

    if (tamanhoResultado == 0) {
        cout << "Chave nao encontrada." << endl;
    } else {
        cout << "Chave encontrada nas posicoes:";
        for (int i = 0; i < tamanhoResultado; ++i) {
            cout << " " << posicoesSequenciais[i];
        }
        cout << endl;

        delete[] posicoesSequenciais;
    }

    return 0;
}
