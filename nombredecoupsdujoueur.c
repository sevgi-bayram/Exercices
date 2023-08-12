#include <stdio.h>

int main(void)
{
    int nb_coups;

    printf("Donnez le nombre de coups : ");
    scanf("%d", &nb_coups);
    printf("Vous gagnez en %d coup%c\n", nb_coups, (nb_coups > 1) ? 's' : ' ');
    return 0;
}
