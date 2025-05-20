#define PI 3.14

float calcular_volume_esfera(float raio) {
    float volume = (4.0 / 3.0) * PI * pow(raio, 3);
    return volume;
}

int main() {
    float raio, volume;
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);
    
    volume = calcular_volume_esfera(raio);
    
    printf("O volume da esfera e: %.2f\n", volume);
    scanf("%.2f", &volume);
    
    return 0;
}

