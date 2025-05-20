int main()
{
    int altura, base, area;
    
    setlocale("Portuguese");
    
    // dados do tri�ngulo
    
    printf("\n INFORME O VALOR DA ALTURA DO TRI�NGULO: ");
    scanf("%d", &altura);
    
    printf("\n INFORME O VALOR DA BASE DO TRI�NGULO: ");
    scanf("%d", &base);
    
    // calcular a �rea do tri�ngulo
    
    area=(altura*base)/2;
    
    printf("\n A �REA DO TRI�NGULO �: %d", area);
    scanf("%d", &area);
    
    return 0;
}
