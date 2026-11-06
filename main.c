#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int num;
    srand(time(NULL));
    int random_number = rand() % 100 + 1;
    printf("\nBienvenu dans le programme du Nombre Magique !\n");
    printf("\nChoississez un nombre entre 1 et 100 : ");
    scanf("%d", &num);
    while (random_number != num)
    {
        if (num < 0 || num > 100)
        {
            printf("\nChoisissez un nombre valide entre 0 et 100 : ");
            
        }
        else if (random_number < num)
        {
            printf("\nC'est moins !\n\nréessaye en choississant un nombre entre 1 et 100  : ");
            
        }
        else if (random_number > num)
        {
            printf("\nC'est plus !\n\nRéessaye en choisissant un nombre entre 1 et 100 : ");
            
        }
        scanf("%d", &num);
    }
    printf("\nBravo ! Le nombre magique étais : %d\n\n", num);
}