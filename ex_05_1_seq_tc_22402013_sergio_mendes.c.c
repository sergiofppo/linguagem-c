int main()
{
    float c, f;
    
    setlocale("Portuguese");
    
    // valores da medida em celsius
    
    printf("\n DIGITE O VALOR DA TEMPERATURA EM GRAUS CELSIUS: ");
    scanf("%f", &c);
    
    // convers�o
    
    f=(c*1.8)+32;
    
    printf("\n A CONVERS�O DE C� PARA F�: %f", f);
    scanf("%f", &f);
    
    return 0;
}
