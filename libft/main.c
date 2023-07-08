#include <stdio.h>
#include "libft.h"

int main()
{
    //ft_isalpha: comprueba si un caracter es un alfabeto o no. (1 verdad - 0 falso)
    /*
    char c;
    c = ' ';
    
    if(ft_isalpha(c) == 0)
        printf("No pertenece al alfabeto");
    else
        printf("Si pertenece al alfabeto");
    */


   //ft_isdigit: comprueba si un caracter es un caracter numerico {0-9} o no
    /*char c;
    //c = 48;
    c = '7';

    if(ft_isdigit(c) == 0)
        printf("No es un caracter numerico entre 0 - 9");
    else
        printf("Si es un caracter numerico");    
    */

   //ft_isalnum: 

   //ft_isprint: comprueba si un caracter es un caracter imprimible o no. Son aquellos caracteres
   // que ocupan espacio de impresion. Valor de retorno 0 false - 1 true

    //ft_strlen: calcula la longitud de una cadena. 

	char str[] = "";
	int result = ft_strlen(str);
	//ft_substr("", 1, 1);
	printf("The length of the string is %d.\n", result);	
	return (0);
}
