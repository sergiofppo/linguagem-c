int main()
{
    float v1, v2, soma, sub;
    
    setlocale("Portuguese");
    
    // solicitar os valores para o usu�rio
    
    printf("\n DIGITE O VALOR 1: ");
    scanf("%f", &v1);
    
    printf("\n DIGITE O VALOR 2: ");
    scanf("%f", &v2);
    
    // fazer a soma
    
    soma = v1+v2;
    
    printf("\n A SOMA DO VALOR %.2f E DO VALOR %.2f �: %.2f ", v1, v2, soma);
    scanf("%.2f", &soma);
    
    // fazer a sub
    
    sub = v1-v2;
    
    printf("\n A SUBTRA��O DO VALOR %.2f E DO VALOR %.2f �: %.2f ", v1, v2, sub);
    scanf("%.2f", &sub);
    
    
    return 0;
}
    
    
    

