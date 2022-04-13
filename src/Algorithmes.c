//-------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------//

/* Définition d'une Liste */
typedef struct elem
{
	char lettres;
	struct elem *next;
}Element;

typedef Element *List

/* Définition d'une base de connaissances regroupant toutes les listes */
typedef struct full
{
	List regle_base;
	struct full *next;
}Full;

typedef Full *Base_connaissance

//-------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------//

Tester si la prémisse d’une règle est vide

Fonction est_vide(L : Liste) : BOOL
Début
	Si (L = INDEFINI) Alors
		est_vide() <- Vrai
	Sinon
		est_vide() <- Faux
	Finsi
Fin

//-------------------------------------------------------------------------------------//

Insere un element en tete de liste

Fonction Inserer_tete(L : Liste, C : chaine de caracteres) : Liste
Début
	Element : newElem <- creerElement()
	lettres(newElem) <- C

	Si est_vide(L) Alors
		newElem->next <- INDEFINI
	Sinon
		newElem->next <- L
	Fin Si

	Inserer_tete() <- newElem
Fin

//-------------------------------------------------------------------------------------//

Créer la conclusion d une règle

Fonction Inserer_queue(L : Liste, C : chaine de caracteres) : Liste
Début
	Element : newElem <- creerElement()
	lettres(newElem) <- C
	newElem->next <- INDEFINI

	Si est_vide(L) Alors
		Inserer_queue() <- newElem
	Sinon
		Element : Temp <- L
		Tant que non est_vide(Temp->next) Faire
			Temp -> next
		Fait
		Temp->next <- newElem	 
	Fin Si 			
																						h
	Inserer_queue() <- L
Fin

//-------------------------------------------------------------------------------------//

Ajouter une proposition à la prémisse d une regle

Fonction Insérer_avant_queue (L : Liste, C : chaine de caracteres) : Liste
Début
	Element : newElem = creerElement()
	lettres(newElem) <- C
 	newElem->next <- INDEFINI
 	Element : Temp <- L

	Si est_vide(L) Alors
		Insérer_avant_queue() <- newElem
	Sinon Si est_vide(Temp->next) Alors
		L <- Inserer_tete(L,C)
	Sinon
		Tant que non est_vide(Temp->next->next) Faire
				Temp -> next
		Fait

		NewElem->next <- Temp->next
		Temp->next <- newElem
	Fin Si

	Insérer_avant_queue() <- L
Fin

//-------------------------------------------------------------------------------------//

Insere un element en fin de Liste dans la base

Fonction Inserer_base (BC : Base de connaissances, regle : Liste) : Base de connaissances
Début
	Full : newElem <- creerElement()
	regle_base(newElem) <- regle
	newElem->next <- INDEFINI

	Si est_vide(BC) Alors
		Inserer_base() <- newElem
	Sinon
		Full : Temp <- BC
		Tant que non est_vide(Temp->next)  Faire
			Temp -> next
		Fait
		Temp->next <- newElem	 
	Fin Si 	
																								h
	Inserer_base() <- BC
Fin

//-------------------------------------------------------------------------------------//

Affiche une liste

Fonction afficher_liste(L : Liste) : Affichage
Début
	Si est_vide(L) Alors
		Afficher "Rien a afficher, liste vide"
	Sinon
		Tant que non est_vide(L) Faire
			Afficher lettres(L)
			L -> next
		Fait
	Fin Si
Fin

//-------------------------------------------------------------------------------------//

Tester si une proposition appartient à la prémisse d’une règle, de manière récursive

Fonction est_present(L : Liste, C : chaine de caracteres) : BOOL
Début
	Si est_vide(L) Alors
		est_present() <- Faux
	Sinon
		Si  lettres(L) = C Alors
			est_present() <- Vrai
		Sinon
			est_present() <- est_present(L->next, C)
		Finsi
	Finsi
Fin

//-------------------------------------------------------------------------------------//

Fonction qui affiche une reponse intelligente en fonction des choix d ingredients

Fonction intelligence(BC : Base de connaissances, Base_fait : Liste) : Liste
Début
	Liste : listeTemporaire <- nouvelleListe()
	Full : Temp <- BC
	Entier : nombre_de_listes_restantes

	nombre_de_listes_restantes = combien(Base_fait, BC)

	Si nombre_de_listes_restantes != 1 Alors
		Faire
			Element : TempRegleBase <- regle_base(Temp)
			Si correspondance_liste(Base_fait, TempRegleBase) Alors
				Tant que non est_vide(TempRegleBase->next->next) Faire
					Si non est_present(listeTemporaire, lettres(TempRegleBase->next)) ET non est_present(Base_fait, lettres(TempRegleBase->next)) Alors
						listeTemporaire = Inserer_queue(listeTemporaire, lettres(TempRegleBase->next))
					Fin Si
					TempRegleBase -> next
				Fait
			Fin Si
			Temp -> next
		Tant que non est_vide(Temp) 

	Sinon
		Faire
			Element : TempRegleBase <- Temp->regle_base
			Si correspondance_liste(Base_fait, TempRegleBase) Alors
				Tant que non est_vide(TempRegleBase->next) Faire
					Si non est_present(Base_fait, lettres(TempRegleBase)) Alors
						Base_fait = Inserer_queue(Base_fait, lettres(TempRegleBase))
					Fin Si
					TempRegleBase -> next
				Fait
				listeTemporaire = Inserer_queue(listeTemporaire, lettres(TempRegleBase))
			Fin Si
			Temp -> next
		Tant que non est_vide(Temp)
	Fin Si

	intelligence() <- listeTemporaire
Fin

//-------------------------------------------------------------------------------------//

Fonction qui renvoie vrai si tous les elements de L1 sont au moins dans L2, faux sinon

Fonction correspondance_liste(L1 : Liste, L2 : Liste) : BOOL
Début
	Element : Temp <- L1
	Si (est_vide(Temp) OU est_vide(L2)) Alors
		correspondance_liste() <- Faux
	Sinon
		Si est_present(L2, lettres(Temp)) Alors
			Tant que est_present(L2, lettres(Temp)) ET non est_vide Temp->next ET est_present(L2, lettres(Temp->next)) Faire
				Temp -> next
			Fait
			Si est_vide(Temp->next) Alors
				correspondance_liste() <- Vrai
			Sinon
				correspondance_liste() <- Faux
			Fin Si
		Sinon
			correspondance_liste() <- Faux
		Fin Si
	Fin Si
Fin

//-------------------------------------------------------------------------------------//

Fonction qui renvoie le nombre de listes de BC qui contiennent tous les elements de Base_fait

Fonction combien(Base_fait : Liste, BC : Base de connaissances) : Entier
Début
	Entier : nombre <- 0
	Full : Temp <- BC
	Faire
		Element : TempRegleBase <- regle_base(Temp)
		Si correspondance_liste(Base_fait, TempRegleBase) Alors
			nombre +1
		Fin Si
		Temp -> next
	Tant que non est_vide(Temp->next)

	combien() <- nombre
Fin

//-------------------------------------------------------------------------------------//

Fonction qui renvoie la taille de la liste

Fonction taille_liste(L : Liste) : Entier
Début
	Entier : taille <- 0
	Si est_vide(L) Alors
		taille_liste() <- taille
	Fin Si

	Tant que non est_vide(L) Faire
		taille +1
		L -> next
	Fait
	taille_liste() <- taille
Fin

//-------------------------------------------------------------------------------------//

Fonction de nettoyage de tout ce qu on a utilisé en fin de programme

Fonction nettoyage(BC : Base de connaissances, BF : Liste, LT : Liste) : void
Début
	Full : Temp <- creerFull()
	Element : Temp1 <- creerElement()
	Element : Temp2 <- creerElement()

	Tant que non est_vide(BC) Faire
		Temp <- BC->next
		liberer(BC)
		BC<- Temp
	Fait
	Tant que non est_vide(BF) Faire
		Temp1 <- BF->next
		liberer(BF)
		BF<- Temp1
	Fait
	Tant que non est_vide(LT) Faire
		Temp2 <- LT->next
		liberer(LT)
		LT<- Temp2
	Fait
Fin

//-------------------------------------------------------------------------------------//

Fonction qui affiche les cocktails qui contiennent les ingredients entrés dans la base de faits

Fonction afficherLesCocktails(Base_fait : Liste, BC : Base de connaissances) : Affichage
Début
	Entier : i <- 1
	Full : Temp <- BC

	Faire
		Element : TempRegleBase <- regle_base(Temp)
		Si correspondance_liste(Base_fait, TempRegleBase) Alors
			Afficher "Cocktail"i
			i +1
			afficher_liste(TempRegleBase)
		Fin Si
		Temp->next
	Tant que non est_vide(Temp->next)
Fin

//-------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------//
//-------------------------------------------------------------------------------------//

Fonction qui affiche l ensemble de notre base de connaissances

Fonction afficherBaseConnaissances(BC : Base de connaissances) : Affichage
Début
	Full : Temp <- BC
	Faire
		Element : TempRegleBase <- regle_base(Temp)
		Tant que non est_vide(TempRegleBase) Faire
			Afficher TempRegleBase
			TempRegleBase->next
		Fait
		Temp -> next
	Tant que non est_vide(Temp)
Fin

//-------------------------------------------------------------------------------------//

Accéder à la proposition se trouvant en tête d’une prémisse

Fonction valeurTete(L : Liste) : Liste
Début
	valeurTete() <- L
Fin

//-------------------------------------------------------------------------------------//

Accéder à la conclusion d’une règle

Fonction Conclusion(L : Liste) : Liste
Début
	Temp=L
	Tant que non est_vide(Temp->next) Faire
		Temp -> next
		Conclusion() <- Temp
	Fait
Fin

//-------------------------------------------------------------------------------------//

Fonction qui supprime la tete de liste

Fonction enleverTete(L : Liste) : Liste
Début
	Element : Elem <- creerElement()

	Si est_vide(L) Alors
		enleverTete() <- Elem
	Sinon
		Elem <- L->next
		liberer(L)
		L <- INDEFINI
		enleverTete() <- Elem
	Fin Si
Fin