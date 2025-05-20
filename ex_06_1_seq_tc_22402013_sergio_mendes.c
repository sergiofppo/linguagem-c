double pi ()
{
       return 3.14;
}

int main()
{
    int raio, pi, area;
    
    setlocale("Portuguese");
    
    // solicitar valor do raio do c�rculo
    
    printf("\n DIGITE O VALOR DO RAIO DO CIRCULO: ");
    scanf("%d", &raio);
    
    // calulcar a area do c�rculo
    
    area= pi * pow(raio, 2);
    
    printf("\n A �REA DO C�CULO DE RAIO %d �: %d", raio, area);
    scanf("%d", &area);
    
    return 0;
}
    
    
    

