#include<stdio.h>

int main()
{
	float nota[4] = {0};
	float nota_recuperacao, media;
	for(int i = 0; i < 4; i++)
	{
		scanf("%f", &nota[i]);
	}
	media = (nota[0]*2+nota[1]*3+nota[2]*4+nota[3]*1)/10;
    printf("Media: %.1f\n", media);
	if(media >= 7)
	{
		printf("Aluno aprovado.\n");
	}
	else
	{
		if(media < 5)
		{
			printf("Aluno reprovado.\n");
		}
		else
		{
			printf("Aluno em exame.\n");
			scanf("%f", &nota_recuperacao);
			media = (media+nota_recuperacao)/2;
            printf("Nota do exame: %.1f\n", nota_recuperacao);
			if(media >= 5)
			{
				printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n", media);
			}
			else
			{
				printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n", media);
			}
		}	
	}
	return 0;
}