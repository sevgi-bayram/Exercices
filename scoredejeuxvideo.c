#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	score;
	
	printf("Quel est le score du joueur ? ");
    scanf("%d", &score);
	{
		if (score <= 2000)
		{
			printf("C'est la catastrophe !\n");
		}
		else if (score >= 2000 && score < 5000)
		{
			printf("Tu peux faire mieux !\n");
		}
		else if(score >= 5000 && score < 9000)
		{
			printf("Tu est dans la bonne voie !\n");
		}
		else
		{
			printf("Tu est le meilleur !\n");
		}
	}
}