#ifndef __LISTE_H__
#define __LISTE_H__

#include <stdlib.h>
#include <stdio.h>

/* Définition d'un Booléen */
typedef enum
{
	false,
	true
}Bool;

/* Définition d'une Liste */
typedef struct elem
{
 char lettres[256];
 struct elem *next;

}Element;

typedef Element *List;

/* Définition d'une base de connaissances regroupant toutes les listes */
typedef struct full
{
	List regle_base;
	struct full *next;
}Full;

typedef Full *Base_connaissance;


/* Prototypes des fonctions du programme */
List new_list(void);
Base_connaissance new_BC(void);
Bool is_empty(List li);

List insert_head(List li, char x[]);
List insert_queue(List li, char x[]);
List insert_avant_queue(List li, char x[]);
Base_connaissance insert_base(Base_connaissance BC, List regle);

void print_list(List li);

Bool est_present(List premisse, char ingredient[]);

List intelligence(Base_connaissance BC, List Base_fait);
Bool correspondance_liste(List L1,List L2);
int combien(List Base_fait, Base_connaissance BC);
int list_length(List li);
void nettoyage(Base_connaissance BC, List BF, List LT);
void afficherLesCocktails(List Base_fait, Base_connaissance BC);

/* Prototypes des fonctions inutiles au bon fonctionnement du programme */
void afficher_base_connaissance(Base_connaissance BC);
List head_value(List li);
List conclusion(List li);
List remove_head(List li);

/* Prototypes de la fonction de creation */
Base_connaissance creation(Base_connaissance BC);

#endif