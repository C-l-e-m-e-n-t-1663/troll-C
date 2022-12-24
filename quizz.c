#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 
#include <stdbool.h>

// Voici un programme que j'ai fait en C, pour m'entrainer !

int main(void)

{
// Bon voilà on acceuille comme il se doit !

printf("Bienvenue sur quiz de Sendax, (oui encore et alors ?)\n");
sleep(2);
system("clear");

char ready;

printf("Tu veux vraiment passer ce quiz ou pas ? O/n -> \t");
scanf("%c", &ready);

if(ready == 'o' || ready == 'O')
{
printf("Très bon choix, commençons...\n");
}

else if(ready == 'n' || ready == 'N')
{
printf("Quelle indignité...!\n");
system("firefox https://youtu.be/dQw4w9WgXcQ");
sleep(1);
system("clear");
return 0;
}

int nombre1;
printf("Bref ! Première question : À quel nombre je pense ?\n\t Réponse A : 69 \n\t Réponse B : 1939\n\t Réponse C : 1945\n");
scanf("%d", &nombre1);

if(nombre1 == 1939)
{
printf("C'est que tu es doué pour un début, bravo !\n");
}

else if(nombre1 != 1939)
{
printf("Désolé, tu as perdu. Retour à la case départ.\n");
sleep(2);
system("clear");
return 0;
}

int a;
while(a != 5)
{
printf("marque 5 stp sinon c'est une boucle (oui je voulais tester !\n>>> ");
scanf("%d", &a);
}
if(a != 5)
{
printf("Bon t'as voulu jouer avec le feu toi ! Je vais aller te signaler à interpol !");
}
else if(a == 5)
{
printf("Joli esclave, ça me rappelle mes ancêtres, merci !\n");
}

int x;
int y;




printf("Bon là je m'emporte un peu, je décide faire une mmicro-calculatrice \nen plein quiz (enfin si s'en est réellement un xD\n");
sleep(4);
system("clear");

printf("\nMets le premier nombre fdp :    ");
scanf("%d", &x);

printf("\nBon maintenant le deuxième nombre enculé :    ");
scanf("%d", &y);

printf("Merci, bon maintenant je calcule t'attends (j'imite la lenteur de python...)\n");
sleep(2);
printf("\t%d + %d = %d\n", x, y, x + y); 
printf("\t%d - %d = %d\n", x, y, x + y);
printf("\t%d * %d = %d\n", x, y, x *y);
printf("\t%d / %d = %.3f\n", x, y, x / (double)y);



return 0;
}
