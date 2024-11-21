#include <stdio.h>

int cadastrarProduto(Produto produto[], int tamanhoProduto){

    for(int i=0; i>tamanhoProduto; i++){
        prinft("Cadastrar produto");
        printf("Digite o código do produto: ");
        scanf("%d", &produto[i].codigo);

        printf("Digite o nome do produto: ");
        scanf("%s", &produto[i].nome);
        
        printf("Digite o nome do produto: ");
        scanf("%f", &produto[i].preco);
        
    }
    return produtosCadastrados + 1;
}

int main(){

    int tamanhoProduto =50;
    int opcao;
    do {
        printf("Menu\n");
        printf("1.Cadastrar Produto.\n");
        printf("2.Listar Produtos.\n");
        printf("3.Comprar Produto\n");
        printf("4.Visualizar Carrinho.\n");
        printf("5.Fechar Pedido.\n");
        printf("6.Sair do Sistema.\n");
        scanf("%d", opcao);

        switch(opcao)
        case 1: 
            cadastrarProduto();
            break;
        case 2:
            listarProduto();
            break;
        case 3 :
            comprarProduto();
            break;
        case 4 :
            visualizarCarrinho();
            break;
        case 5 :
            fecharPedido();
            break;
        case 6 :
            printf("O sistema está sendo encerrado !");
        default:
        printf("Opção inválida! Por favor, tente novamente.\n");

    }while(opcao != 6);
    
    

    return 0;
}
Clara-
    #include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int codigo;
    char nome[30];
    float preco;
}Produto;

typedef struct{
    Produto Produto;
    int quantidade;
}Carrinho;


void listarProdutos(Produto produto[],int tamanho){
    printf("Produtos disponiveis:\n");
    for(int i=0; i<tamanho;i++){
        printf("%d, %s (R$ %.2f)", produto[i].codigo, produto[i].nome, produto[i].preco);
    }
}
    
    
  int main() {
    Produto produto[50]; 

    for (int i = 0; i < 50; i++) { 
        strcpy(produto[i].nome, "arroz"); 
        produto[i].codigo = 56;
        produto[i].preco = 10.0;
    }

    return 0;
}
