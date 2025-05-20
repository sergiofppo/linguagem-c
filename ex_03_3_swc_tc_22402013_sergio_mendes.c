void buscarProduto(int codigo, char *nome, float *preco) 
	{
    switch (codigo) {
        case 1:
            strcpy(nome, "Arroz");
            *preco = 10.50;
            break;
        case 2:
            strcpy(nome, "Feij�o");
            *preco = 8.75;
            break;
        case 3:
            strcpy(nome, "Macarr�o");
            *preco = 5.25;
            break;
        default:

            strcpy(nome, "Produto n�o encontrado");
            *preco = 0.0;
            break;
    }
}

int main() {
    int codigo;
    char nome[50];
    float preco;

    
    printf("Digite o c�digo do produto: ");
    scanf("%d", &codigo);

    
    buscarProduto(codigo, nome, &preco);

    printf("Nome do Produto: %s\n", nome);
    printf("Pre�o do Produto: R$ %.2f\n", preco);

    return 0;
}
