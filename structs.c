typedef struct{
  char nome[50];
  char sobrenome[50];
  int cpf[14];
  int idade[3];
  int telefone[18];
  int estado[50];
  int cidade[50];
  char email[50];
}Clientes;

typedef struct{
  char nome[50];
  char sobrenome[50];
  int cnpj[14];
  int idade[3];
  int telefone[18];
  int estado[50];
  int cidade[50];
  char email[50];
}Lojas;

typedef struct{
  char nome[50];
  int latitude[14];
  int longitude[18];
  int visitasPorMes[10];
 int qntdDeEstrelas[5];
}PontosMaisVisitados;
