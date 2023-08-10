#include <stdio.h>

int	main(void)
{
	int	p_nombre;
	int	d_nombre;
	
	printf("Veuillez saisir le premier nombre :");
	scanf("%d", &p_nombre);
	printf("Veuillez saisir le deuxieme nombre :");
	scanf("%d", &d_nombre);
	printf("Calculs :\n");
	printf("\t%d + %d = %d\n", p_nombre, d_nombre, p_nombre + d_nombre);
	printf("\t%d - %d = %d\n", p_nombre, d_nombre, p_nombre - d_nombre);
	printf("\t%d * %d = %d\n", p_nombre, d_nombre, p_nombre * d_nombre);
	printf("\t%d / %d = %.3f\n", p_nombre, d_nombre, p_nombre / (double)d_nombre);
	printf("Au revoir !\n");
	return 0; 
}