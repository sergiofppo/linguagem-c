int main() 
{
	setlocale("Portuguese"); 
	
    int contador = 0;
    int numero = 0;

    printf("Os 20 primeiros n�meros pares divis�veis por 6:\n");

    while (contador < 20) {
        numero += 6;
        if (numero % 2 == 0) {
            printf("Decimal: %d, Octal: %o, Hexadecimal: %x\n", numero, numero, numero);
            contador++;
        }
    }

    return 0;
}
