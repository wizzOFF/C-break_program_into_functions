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

/*
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
}
*/

/*
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
    
    //nombreTriple = triple(nombreEntre);
    //printf("Le triple de ce nombre est %d\n", nombreTriple);

    // Le résultat de la fonction est directement envoyé au printf et n'est pas stocké dans une variable
    printf("Le triple de ce nombre est %d\n", triple(nombreEntre));
}
*/

/*
void punition(int nombreDeLignes)
{
    int i;
    
    for (i = 0 ; i < nombreDeLignes ; i++)
    {
        printf("Je ne dois pas copier sur mon voisin\n");
    }    
}    

int main(int argc, char *argv[])
{    
    punition(10);
}
*/


double aireRectangle(double largeur, double hauteur)
{
    return largeur * hauteur;
}    

int main(int argc, char *argv[])
{    
    printf("Rectangle de largeur 5 et hauteur 10. Aire = %f\n", aireRectangle(5, 10));
    printf("Rectangle de largeur 2.5 et hauteur 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
    printf("Rectangle de largeur 4.2 et hauteur 9.7. Aire = %f\n", aireRectangle(4.2, 9.7));
    
    return 0;
}