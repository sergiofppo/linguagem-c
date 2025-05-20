int main()
{
    float nota1, nota2, ma;
    
    setlocale("Portuguese");
    
    // valores das notas
    
    printf("\n INFORME O VALOR DA NOTA 1: ");
    scanf("%f", &nota1);
    
    printf("\n INFORME O VALOR DA NOTA 2: ");
    scanf("%f", &nota2);
    
    // calcular a m�dia aritim�tica
    
    ma=(nota1+nota2)/2;
    
    printf("\n O VALOR DA M�DIA �: %f", ma);
    scanf("%f", &ma);
    
    return 0;
}
