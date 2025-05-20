void main (void)
{
 float metros, pes;
    int contador = 0;

    while (contador <= 100) {
        if (contador % 20 == 0) {
            printf("\nConversao metros - pes\n");
            printf("Metros    Pes\n");
        }

        for (metros = contador; metros <= contador + 19; metros++) {
            pes = metros / 0.3048;
            printf("%6.2f    %6.2f\n", metros, pes);
        }

        printf("\nPressione ENTER para continuar...");
        while (getchar() != '\n'); //
        system("cls"); 

        contador += 20;
    }

    return 0;
}
