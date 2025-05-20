#define PI 3.14

float calcular_comprimento_circunferencia(float raio) {
    float comprimento = 2 * PI * raio;
    return comprimento;
}

int main() {
    float raio, comprimento;
    
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);
    
    comprimento = calcular_comprimento_circunferencia(raio);
    
    printf("O comprimento da circunferencia e: %.2f\n", comprimento);
    scanf("%.2f", &comprimento);
    
    return 0;
}

