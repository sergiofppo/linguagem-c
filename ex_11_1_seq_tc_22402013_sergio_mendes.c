int main() {
    int a, b, temp;
    
    printf("Insira o valor da variavel 'a': ");
    scanf("%d", &a);
    printf("Insira o valor da variavel 'b': ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    // Exibe os novos valores das vari�veis
    printf("Depois da troca:\n");
    printf("Valor de 'a': %d\n", a);
    printf("Valor de 'b': %d\n", b);

    return 0;
}

