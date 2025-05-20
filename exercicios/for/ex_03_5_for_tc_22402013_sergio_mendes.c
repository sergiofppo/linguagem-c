void main (void)
{
float fahrenheit, celsius;

    printf("Fahrenheit   Celsius\n");
    for (fahrenheit = -50; fahrenheit <= 50; fahrenheit++) {
        celsius = (5.0 / 9.0) * (fahrenheit - 32);
        printf("%8.2f    %8.2f\n", fahrenheit, celsius);
    }

    return 0;
}
