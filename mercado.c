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
    return 0;
}
