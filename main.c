#include <stdio.h>

int main()
{
    int number;
    printf("Programa que dado un numero, obtenga su serie decreciente \n\n");

    printf("Ingresa un numero entero: ");
    scanf("%d", &number);

    for(int i = number -1; i >= 0; i--){
        printf("%d \n", i);
    }

    return 0;
}
