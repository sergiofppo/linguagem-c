#define PI 3.14

float calcular_area_lateral_cilindro(float raio, float altura) {
    float area_lateral = 2 * PI * raio * altura;
    return area_lateral;
}

int main() {
    float raio, altura, area_lateral;
    
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura);
    
    area_lateral = calcular_area_lateral_cilindro(raio, altura);
    
    printf("A area lateral do cilindro e: %.2f\n", area_lateral);
    scanf("%.2f", &area_lateral);
    
    return 0;
}

