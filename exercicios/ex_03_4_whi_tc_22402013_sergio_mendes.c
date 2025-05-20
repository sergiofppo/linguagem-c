void main(void) 
{
	setlocale("Portuguese");
	
	printf("CONVERSAO FAHRENHEIT - CELSIUS\n");
    printf("CELSIUS   FAHRENHEIT\n");

    
    float inicial, final, fahrenheit, celsius;

    
    printf("Digite a temperatura inicial (em Fahrenheit): ");
    scanf("%f", &inicial);
    printf("Digite a temperatura final (em Fahrenheit): ");
    scanf("%f", &final);

   
    if (inicial > final) {
        printf("O valor inicial deve ser menor ou igual ao valor final.\n");
        return 1; 
    }

    
    fahrenheit = inicial;

    
    while (fahrenheit <= final) {
        
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

    
        printf("%.2f\t %.2f\n", celsius, fahrenheit);

        
        fahrenheit++;
    }

    return 0;
}
