void main(void) 
{
	setlocale("Portuguese");
	
	printf("CONVERSAO FAHRENHEIT - CELSIUS\n");
    printf("CELSIUS   FAHRENHEIT\n");

    float fahrenheit = 32.0, celsius;
    int contador = 0;

    while (contador < 20) {
      
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);

        printf("%.2f\t %.2f\n", celsius, fahrenheit);

        contador++;
        fahrenheit++;
    }

    return 0;
}
