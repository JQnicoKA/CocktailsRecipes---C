#include "projet.h"
#include "projet.c"
#include "Creation_Base_de_C.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	system("cls");
/**
* Un do while qui sert a demander a l'utilisateur s'il veut oui ou non 
  quitter le programme a la fin de celui ci ou recommencer
* La variable quitterOuPas va contenir ce choix
*/
int quitterOuPas = 0;
do{


printf("\n\n-------------------------MENU---------------------------\n");
printf("********************************************************\n***********Bienvenue dans notre site expert !***********\n********************************************************\n\n");

/**
* Declaration de notre base de connaissances BC
* de type Base_connaissance
* et initialisation de celle ci a l aide de la fonction creation presente dans projet_test_creation_BC.c
*/
Base_connaissance BC = new_BC();
BC = creation(BC);


//Declaration de notre base de faits Base_fait de type List
List Base_fait = new_list();

/**
* Declaration de la variable int  choix qui définira le choix de l'utilisateur
* On demande la base du coktail a l utilisateur a l aide d un code 
*/
int choix;
//On cree cette variable pour verifier si l aquisition de choix s'est bien passee (si l'utilisateur a bien entré un int)
int valeurRenvoyeeParScanf;

printf("Quelle est la base de votre cocktail ? :\n");
printf("1 : Absinthe\n2 : Biere\n3 : Cognac\n4 : Gin\n5 : Rhum\n6 : Tequila\n7 : Vodka\n8 : Whisky\n9 : Pastis\n");
printf("\nSaisir le numero de votre ingredient : ");
valeurRenvoyeeParScanf = scanf("%d",& choix);

/**
* Securite, si l'utilisateur a entré autre chose qu un int, au cas ou il
  tape n'importe quoi on purge le flux jusqu-a trouver un \n (materialisation
  du enter) ou une indication de fin de lecture (EOF)
*/
while(valeurRenvoyeeParScanf !=	1 || choix <1 || choix >9){

	int c;
	do{
		c = fgetc(stdin);
	}while(c != '\n' && c != EOF);

	printf("\nErreur dans votre choix, veuillez recommencer\n");
	printf("1 : Absinthe\n2 : Biere\n3 : Cognac\n4 : Gin\n5 : Rhum\n6 : Tequila\n7 : Vodka\n8 : Whisky\n9 : Pastis\n");
	printf("\nvotre choix : ");
	valeurRenvoyeeParScanf = scanf("%d",& choix);
														  }

switch(choix){
case 1 : Base_fait = insert_queue(Base_fait, "Absinthe");
break;
case 2 : Base_fait = insert_queue(Base_fait, "Biere");
break;
case 3 : Base_fait = insert_queue(Base_fait, "Cognac");
break;
case 4 : Base_fait = insert_queue(Base_fait, "Gin");
break;
case 5 : Base_fait = insert_queue(Base_fait, "Rhum");
break;
case 6 : Base_fait = insert_queue(Base_fait, "Tequila");
break;
case 7 : Base_fait = insert_queue(Base_fait, "Vodka");
break;
case 8 : Base_fait = insert_queue(Base_fait, "Whisky");
break;
case 9 : Base_fait = insert_queue(Base_fait, "Pastis");
break;
			 }


/**
*Cette verification montre juste le bon remplissage de la base de faits, ici pas de remplissage automatique 
car le cocktail n'est toujours pas trouvé, on s"en tient aux ingredients donnés par l'utilisateur
*/
printf("Votre base de faits avant remplissage automatique :\n");
print_list(Base_fait);
 
/**
* Déclaration de la List reponseIntelligente, qui va contenir les elements
* affichés à l'ecran en fonction des choix de l utilisateur
*/
List reponseIntelligente;

//Variable qui va contenir le choix de l utilisateur de continuer ou de s arreter
int continuerOuAfficherLesCocktails;

/**
* Boucle de fonctionnement du programme
* Elle est initialement infinie, on l arrete quand le cocktail est trouvé avec break;
*/
while(1){

//reponseIntelligente recoit la liste renvoyée par intelligence
reponseIntelligente = intelligence(BC, Base_fait);

//Premier cas : Si reponseIntelligente a plus d un element c'est que le coktail n'est pas trouvé
if(reponseIntelligente->next != NULL){

printf("\nQue voulez-vous faire ?\n");
printf("1 : Continuer a rentrer des ingredients\n2 : Afficher tous les cocktails contenant mes ingredients\n");
printf("\nvotre choix : ");
valeurRenvoyeeParScanf = scanf("%d",& continuerOuAfficherLesCocktails);

while(valeurRenvoyeeParScanf !=	1 || (continuerOuAfficherLesCocktails != 1 && continuerOuAfficherLesCocktails != 2)){

	int c;
	do{
		c = fgetc(stdin);
	}while(c != '\n' && c != EOF);

printf("\nQue voulez-vous faire ?\n");
printf("1 : Continuer a rentrer des ingredients\n2 : Afficher tous les cocktails contenant mes ingredients\n");
printf("\nvotre choix : ");
valeurRenvoyeeParScanf = scanf("%d",& continuerOuAfficherLesCocktails);
														  															}

switch(continuerOuAfficherLesCocktails){
	case 1 : 
printf("Quels ingredients composent votre cocktail ? :\n");
print_list(reponseIntelligente);
printf("\nvotre choix : ");
valeurRenvoyeeParScanf = scanf("%d",& choix);

//Securite, detaillee plus haut
while(valeurRenvoyeeParScanf !=	1 || choix <1 || choix >list_length(reponseIntelligente)){

	int c;
	do{
		c = fgetc(stdin);
	}while(c != '\n' && c != EOF);

	printf("\nErreur dans votre choix, veuillez recommencer\n");
	printf("Quels ingredients composent votre cocktail ? :\n");
	print_list(reponseIntelligente);
	printf("\nvotre choix : ");
	valeurRenvoyeeParScanf = scanf("%d",& choix);
														  								  }

//Boucle for pour inserer le bon element de temp dans notre Base de faits
List temp = reponseIntelligente;
for(int i=1; i<choix; i++)
{
	temp = temp->next;
}
Base_fait = insert_queue(Base_fait, temp->lettres);

/**
*Cette verification montre juste le bon remplissage de la base de faits, ici pas de remplissage automatique 
car le cocktail n'est toujours pas trouvé, on s"en tient aux ingredients donnés par l'utilisateur
*/
printf("\nVotre base de faits avant remplissage automatique :\n");
print_list(Base_fait);
	break;

	case 2 :
	printf("Voici tous vos cocktails :\n\n");
	afficherLesCocktails(Base_fait, BC);
	exit(EXIT_FAILURE);
	break;
}

									//Deuxieme cas : Si reponseIntelligente a un seul element c'est que le coktail est trouvé
									 }else{
									 	//On insere le nom du cocktail dans la Base de faits
									 	Base_fait = insert_queue(Base_fait, reponseIntelligente->lettres);

									 	/**
										*Cette verification montre juste le bon remplissage de la base de faits, ici remplissage automatique 
										car le cocktail a été trouvé, on n'a pas besoin que l utilisateur remplisse tous les ingredients
										on les remplit nous meme car les ingredients rentrés par l utilisateur ont suffi a 
										identifier le cocktail
										*/
									 	printf("\nVotre base de faits apres remplissage automatique :\n");
										print_list(Base_fait);

										//Affichage du nom du cocktail
									 	printf("\nLe cocktail que vous recherchez est le : %s",reponseIntelligente->lettres);

									 	//On free tous les espaces memoires utilisés
									 	nettoyage(BC, Base_fait, reponseIntelligente);
									 	break;
									 }
		}


printf("\n-----Vous avez trouve votre cocktail !-----\n");
printf("\nMaintenant que voulez vous faire ? \n");
printf("1 : Quitter\n2 : Chercher un autre cocktail\n");
printf("\nvotre choix : ");

valeurRenvoyeeParScanf = scanf("%d",&quitterOuPas);

//Securite, detaillee dans le main
while(valeurRenvoyeeParScanf !=	1 || quitterOuPas != 1 && quitterOuPas != 2)
{
	int c;
	do{
		c = fgetc(stdin);
	}while(c != '\n' && c != EOF);

	printf("\nErreur dans votre choix, veuillez recommencer\n");
	printf("1 : Quitter\n2 : Chercher un autre cocktail\n");
	printf("\nvotre choix : ");
	valeurRenvoyeeParScanf = scanf("%d",&quitterOuPas);
}


	}while(quitterOuPas != 1);
}
