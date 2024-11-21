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
void listarProdutos(Produto produto[],int tamanho){
    printf("Produtos disponiveis:\n");
    for(int i=0; i<tamanho;i++){
        printf("%d, %s (R$ %.2f)", produto[i].codigo, produto[i].nome, produto[i].preco);
    }
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



void listarProdutos(Produto produto[],int tamanho){
    printf("Produtos disponiveis:\n");
    for(int i=0; i<tamanho;i++){
        printf("%d, %s (R$ %.2f)", produto[i].codigo, produto[i].nome, produto[i].preco);
    }
}
    
    
 
