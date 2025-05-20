void main (void)
{
float fahrenheit, celsius;
    int contador = 0;

    while (contador < 101) {
        if (contador % 25 == 0) {
            printf("\nCONVERSAO FAHREINHEIT - CELSIUS\n");
            printf("CELSIUS    FAHREINHEIT\n");
        }

        for (fahrenheit = contador - 50; fahrenheit <= contador - 25; fahrenheit++) {
            celsius = (5.0 / 9.0) * (fahrenheit - 32);
            printf("%8.2f    %8.2f\n", celsius, fahrenheit);
        }

        printf("\nPressione ENTER para continuar...");
        while (getchar() != '\n'); 
        system("cls"); 

        contador += 25;
    }

    return 0;
}
