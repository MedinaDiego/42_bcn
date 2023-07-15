#include "libft.h"
#include <stdio.h>
/*
Inicio programa para realizar los test de cada funcion realizada.
*/

/*
Parte 1

1. Nombre de la funcion: ft_isalpha
   Objetivo: Comprueba si un caracter es alfabetico. Tiene en cuenta las letras mayusculas y minusculas 
              del alfabeto (valores ASCII). Si el caracter es afabetico devuelve un valor diferente a 0
              de lo contrario devolvera 0.

2. Nombre de la funcion: ft_isdigit
   Objetivo: Comprueba si un caracter es un digito {0-9}. Si el caracter es un digito devuelve un valor diferente a 0
              de lo contrario devolvera 0.

3. Nombre de la funcion: ft_alnum
   Objetivo: Comprueba si un caracter es un caracter alfabetico o un digito, devuelve un valor distinto a 0 si pertenece
             de lo contrario el resultado es 0

4. Nombre de la funcion: ft_isacii
   Objetivo: Comprueba si un carácter está dentro del rango ASCII. Verifica si el carácter tiene un valor ASCII 
             entre 0 y 127, inclusive. Si el carácter de entrada se encuentra dentro de este rango, 
             la función devuelve un valor distinto de cero; de lo contrario, devuelve 0.

5. Nombre de la funcion: ft_isprint
   Objetivo: La función ft_isprint comprueba si un carácter dado es imprimible. Si el carácter no es imprimible, devuelve 0.
             Un carácter se considera imprimible si su valor ASCII es mayor que 31 (decimal) y menor que 127 (decimal). 
             Los caracteres en este rango corresponden a caracteres imprimibles en la tabla ASCII, incluidos 
             alfabetos (AZ, az), dígitos (0-9), signos de puntuación y símbolos especiales. La función realiza 
             una comparación simple para verificar si el valor ASCII del carácter dado se encuentra dentro del rango 
             especificado.   

6. Nombre de la funcion: ft_toupper
   Objetivo: La función ft_toupper Comprueba si 'c' está en el rango de letras minúsculas, que corresponde a 
             valores ASCII de 97 a 122. Si 'c' es una letra minúscula, resta 32 de su valor ASCII para convertirlo 
             a la letra mayúscula correspondiente. Esta conversión es posible porque los valores ASCII para letras 
             mayúsculas y minúsculas tienen una diferencia de 32. Finalmente, devuelve la letra mayúscula convertida 
             si 'c' era una letra minúscula, o el carácter de entrada en sí mismo si 'c' no era una letra minúscula.

7. Nombre de la funcion: ft_tolower
   Objetivo: La función ft_tolower toma un carácter de entrada 'c'. Comprueba si 'c' está en el rango de letras mayúsculas, 
             que corresponde a valores ASCII de 65 a 90. Si 'c' es una letra mayúscula, agrega 32 a su valor ASCII para 
             convertirlo a la letra minúscula correspondiente. Esta conversión es posible porque los valores ASCII para 
             letras mayúsculas y minúsculas tienen una diferencia de 32. Finalmente, devuelve la letra minúscula 
             convertida si 'c' era una letra mayúscula, o el carácter de entrada si 'c' no era una letra mayúscula.

8. Nombre de la funcion: ft_strlen
   Objetivo: La función ft_tolower toma un carácter de entrada 'c'. Comprueba si 'c' está en el rango de letras mayúsculas, 
             que corresponde a valores ASCII de 65 a 90. Si 'c' es una letra mayúscula, agrega 32 a su valor ASCII para 
             convertirlo a la letra minúscula correspondiente. Esta conversión es posible porque los valores ASCII para 
             letras mayúsculas y minúsculas tienen una diferencia de 32. Finalmente, devuelve la letra minúscula 
             convertida si 'c' era una letra mayúscula, o el carácter de entrada si 'c' no era una letra mayúscula.

. Nombre de la funcion: ft_bzero
   Objetivo: La función ft_strlen calcula la longitud de una cadena.
             Calcula la longitud de una cadena terminada en cero. Toma un puntero a una matriz de caracteres 
             constante (str) como entrada. Inicializa una variable i como 0 y luego itera a través de los caracteres 
             de la cadena hasta que encuentra el terminador nulo ('\0'). Para cada carácter, incrementa i. Finalmente, 
             devuelve el valor de i, que representa la longitud de la cadena.


*/

int main(void)
{
    /*1- Test ft_isalpha*/
    printf("Es un caracter alfabetico? : %d\n", ft_isalpha('A') );
    printf("Es un caracter alfabetico? : %d\n", ft_isalpha('z') );
    printf("Es un caracter alfabetico? : %d\n", ft_isalpha('0') );
    printf("Es un caracter alfabetico? : %d\n\n", ft_isalpha('#') );
    
    /*2- Test ft_isdigit*/
    printf("Es un caracter digito? : %d\n", ft_isdigit('0') );
    printf("Es un caracter digito? : %d\n", ft_isdigit('9') );
    printf("Es un caracter digito? : %d\n", ft_isdigit('A') );
    printf("Es un caracter digito? : %d\n\n", ft_isdigit('#') );
    
    /*3- Test ft_isalnum*/
    printf("Es un caracter alfabetico / digito? : %d\n", ft_isalnum('A') );
    printf("Es un caracter alfabetico / digito? : %d\n", ft_isalnum('z') );
    printf("Es un caracter alfabetico / digito? : %d\n", ft_isalnum('0') );
    printf("Es un caracter alfabetico / digito? : %d\n\n", ft_isalnum('#') );

    /*4- Test ft_isascii*/
    printf("Es un caracter ASCII? : %d\n", ft_isascii('A') );
    printf("Es un caracter ASCII? : %d\n", ft_isascii('z') );
    printf("Es un caracter ASCII? : %d\n", ft_isascii(150) );
    printf("Es un caracter ASCII? : %d\n\n", ft_isascii(-5) );

    /*5- Test ft_isprint*/
    printf("Es un caracter imprimible? : %d\n", ft_isprint('\n') );
    printf("Es un caracter imprimible? : %d\n", ft_isprint('%') );
    printf("Es un caracter imprimible? : %d\n", ft_isprint(' ') );
    printf("Es un caracter imprimible? : %d\n\n", ft_isprint('\t')  );

    /*6- Test ft_toupper*/
    printf("Convierte el caracter a en mayus? : %c\n", ft_toupper('a') );
    printf("Convierte el caracter B en mayus? : %c\n", ft_toupper('B') );
    printf("Convierte el caracter $ en mayus? : %c\n\n", ft_toupper('$')  );

    /*7- Test ft_tolower*/
    printf("Convierte el caracter a en minus? : %c\n", ft_tolower('a') );
    printf("Convierte el caracter B en minus? : %c\n", ft_tolower('B') );
    printf("Convierte el caracter $ en minus? : %c\n\n", ft_tolower('$')  );

    /*8- Test ft_strlen*/
    printf("Longitud de la cadena : %zu\n", ft_strlen("Hello") );
    printf("Longitud de la cadena : %zu\n", ft_strlen("") );
    printf("Longitud de la cadena : %zu\n", ft_strlen("12345 $ .") );
    printf("Longitud de la cadena : %zu\n\n", ft_strlen("This is a long string!")  );
    
    /*FUNCIONES QUE TRABAJAN CON ZONAS DE MEMORIA */
    
    /*- Test ft_bzero*/
    char buffer_0[10];
    ft_bzero(buffer_0, sizeof(buffer_0));
    
    /*- Test ft_memset*/
    char buffer[10] = {'1','2','3','4','5','6','7','8','9', '0'};
    int i = 0;
    ft_memset(buffer,'A', sizeof(buffer));
    while(buffer[i] != '\0')
    {
        printf("Array : %c\n", buffer[i]);
        i++;
    }

    //split
    const char *str = "123-456-789-0";
    char **split_array = ft_split(str, '-');
    puts(str);
    int x = 0;
    while(*split_array[x] != '\0')
    {
         puts(split_array[x]);
         x++;
     } 
      
    
    
    return (0);
}

