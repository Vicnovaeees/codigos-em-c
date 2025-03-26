#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Função que inclui um valor após um valor base na lista
bool incluirApos(vector<string>& lista, string valor, string apos) {
    // Percorre a lista procurando o valor base (apos)
    for (size_t i = 0; i < lista.size(); ++i) {
        if (lista[i] == apos) {
            // Insere o valor logo após o valor base
            lista.insert(lista.begin() + i + 1, valor);
            return true;  // Retorna verdadeiro se a inserção for bem-sucedida
        }
    }
    // Retorna falso se o valor base não for encontrado
    return false;
}

int main() {
    vector<string> lista = {"maçã", "banana", "laranja", "uva"};
    string valor = "morango";
    string apos = "banana";

    // Testa a função
    if (incluirApos(lista, valor, apos)) {
        cout << "Valor inserido com sucesso!" << endl;
    } else {
        cout << "Valor base não encontrado!" << endl;
    }

    // Exibe a lista após a inserção
    for (const auto& item : lista) {
        cout << item << " ";
    }

    return 0;
}
