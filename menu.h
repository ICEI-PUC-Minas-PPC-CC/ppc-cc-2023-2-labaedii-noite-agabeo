#include <stdio.h>
#include <string.h>

void cadastrarCliente(Clientes *clientes) {
    printf("Cadastrando Cliente:\n");
    printf("Nome: ");
    scanf("%s", clientes->nome);
    printf("Sobrenome: ");
    scanf("%s", clientes->sobrenome);
    printf("CPF: ");
    scanf("%s", clientes->cpf);
    printf("Idade: ");
    scanf("%d", &clientes->idade);
    printf("Telefone: ");
    scanf("%s", clientes->telefone);
    printf("Estado: ");
    scanf("%s", clientes->estado);
    printf("Cidade: ");
    scanf("%s", clientes->cidade);
    printf("Email: ");
    scanf("%s", clientes->email);
}

void cadastrarLoja(Lojas *lojas) {
    printf("Cadastrando Loja:\n");
    printf("Nome: ");
    scanf("%s", lojas->nome);
    printf("Sobrenome: ");
    scanf("%s", lojas->sobrenome);
    printf("CNPJ: ");
    scanf("%s", lojas->cnpj);
    printf("Idade: ");
    scanf("%d", &lojas->idade);
    printf("Telefone: ");
    scanf("%s", lojas->telefone);
    printf("Estado: ");
    scanf("%s", lojas->estado);
    printf("Cidade: ");
    scanf("%s", lojas->cidade);
    printf("Email: ");
    scanf("%s", lojas->email);
}

void cadastrarPontoMaisVisitado(PontosMaisVisitados *pontos) {
    printf("Cadastrando Ponto Mais Visitado:\n");
    printf("Nome: ");
    scanf("%s", pontos->nome);
    printf("Latitude: ");
    scanf("%s", pontos->latitude);
    printf("Longitude: ");
    scanf("%s", pontos->longitude);
    printf("Visitas por Mês: ");
    scanf("%s", pontos->visitasPorMes);
    printf("Quantidade de Estrelas: ");
    scanf("%s", pontos->qntdDeEstrelas);
}

void listarClientes(Clientes *clientes, int numClientes) {
    printf("Listagem de Clientes:\n");
    for (int i = 0; i < numClientes; i++) {
        printf("Cliente %d:\n", i + 1);
        printf("Nome: %s\n", clientes[i].nome);
        printf("Sobrenome: %s\n", clientes[i].sobrenome);
        printf("CPF: %s\n", clientes[i].cpf);
        printf("Idade: %d\n", clientes[i].idade);
        printf("Telefone: %s\n", clientes[i].telefone);
        printf("Estado: %s\n", clientes[i].estado);
        printf("Cidade: %s\n", clientes[i].cidade);
        printf("Email: %s\n", clientes[i].email);
    }
}

void listarLojas(Lojas *lojas, int numLojas) {
    printf("Listagem de Lojas:\n");
    for (int i = 0; i < numLojas; i++) {
        printf("Loja %d:\n", i + 1);
        printf("Nome: %s\n", lojas[i].nome);
        printf("Sobrenome: %s\n", lojas[i].sobrenome);
        printf("CNPJ: %s\n", lojas[i].cnpj);
        printf("Idade: %d\n", lojas[i].idade);
        printf("Telefone: %s\n", lojas[i].telefone);
        printf("Estado: %s\n", lojas[i].estado);
        printf("Cidade: %s\n", lojas[i].cidade);
        printf("Email: %s\n", lojas[i].email);
    }
}

void listarPontosMaisVisitados(PontosMaisVisitados *pontos, int numPontos) {
    printf("Listagem de Pontos Mais Visitados:\n");
    for (int i = 0; i < numPontos; i++) {
        printf("Ponto %d:\n", i + 1);
        printf("Nome: %s\n", pontos[i].nome);
        printf("Latitude: %s\n", pontos[i].latitude);
        printf("Longitude: %s\n", pontos[i].longitude);
        printf("Visitas por Mês: %s\n", pontos[i].visitasPorMes);
        printf("Quantidade de Estrelas: %s\n", pontos[i].qntdDeEstrelas);
    }
}
void exibirMenuClientes() {
    int opcao;
    printf("Menu de Clientes:\n");
    printf("1. Cadastrar Cliente\n");
    printf("2. Listar Clientes\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    if (opcao == 1) {
        cadastrarCliente(Clientes *clientes)
    } else if (opcao == 2) {
        listarClientes(Clientes *clientes, int numClientes)
 
    } else {
        printf("Opção inválida.\n");
    }
}

void exibirMenuLojas() {
    int opcao;
    printf("Menu de Lojas:\n");
    printf("1. Cadastrar Loja\n");
    printf("2. Listar Lojas\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    if (opcao == 1) {
        cadastrarLoja(Lojas *lojas)
    } else if (opcao == 2) {listarLojas(Lojas *lojas, int numLojas) {
 
    } else {
        printf("Opção inválida.\n");
    }
}

void exibirMenuPontosMaisVisitados() {
    int opcao;
    printf("Menu de Pontos Mais Visitados:\n");
    printf("1. Cadastrar Ponto Mais Visitado\n");
    printf("2. Listar Pontos Mais Visitados\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    
    if (opcao == 1) {
        cadastrarPontoMaisVisitado(PontosMaisVisitados *pontos)
    } else if (opcao == 2) {
        listarPontosMaisVisitados(PontosMaisVisitados*pontos, int numPontos)
} else {
        printf("Opção inválida.\n");
    }
}

