int main() {
    char sexo;
    float altura, pesoIdeal;

    
    printf("Digite o sexo (M para Masculino, F para Feminino): ");
    scanf(" %c", &sexo);

    
    printf("Digite a altura em centimetros: ");
    scanf("%f", &altura);

    
    if(sexo == 'M' || sexo == 'm') {
        pesoIdeal = 52 + (0.75 * (altura - 152.4));
        printf("O peso ideal para um homem com %.2f cm de altura �: %.2f kg\n", altura, pesoIdeal);
    } else if(sexo == 'F' || sexo == 'f') {
        pesoIdeal = 52 + (0.67 * (altura - 152.4));
        printf("O peso ideal para uma mulher com %.2f cm de altura �: %.2f kg\n", altura, pesoIdeal);
    } else {
        printf("Sexo invalido!\n");
    }

    return 0;
}

