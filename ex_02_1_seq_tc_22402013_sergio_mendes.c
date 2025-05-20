int main ()
{
    int v1, v2;
    int soma, sub, mult;
    
    setlocale("Portuguese");
    
    // pede valores pro usu�rio
    printf("\n DIGITE O VALOR 1: ");
    scanf("%d", &v1);
    
    printf("\n DIGITE O VALOR 2: ");
    scanf("%d", &v2);
    
    // soma os valores
    
    soma = v1 + v2;
    
    printf("\n A SOMA DE %d E %d �: %d", v1, v2, soma);
    scanf("%d", &soma);
    
    // subtrai os valores
    
    sub = v1 - v2;
    
    printf("\n A SUBTRA��O DE %d e %d �: %d", v1, v2, sub);
    scanf("%d", &sub);
    
    // multiplica os valores
    
    mult = v1 * v2;
    
    printf("\n A MULTIPLICA��O DE %d e %d �: %d", v1, v2, mult);
    scanf("%d", &mult);
    
    return 0;
}
