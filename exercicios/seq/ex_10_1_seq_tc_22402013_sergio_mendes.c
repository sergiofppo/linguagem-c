int main() {
    float a, b, raiz;

    printf("Insira o coeficiente 'a': ");
    scanf("%f", &a);
    printf("Insira o coeficiente 'b': ");
    scanf("%f", &b);

    raiz = -b / a;

    // Exibe o resultado
    printf("A raiz da equacao %.2f * x + %.2f = 0 e: %.2f\n", a, b, raiz);
    scanf("%.2f", &raiz);

    return 0;
}

