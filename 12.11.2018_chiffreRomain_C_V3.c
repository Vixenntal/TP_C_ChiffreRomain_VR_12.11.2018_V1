#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Prototype
void romVarabe();
void arabeVrom();

int main()
{
    int nChoix = 0;

    printf("1 : Romain vers Arabe\n");
    printf("2 : Arabe vers Romain\n");
    printf("3 : Quitter.\n");

    printf("Faites votre choix\n");
    scanf("%d", &nChoix);

    if (nChoix == 1) //Choix de la procedure a lancer
    {
        romVarabe();
    }

    else if (nChoix == 2)
    {
        arabeVrom();
    }

	return 0;
}

//Implémentation
//**********************************************************
//Description : Procedure réalisant la conversion d'un nombre romain en arabe
//
//Entrées :  Trois entiers en arguments et une chaine de caractere
//
//Sorties :  Un entier, résultat de la conversion
//
//Note :
//
//**********************************************************

void romVarabe() //Procedure convertir chiffre romain vers arabe
{
    char cChiffreRomain[100]; //initialisation de la variable chiffre romain
    int nChiffreArabe = 0;
    int nCpt = 0; //compteur pour la boucle for
    int nLongeur = 0; //variable qui recupere la taille de la chaine cChiffreRomain

	printf("Saisir un Chiffre Romain (I, V, X, L, C, D, M) :\n");
	scanf("%s", cChiffreRomain); //recupere l'entrée de l'utilisateur

	nLongeur = strlen(cChiffreRomain); //taille de la chaine entrée par l'utilisateur

	for (nCpt = 0; nCpt < nLongeur; ++nCpt) //boucle for qui ecrit le chiffre arabe a partir du chiffre romain
	 {
            if (cChiffreRomain[nCpt] == 'M') //si la chaine contient un M faire + 1000 dans le nChiffreArabe
            {
                nChiffreArabe +=1000;
            }

            else if ((cChiffreRomain[nCpt] == 'C') && (cChiffreRomain[nCpt+1] == 'M')) //si la chaine contient M précédé d'un C faire +900 dans nChiffreArabe
            {
                nChiffreArabe +=900;
                nCpt +=1;
            }

            else if (cChiffreRomain[nCpt] == 'D') //meme principe qu'au dessus
            {
                nChiffreArabe +=500;
            }

            else if ((cChiffreRomain[nCpt] == 'C') && (cChiffreRomain[nCpt+1] == 'D')) //meme principe qu'au dessus
            {
                nChiffreArabe +=400;
                nCpt +=1;
            }

            else if (cChiffreRomain[nCpt] == 'C') //meme principe qu'au dessus
            {
                nChiffreArabe +=100;
            }

            else if ((cChiffreRomain[nCpt] == 'X') && (cChiffreRomain[nCpt+1] == 'C')) //meme principe qu'au dessus
            {
                nChiffreArabe +=90;
                nCpt +=1;
            }

            else if (cChiffreRomain[nCpt] == 'L') //meme principe qu'au dessus
            {
                nChiffreArabe +=50;
            }

            else if ((cChiffreRomain[nCpt] == 'X') && (cChiffreRomain[nCpt+1] == 'L')) //meme principe qu'au dessus
            {
                nChiffreArabe +=40;
                nCpt +=1;
            }

            else if (cChiffreRomain[nCpt] == 'X') //meme principe qu'au dessus
            {
                nChiffreArabe +=10;
            }

            else if ((cChiffreRomain[nCpt] == 'I') && (cChiffreRomain[nCpt+1] == 'X')) //meme principe qu'au dessus
            {
                nChiffreArabe +=9;
                nCpt +=1;
            }

            else if (cChiffreRomain[nCpt] == 'V') //meme principe qu'au dessus
            {
                nChiffreArabe +=5;
            }

            else if ((cChiffreRomain[nCpt] == 'I') && (cChiffreRomain[nCpt+1] == 'V')) //meme principe qu'au dessus
            {
                nChiffreArabe +=4;
                nCpt +=1;
            }

            else if (cChiffreRomain[nCpt] == 'I') //meme principe qu'au dessus
            {
                nChiffreArabe +=1;
            }
	 }

printf("%d\n", nChiffreArabe);
}

//Implémentation
//**********************************************************
//Description : Procedure réalisant la conversion d'un arabe romain en romain
//
//Entrées :  Trois entiers en arguments et une chaine de caractere
//
//Sorties :  Un entier, résultat de la conversion
//
//Note :
//
//**********************************************************

void arabeVrom(int nChiffreArabe) //Procedure convertir chiffre arabe vers romain
{

    printf("Entrez un nombre arabe entre 1 et 3999 : \n"); // demande a l'utilisateur de saisir un chiifre arabe
    scanf("%d", &nChiffreArabe);

    while(nChiffreArabe > 0) //boucle TANT QUE qui s'arrete lorsque que nChiffreArabe est inferieur a zero
    {
              if(nChiffreArabe >= 1000)  //Si nChiffreArabe est superieur a 1000, entre dans le if
              {
                     printf("M"); //Ecrit un M
                     nChiffreArabe -=1000; //soustrait 1000 a nChiffreArabe, recommence tant que nChiffreArabe est superieur a 1000
              }
              else if(nChiffreArabe >= 900) //meme principe qu'au dessus
              {
                   printf("CM");
                   nChiffreArabe -=900;
              }
              else if(nChiffreArabe >= 500) //meme principe qu'au dessus
              {
                   printf("D");
                   nChiffreArabe -=500;
              }
              else if(nChiffreArabe >= 400) //meme principe qu'au dessus
              {
                   printf("CD");
                   nChiffreArabe -=400;
              }
              else if(nChiffreArabe >= 100) //meme principe qu'au dessus
              {
                   printf("C");
                   nChiffreArabe -=100;
              }
              else if (nChiffreArabe >= 90) //meme principe qu'au dessus
              {
                  printf("XC");
                  nChiffreArabe -=90;
              }
              else if(nChiffreArabe >= 50) //meme principe qu'au dessus
              {
                   printf("L");
                   nChiffreArabe -=50;
              }
              else if(nChiffreArabe >= 40) //meme principe qu'au dessus
              {
                   printf("XL");
                   nChiffreArabe -=40;
              }
              else if(nChiffreArabe >= 10) //meme principe qu'au dessus
              {
                   printf("X");
                   nChiffreArabe -=10;
              }
              else if(nChiffreArabe >= 9) //meme principe qu'au dessus
              {
                   printf("IX");
                   nChiffreArabe -=9;
              }
              else if(nChiffreArabe >= 5) //meme principe qu'au dessus
              {
                   printf("V");
                   nChiffreArabe -=5;
              }
              else if(nChiffreArabe >= 4) //meme principe qu'au dessus
              {
                   printf("IV");
                   nChiffreArabe -=4;
              }
              else //meme principe qu'au dessus
              {
                  printf("I");
                  nChiffreArabe -=1;
              }
    }
    printf("\n", nChiffreArabe);
}
