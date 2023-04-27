#include <stdio.h>
#include <string.h>

int main () {
    printf("OI");
return 0 ;
}
/*
using namespace std;

// Definição da estrutura Fornecedor
struct Fornecedor {
    string nome;
    string endereco;
    string telefone;
};

// Definição da estrutura Material
struct Material {
    string nome;
    int quantidade;
    float preco;
};

// Definição da estrutura Locacao
struct Locacao {
    Fornecedor fornecedor;
    Material material;
    int duracao;
};

// Função para cadastrar um fornecedor
void cadastrarFornecedor(Fornecedor& fornecedor) {
    cout << "Digite o nome do fornecedor: ";
    getline(cin, fornecedor.nome);

    cout << "Digite o endereco do fornecedor: ";
    getline(cin, fornecedor.endereco);

    cout << "Digite o telefone do fornecedor: ";
    getline(cin, fornecedor.telefone);
}

// Função para cadastrar um material
void cadastrarMaterial(Material& material) {
    cout << "Digite o nome do material: ";
    getline(cin, material.nome);

    cout << "Digite a quantidade disponivel do material: ";
    cin >> material.quantidade;

    cout << "Digite o preco do material: ";
    cin >> material.preco;

}

// Função para cadastrar uma locação
void cadastrarLocacao(Locacao& locacao) {
    cout << "Cadastro da locacao" << endl;

    cadastrarFornecedor(locacao.fornecedor);
    cadastrarMaterial(locacao.material);

    cout << "Digite a locacao do produto: ";
    cin >> locacao.duracao;
}

int main() {
    Locacao locacao;

    // Cadastro de uma locação
    cadastrarLocacao(locacao);

    // Exibição dos dados cadastrados
    cout << "Dados cadastrados:" << endl;
    cout << "Fornecedor: " << locacao.fornecedor.nome << ", Endereco: " << locacao.fornecedor.endereco << ", Telefone: " << locacao.fornecedor.telefone << endl;
    cout << "Material: " << locacao.material.nome << ", Quantidade: " << locacao.material.quantidade << ", Valor: " << locacao.material.preco << endl;
    cout << "Locacao: " << locacao.duracao << "no almo" << endl;

    return 0;
}
*/
