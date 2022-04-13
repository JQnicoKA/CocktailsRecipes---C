#include "projet.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* Retourne une nouvelle Liste
* @return Une liste vide
*/
List new_list(void)
{
	return NULL;
}

/**
* Retourne une nouvelle base de connaissance
* @return Une base de connaissance vide
*/
Base_connaissance new_BC(void)
{
	return NULL;
}

//---------------------------------------------------------------------------------------------------------------------------//

/**
* Vérifie si une List est vide
* @param li La liste à tester
* @return true si elle est vide, faux sinon
*/
Bool is_empty(List li)
{
	if(li == NULL)
		return true;

	return false;
}

/*---------------------------------------------------------------------*/

/**
* Ajoute un char en début de Liste
* @param li La liste
* @param x le char à insérer
* @return La liste avec le nouvel élement ajouté
*/
List insert_head(List li, char x[])
{
	Element *element = NULL;

	element = malloc(sizeof(*element));

	if(element == NULL)
	{
		fprintf(stderr, "Probleme all. dynamique.\n");
		exit(EXIT_FAILURE);
	}

	strcpy(element->lettres, x);

	if(is_empty(li))
		element->next = NULL;
	else
		element->next = li;

	return element;
}

//---------------------------------------------------------------------------------------------------------------------------//

/**
* Ajoute un char en fin de Liste
* @param li La liste
* @param x Le char à insérer
* @return La liste avec le nouvel élement ajouté
*/
List insert_queue(List li, char x[])
{
	Element *element = NULL;

	element = malloc(sizeof(*element));

	if(element == NULL)
	{
		fprintf(stderr, "Probleme : allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}

	strcpy(element->lettres, x);
	element->next = NULL;

	if(is_empty(li))
		return element;

	Element *temp;
	temp = li;

	while(temp->next != NULL)
		temp = temp->next;

	temp->next = element;

	return li;
}

//---------------------------------------------------------------------------------------------------------------------------//
/**
* Ajoute un mot en avant dernier de la Liste
* @param li La liste
* @param x Le char à insérer
* @return La liste avec le nouvel élement ajouté
*/
List insert_avant_queue(List li, char x[])
{  

	Element *newElem = NULL;

	newElem = malloc(sizeof(*newElem));

	if(newElem == NULL)
	{
		fprintf(stderr, "Probleme : allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}

	strcpy(newElem->lettres, x);

	Element *temp;
	temp = li;

	
	if(is_empty(li))
	{
		return newElem;
	}else if(is_empty(li->next))
	{
		li = insert_head(li, x);
	}else
	{

	while(!is_empty((temp->next)->next))
	{
		temp = temp->next;
	}

	newElem->next = temp->next;
	temp->next = newElem;
}
	return li;
	
}

//---------------------------------------------------------------------------------------------------------------------------//

/**
* Ajoute un cocktail a la base
* @param regle le cocktail a ajouter
* @param BC la base de connaissance
* @return BC 
*/
Base_connaissance insert_base(Base_connaissance BC, List regle)
{
	Full *element = NULL;

	element = malloc(sizeof(*element));

	if(element == NULL)
	{
		fprintf(stderr, "Probleme : allocation dynamique.\n");
		exit(EXIT_FAILURE);
	}

	element->regle_base = regle;
	element->next = NULL;

	if(BC == NULL)
		return element;

	Full *temp;
	temp = BC;

	while(temp->next != NULL)
		temp = temp->next;

	temp->next = element;

	return BC;
}

//---------------------------------------------------------------------------------------------------------------------------//

/**
* Affiche une Liste
* @param li La liste à afficher
*/
void print_list(List li)
{
	if(is_empty(li))
	{
		printf("Rien a afficher, Liste vide.\n");
		return;
	}
	int i=1;
	while(li != NULL)
	{
		printf("%d : [%s]\n", i,li->lettres);
		li = li->next;
		i++;
	}

	printf("\n");
}

//---------------------------------------------------------------------------------------------------------------------------//

/**
* Retourne un Boolean
* Recherche si un char est present dans une liste
* @param regle la Liste a tester
* @param ingredient le char a tester
*/
Bool est_present(List regle, char ingredient[])
{
	if(is_empty(regle))
	{
		return false;
	}
	else

	if(strcmp(regle->lettres, ingredient)==0)
	{
		return true ;
	
	}else{
		est_present(regle->next, ingredient);
	}
	
}

//---------------------------------------------------------------------------------------------------------------------------//

/**
* retourne une liste listeTemporaire
* Fonction qui gere l affichage d une reponse intelligente en fonction du choix de l utilisateur
* Si ce dernier choisit par exemple "Biere", on va lui afficher uniquement les ingredients dans les cocktails de base "Biere"
* S'il choisit "Biere" puis "Limonade", on va lui afficher uniquement les ingredients des cocktails contenant "Biere" et "Limonade"
* Ainsi de suite jusqu'a trouver le seul cocktail qui contient tous les ingredients donnés par l utilisateur
* @param BC notre base de connaissances, Base_fait notre base de faits
*/

List intelligence(Base_connaissance BC, List Base_fait)
{
	/**
	* Declaration de notre liste de sortie
	* Declaration d un pointeur sur le premier element de notre base de connaissances BC
	* Declaration d'une variable nombre_de_listes_restantes qui va controler le nombre
	 de listes qui correspondent encore a tous les ingredients (utilisée plus tard)
	*/
	List listeTemporaire = new_list();
	Full *temp;
	temp = BC;
	int nombre_de_listes_restantes;
	
								/**
								* Cette variable nombre_de_listes_restantes va compter
		 						le nombre de listes qui correspondent encore aux ingredients de 
		 						la base de faits, en utilisant la fonction combien()
		 						*/
							 	nombre_de_listes_restantes =  combien(Base_fait, BC);

							 	/**
								*Premier sous-cas ; il y a plus d'un cocktail qui contient tous
							 	les elements de la base de faits
		 						*/
							 	if(nombre_de_listes_restantes!=1){

							 	//un do while qui sert a voyager du premier au dernier element de notre base de connaissances
								do{
									//Declaration d un pointeur sur la liste associée au premier élément de notre base de connaissances
									Element *temp_regle_base = temp->regle_base;

									//Pour chacuns de ces cocktails
		 							if(correspondance_liste(Base_fait,temp_regle_base))
		 							{
		 								/**
										*En voyageant du premier a l avant dernier ingredient du cocktail
										(le dernier etant le nom du cocktail)
							 			*On inscrit l ingredient dans listeTemporaire s'il n'y est pas deja
							 			et si il n'a pas deja été rentré dans la Base de connaissances
		 								*/
		 								while(temp_regle_base->next->next !=NULL)
		 								{
		 									if(!est_present(listeTemporaire,temp_regle_base->next->lettres) && !est_present(Base_fait,temp_regle_base->next->lettres))
		 										listeTemporaire = insert_queue(listeTemporaire,temp_regle_base->next->lettres);
		 		
		 									temp_regle_base = temp_regle_base->next;
		 								}
					  
		 							}
		 
  								temp = temp->next;

  								}while(temp != NULL);			
  																/**
																*Deuxieme sous-cas ; il y a un seul cocktail qui contient tous
							 									les elements de la base de faits
		 														*/
  																}else{

  																	//Meme methodologie que ci-dessus
  																	do{
  																		Element *temp_regle_base = temp->regle_base;
  																		if(correspondance_liste(Base_fait,temp_regle_base))
  																		{
  																			while(temp_regle_base->next !=NULL)
  																			{
  																				/**
																				*On met a jour notre base de faits en lui inscrivant tous les
							 													ingredients du cocktail qui n'y sont pas deja
							 													*On donne a listeTemporaire le nom du cocktail recherché
		 																		*/
  																				if(!est_present(Base_fait, temp_regle_base->lettres))
  																				Base_fait = insert_queue(Base_fait, temp_regle_base->lettres);

  																				temp_regle_base = temp_regle_base->next;
  																			}
  																			listeTemporaire = insert_queue(listeTemporaire, temp_regle_base->lettres);
  																		}

  																		temp = temp->next;
  																	  }while(temp != NULL);	
  																	 }
								  
return listeTemporaire;
}

//---------------------------------------------------------------------------------------------------------------------------//

/**
* retourne un Boolean
* Fonction qui renvoie vraie si tous les elements de L1 sont au moins dans L2
renvoie Faux sinon
* @param L1 la liste contenant les elements en question
* @param L2 la liste dans laquelle chercher si il y a les elements de L1
*/

Bool correspondance_liste(List L1,List L2){

	//Declaration d un pointeur temporaire sur la tete de L1
	Element *temp;
	temp=L1;

	if(is_empty(temp)||is_empty(L2))
	{	
		return false;

	}
	else{ if (est_present(L2,temp->lettres)){
			
			//On parcourt la liste L1 tant que ses elements sont dans L2 ou qu elle est vide
			while(est_present(L2,temp->lettres)&& temp->next!= NULL && est_present(L2,temp->next->lettres))
			{
				temp=temp->next;
			}
			//Si on a quitté la boucle pour L1 vide, c'est que tous ses elements sont dans L2
			if(temp->next == NULL){
				
				return true;
			//Si on a quitté la boucle avant, c'est qu'un élément de L1 n'etait pas dans L2
			}else{
			
				return false;
			}
		}
	else{
		return false;
	}
}
}

//---------------------------------------------------------------------------------------------------------------------------//

/**
* retourne un int
* Fonction qui va renvoyer le nombre de listes de BC qui contiennent tous les elements
de Base_fait
* @param Base_fait notre base de faits
* @param BC notre base de connaissances
*/
int combien(List Base_fait, Base_connaissance BC)
{
	//Variable compteur
 	int nombre = 0;
 	//Declaration d un pointeur temporaire sur notre base de connaissances
 	Full *temp;
	temp = BC;
	//un do while qui sert a voyager du premier au dernier element de notre base de connaissances
	do{

		//Declaration d un pointeur sur la liste associée au premier élément de notre base de connaissances
		Element *temp_regle_base = temp->regle_base;

		//S'il y a correspondance entre les deux listes, on implemente, sinon non
		if(correspondance_liste(Base_fait, temp_regle_base))
		{
			nombre = nombre+1 ;
		}
		temp = temp->next;

	  }while (temp->next != NULL);

	  return nombre;
}

/*---------------------------------------------------------------------*/

/**
* Retourne la taille de la Liste
* @param li La liste
* @return Le nombre d'élements de la Liste
*/
int list_length(List li)
{
	int size = 0;

	if(is_empty(li))
		return size;

	while(li != NULL)
	{
		size++;
		li = li->next;
	}

	return size;
}

//---------------------------------------------------------------------------------------------------------------------------//

/**
* ne retourne rien
* Fonction qui va free toutes les listes utilisées a la fin du programme
* @param BC notre base de connaissances
* @param BF notre base de faits
* @param LT notre liste temlporaire utilisee pour afficher les ingredients 
*/
void nettoyage(Base_connaissance BC, List BF, List LT)
{
	//Declaration de pointeurs de type Full (Element de base de connaissance) Element et Element (Elements de List) 
	Full *temp;

	Element *temp1;

	Element *temp2;

	//Libération de la base de connaissances 
	while(BC != NULL){
		temp = BC->next;
		free(BC);
		BC = temp;
	}

	//Libération de la base de faits
	while(BF != NULL){
		temp1 = BF->next;
		free(BF);
		BF = temp1;
	}

	//Libération de la liste temporaire
	while(LT != NULL){
		temp2 = LT->next;
		free(LT);
		LT = temp2;
	}

}

//---------------------------------------------------------------------------------------------------------------------------//

/**
* ne retourne rien
* Fonction qui va afficher les cocktails qui contiennent les ingredients rentrés par l'utilisateur
*/
void afficherLesCocktails(List Base_fait, Base_connaissance BC)
{
 int i = 1;
	Full *temp;
	temp = BC;
	//un do while qui sert a voyager du premier au dernier element de notre base de connaissances
	do{

		//Declaration d un pointeur sur la liste associée au premier élément de notre base de connaissances
		Element *temp_regle_base = temp->regle_base;

		//S'il y a correspondance entre les deux listes, on implemente, sinon non
		if(correspondance_liste(Base_fait, temp_regle_base))
		{
			printf("Cocktail %d :\n",i);
			i++;
			print_list(temp_regle_base);
		}

		temp = temp->next;

	  }while (temp->next != NULL);
}

//---------------------------------------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------//
//-------FONCTIONS INUTILES AU BON FONCTIONNEMENT DU PROGRAMME (AFFICHAGE)---------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------//
//---------------------------------------------------------------------------------------------------------------------------//


//---------------------------------------------------------------------------------------------------------------------------//

/**
* Fonction qui va afficher l'ensemble de notre base de connaissances
*/
void afficher_base_connaissance(Base_connaissance BC)
{
	Full *temp;
	temp = BC;

	do{
		Element *temp_regle_base = temp->regle_base;
		while(temp_regle_base !=NULL)
		{
			printf("[%s]", temp_regle_base);
			temp_regle_base = temp_regle_base->next;
		}

		temp = temp->next;
	}while(temp != NULL);
}

//---------------------------------------------------------------------------------------------------------------------------//

/**
* retourne la proposition se trouvant en tête d une premisse (ingredients du cocktail)
* @param li le cocktail a analyser
*/

List head_value(List li)
{
	return li;
}	

//---------------------------------------------------------------------------------------------------------------------------//

/**
* retourne la proposition se trouvant en conclusion d une regle (nom du cocktail)
* @param li le cocktail a analyser
*/

List conclusion(List li)
{
	Element *temp;
	temp = li;

	while(temp->next != NULL)
		temp = temp->next;

	return temp;
}

//---------------------------------------------------------------------------------------------------------------------------//

/**
* Supprime un entier de la tête de la Liste
* @param li La liste
* @return La liste sans l'élément retiré
*/
List remove_head(List li)
{
	Element *element = NULL;

	element = malloc(sizeof(*element));

	if(element == NULL)
	{
		fprintf(stderr, "Probleme all. dynamique.\n");
		exit(EXIT_FAILURE);
	}

	if(is_empty(li))
		return new_list();

	element = li->next;

	free(li);
	li = NULL;

	return element;
}