#define PE_TO_METERS 0.3048

int main() {
    float pes, metros;

    printf("Digite o valor em p�s: ");
    scanf("%f", &pes);

    metros = pes * PE_TO_METERS;

    printf("%.2f p�s equivalem a %.2f metros.\n", pes, metros);
    scanf("%.2f", &metros);

    return 0;
}

