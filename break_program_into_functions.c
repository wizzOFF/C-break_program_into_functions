/*int triple(int nombre)
{
    int resultat = 0;

    resultat = 3 * nombre;  // On multiplie le nombre fourni par 3
    return resultat;       // On retourne la variable resultat qui vaut le triple de nombre
}
*/

/*
int addition(int a, int b)
{
    return a + b;
}
*/

/*
void bonjour()
{
    printf("Bonjour");
}
*/


#include <stdio.h>
#include <stdlib.h>

int triple(int nombre)
{
    return 3 * nombre;
}    

int main(int argc, char *argv[])
{
    int nombreEntre = 0, nombreTriple = 0;
    
    printf("Entrez un nombre... ");
    scanf("%d", &nombreEntre);
    
    nombreTriple = triple(nombreEntre);
    printf("Le triple de ce nombre est %d\n", nombreTriple);
    
    return 0;
}