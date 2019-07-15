
#include <stdlib.h>
#include <conio.h
#define TAILLE N

int main(void)

{

    int matrice[N][N];

    int i,j,det=0;

 

    for(i=0;i<TAILLE;i++)//remplissage de la matrice

    {

        for(j=0;j<TAILLE;j++)

        {

            printf("Entrer les valeurs de la matrice[%d],[%d]",i,j);

            scanf("%d",&matrice[i][j]);

        }

    }

    for(i=0;i<TAILLE;i++)//affichage de la matrice

    {

        for(j=0;j<TAILLE;j++)

        {

            printf("(%d)",matrice[i][j]);

        }

        printf("\n");

    }

 

    for(i=0;i<TAILLE;i++)

    {

        for(j=0;j<TAILLE;j++)

        {

           if((i==0)&&(j==0))

           {

                det+=(matrice[i][j])*((matrice[i+1][j+1]*matrice[i+2][j+2])-(matrice[i+2][j+1]*matrice[i+1][j+2]));

           }

           else if((i==1)&&(j==0))

            {

                det-=(matrice[i][j])*(matrice[i-1][j+1]*matrice[i+1][j+2]-matrice[i+1][j+1]*matrice[i-1][j+2]);

            }

           else if((i==2)&&(j==0))

           {

                det+=(matrice[i][j])*(matrice[i-2][j+1]*matrice[i-1][j+2]-matrice[i-1][j+1]*matrice[i-2][j+2]);

           }

           else j=TAILLE;

        }

    }

 

   /*det=matrice[0][0]*matrice[1][1]-matrice[1][0]*matrice[0][1];*/ /**
