#include<stdio.h>
/**
 * CAPITULO 3:PROBLEMA 17
 * Introducir las longitudes de los lados de un
 * triangulo. Determinar si el triangulo es isos-
 * celes, equilatero o escaleno.
*/

//@Autor    vmmp17
    int main(void){
    int a, b, c;
    printf("\n Ingrese primera longitud: ");
        scanf("%d",&a);
        setbuf ( stdin, NULL );
    printf("\n Ingrese segunda longitud: ");
        scanf("%d",&b);
        setbuf ( stdin, NULL );
    printf("\n Ingrese tercera longitud: ");
        scanf("%d",&c);
        setbuf ( stdin, NULL );
    if(a==b&&a==c)
    {
        printf("\n El triangulo es equilatero");
    }
    else if(a==b||a==c||b==c)
    {
        printf("\n El triangulo es isosceles");
    }
    else if(a!=b&&a!=b&&b!=c)
    {
        printf("\n El triangulo es escaleno");
    }
    setbuf ( stdin, NULL );
    getchar();
    }