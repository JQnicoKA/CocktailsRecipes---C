#include "projet.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* Cette fonction va creer toutes les listes des cocktails
* Chaque liste contient tous les ingredients du cocktail en premisse et le nom du cocktail en conclusion
* L'ensemble de ces listes vont être placées dans notre base de connaissance BC qu'on renvoie 
*/

Base_connaissance creation(Base_connaissance BC);

Base_connaissance creation(Base_connaissance BC)
{

/**
* Declaration de tous les cocktails 
* de type liste
*/

List cocktail1 = new_list();
List cocktail2 = new_list();
List cocktail3 = new_list();
List cocktail4 = new_list();
List cocktail5 = new_list();
List cocktail6 = new_list();
List cocktail7 = new_list();
List cocktail8 = new_list();
List cocktail9 = new_list();
List cocktail10 = new_list();
List cocktail11 = new_list();
List cocktail12 = new_list();
List cocktail13 = new_list();
List cocktail14 = new_list();
List cocktail15 = new_list();
List cocktail16 = new_list();
List cocktail17 = new_list();
List cocktail18 = new_list();
List cocktail19 = new_list();
List cocktail20 = new_list();
List cocktail21 = new_list();
List cocktail22 = new_list();
List cocktail23 = new_list();
List cocktail24 = new_list();
List cocktail25 = new_list();
List cocktail26 = new_list();
List cocktail27 = new_list();
List cocktail28 = new_list();
List cocktail29 = new_list();
List cocktail30 = new_list();
List cocktail31 = new_list();
List cocktail32 = new_list();
List cocktail33 = new_list();
List cocktail34 = new_list();
List cocktail35 = new_list();
List cocktail36 = new_list();
List cocktail37 = new_list();
List cocktail38 = new_list();
List cocktail39 = new_list();
List cocktail40 = new_list();
List cocktail41 = new_list();
List cocktail42 = new_list();
List cocktail43 = new_list();
List cocktail44 = new_list();
List cocktail45 = new_list();
List cocktail46 = new_list();
List cocktail47 = new_list();
List cocktail48 = new_list();
List cocktail49 = new_list();
List cocktail50 = new_list();
List cocktail51 = new_list();
List cocktail52 = new_list();
List cocktail53 = new_list();
List cocktail54 = new_list();
List cocktail55 = new_list();
List cocktail56 = new_list();
List cocktail57 = new_list();
List cocktail58 = new_list();
List cocktail59 = new_list();
List cocktail60 = new_list();
List cocktail61 = new_list();
List cocktail62 = new_list();
List cocktail63 = new_list();
List cocktail64 = new_list();
List cocktail65 = new_list();
List cocktail66 = new_list();
List cocktail67 = new_list();
List cocktail68 = new_list();
List cocktail69 = new_list();
List cocktail70 = new_list();

/**
* Initialisation de tous les cocktails
* Insertion en queue de la conclusion (le cocktail)
* Insertion avant queue des elements de la premisse (les ingredients du cocktail)
*/

//---------------------------------------------------------------------------------------------------------------------------//
//BASE ABSINTHE

cocktail1 = insert_queue(cocktail1, "Mort dans l apres-midi");
cocktail1 = insert_avant_queue(cocktail1, "Absinthe");
cocktail1 = insert_avant_queue(cocktail1, "Champagne");

cocktail2 = insert_queue(cocktail2, "Vesper vert");
cocktail2 = insert_avant_queue(cocktail2, "Absinthe");
cocktail2 = insert_avant_queue(cocktail2, "Gin");
cocktail2 = insert_avant_queue(cocktail2, "Vodka");
cocktail2 = insert_avant_queue(cocktail2, "Citron");

//---------------------------------------------------------------------------------------------------------------------------//
//BASE BIERE

cocktail3 = insert_queue(cocktail3, "Berliner weisse");
cocktail3 = insert_avant_queue(cocktail3, "Biere");
cocktail3 = insert_avant_queue(cocktail3, "Sirop");


cocktail4 = insert_queue(cocktail4, "Black and tan");
cocktail4 = insert_avant_queue(cocktail4, "Biere");
cocktail4 = insert_avant_queue(cocktail4, "Biere noire");


cocktail5 = insert_queue(cocktail5, "Black velvet");
cocktail5 = insert_avant_queue(cocktail5, "Biere");
cocktail5 = insert_avant_queue(cocktail5, "Champagne");


cocktail6 = insert_queue(cocktail6, "Demi Gambetta");
cocktail6 = insert_avant_queue(cocktail6, "Biere");
cocktail6 = insert_avant_queue(cocktail6, "Gambetta");


cocktail7 = insert_queue(cocktail7, "Langue de feu");
cocktail7 = insert_avant_queue(cocktail7, "Biere");
cocktail7 = insert_avant_queue(cocktail7, "Vodka");
cocktail7 = insert_avant_queue(cocktail7, "Tabasco");
cocktail7 = insert_avant_queue(cocktail7, "Piment");


cocktail8 = insert_queue(cocktail8, "Mazout");
cocktail8= insert_avant_queue(cocktail8, "Biere");
cocktail8 = insert_avant_queue(cocktail8, "Cola");


cocktail9 = insert_queue(cocktail9, "Michelada");
cocktail9 = insert_avant_queue(cocktail9, "Biere");
cocktail9 = insert_avant_queue(cocktail9, "Jus de citron vert");
cocktail9 = insert_avant_queue(cocktail9, "Sel");

cocktail10 = insert_queue(cocktail10, "Monaco");
cocktail10 = insert_avant_queue(cocktail10, "Biere");
cocktail10 = insert_avant_queue(cocktail10, "Limonade");
cocktail10 = insert_avant_queue(cocktail10, "Sirop de grenadine");

cocktail11 = insert_queue(cocktail11, "Panache");
cocktail11 = insert_avant_queue(cocktail11, "Biere");
cocktail11 = insert_avant_queue(cocktail11, "Limonade");
cocktail11 = insert_avant_queue(cocktail11, "Glace");

cocktail12 = insert_queue(cocktail12, "Tango");
cocktail12 = insert_avant_queue(cocktail12, "Biere");
cocktail12 = insert_avant_queue(cocktail12, "Sirop de grenadine");
cocktail12 = insert_avant_queue(cocktail12, "Glace");

cocktail13 = insert_queue(cocktail13, "Twist");
cocktail13 = insert_avant_queue(cocktail13, "Biere");
cocktail13 = insert_avant_queue(cocktail13, "Sirop de citron jaune");

cocktail14 = insert_queue(cocktail14, "Valse");
cocktail14 = insert_avant_queue(cocktail14,"Biere");
cocktail14 = insert_avant_queue(cocktail14, "Sirop de menthe");

cocktail15 = insert_queue(cocktail15, "Yorsh");
cocktail15 = insert_avant_queue(cocktail15,"Biere");
cocktail15 = insert_avant_queue(cocktail15, "Vodka");
cocktail15 = insert_avant_queue(cocktail15, "Tranche de citron");

cocktail16 = insert_queue(cocktail16, "Zythogala");
cocktail16 = insert_avant_queue(cocktail16,"Biere");
cocktail16 = insert_avant_queue(cocktail16, "Lait");

cocktail17 = insert_queue(cocktail17, "Sinalbinche");
cocktail17 = insert_avant_queue(cocktail17,"Biere");
cocktail17 = insert_avant_queue(cocktail17, "Sinalco");

cocktail18 = insert_queue(cocktail18, "Panpeche");
cocktail18 = insert_avant_queue(cocktail18,"Biere");
cocktail18 = insert_avant_queue(cocktail18,"Sirop de Peche");
cocktail18 = insert_avant_queue(cocktail18,"Limonade");

cocktail19 = insert_queue(cocktail19, "La Simone");
cocktail19 = insert_avant_queue(cocktail19,"Biere");
cocktail19 = insert_avant_queue(cocktail19,"Picon");
cocktail19 = insert_avant_queue(cocktail19,"Limonade");

//---------------------------------------------------------------------------------------------------------------------------//
//Base Cognac

cocktail20 = insert_queue(cocktail20, "Alexander");
cocktail20 = insert_avant_queue(cocktail20,"Cognac");
cocktail20 = insert_avant_queue(cocktail20, "Creme de cacao");
cocktail20 = insert_avant_queue(cocktail20, "Creme liquide");

cocktail21 = insert_queue(cocktail21, "French Connection");
cocktail21 = insert_avant_queue(cocktail21,"Cognac");
cocktail21 = insert_avant_queue(cocktail21, "Amaretto");

cocktail22 = insert_queue(cocktail22, "Last call");
cocktail22 = insert_avant_queue(cocktail22,"Cognac");
cocktail22 = insert_avant_queue(cocktail22, "Porto");

cocktail23 = insert_queue(cocktail23, "Pink love");
cocktail23 = insert_avant_queue(cocktail23,"Cognac");
cocktail23 = insert_avant_queue(cocktail23, "Liqueur de framboise");
cocktail23 = insert_avant_queue(cocktail23, "Champagne");


cocktail24 = insert_queue(cocktail24, "Side car");
cocktail24 = insert_avant_queue(cocktail24,"Cognac");
cocktail24 = insert_avant_queue(cocktail24, "Cointreau");
cocktail24 = insert_avant_queue(cocktail24, "Jus de citron");

cocktail25 = insert_queue(cocktail25, "Summit");
cocktail25 = insert_avant_queue(cocktail25,"Cognac");
cocktail25 = insert_avant_queue(cocktail25, "Gingembre");
cocktail25 = insert_avant_queue(cocktail25, "Citron vert");
cocktail25 = insert_avant_queue(cocktail25, "Concombre");

cocktail26 = insert_queue(cocktail26, "Sol y Sombra");
cocktail26 = insert_avant_queue(cocktail26,"Cognac");
cocktail26 = insert_avant_queue(cocktail26, "Anis");

cocktail27 = insert_queue(cocktail27, "Bandista");
cocktail27 = insert_avant_queue(cocktail27,"Cognac");
cocktail27 = insert_avant_queue(cocktail27, "Sirop de citron");
cocktail27 = insert_avant_queue(cocktail27, "Limonade");


cocktail28 = insert_queue(cocktail28, "Stinger");
cocktail28 = insert_avant_queue(cocktail28,"Cognac");
cocktail28 = insert_avant_queue(cocktail28, "Porto");

//---------------------------------------------------------------------------------------------------------------------------//
//GIN

cocktail29 = insert_queue(cocktail29, "Gin fizz");
cocktail29 = insert_avant_queue(cocktail29,"Gin");
cocktail29 = insert_avant_queue(cocktail29,"Sirop de sucre");
cocktail29 = insert_avant_queue(cocktail29,"Jus de citron");

cocktail30 = insert_queue(cocktail30, "White Lady");
cocktail30 = insert_avant_queue(cocktail30,"Gin");
cocktail30 = insert_avant_queue(cocktail30, "Jus de citron");

cocktail31 = insert_queue(cocktail31, "TGV");
cocktail31 = insert_avant_queue(cocktail31,"Gin");
cocktail31 = insert_avant_queue(cocktail31, "Tequila");
cocktail31 = insert_avant_queue(cocktail31, "Vodka");

cocktail32 = insert_queue(cocktail32, "Gin Tonic");
cocktail32 = insert_avant_queue(cocktail32,"Gin");
cocktail32 = insert_avant_queue(cocktail32, "Eau tonic");

cocktail33 = insert_queue(cocktail33, "Gin Pelletan");
cocktail33 = insert_avant_queue(cocktail33,"Gin");
cocktail33 = insert_avant_queue(cocktail33, "The");

//---------------------------------------------------------------------------------------------------------------------------//
//Rhum

cocktail34 = insert_queue(cocktail34, "Bacardi");
cocktail34 = insert_avant_queue(cocktail34,"Rhum");
cocktail34 = insert_avant_queue(cocktail34, "Jus de citron");
cocktail34 = insert_avant_queue(cocktail34, "Grenadine");


cocktail35 = insert_queue(cocktail35, "Cuba Libre");
cocktail35 = insert_avant_queue(cocktail35,"Rhum");
cocktail35 = insert_avant_queue(cocktail35, "Cola");


cocktail36 = insert_queue(cocktail36, "Mojito");
cocktail36 = insert_avant_queue(cocktail36,"Rhum");
cocktail36 = insert_avant_queue(cocktail36, "Citron vert");
cocktail36 = insert_avant_queue(cocktail36, "Soda");

cocktail37 = insert_queue(cocktail37, "Grog");
cocktail37 = insert_avant_queue(cocktail37,"Rhum");
cocktail37 = insert_avant_queue(cocktail37, "Sucre");
cocktail37 = insert_avant_queue(cocktail37, "Eau chaude");
cocktail37 = insert_avant_queue(cocktail37, "Citron");

cocktail38 = insert_queue(cocktail38, "Blue Hawaii");
cocktail38 = insert_avant_queue(cocktail38,"Rhum");
cocktail38 = insert_avant_queue(cocktail38, "Noix de coco");
cocktail38 = insert_avant_queue(cocktail38, "Jus d'ananas");
cocktail38 = insert_avant_queue(cocktail38, "Curacao bleu");

cocktail39 = insert_queue(cocktail39, "Ti punch");
cocktail39 = insert_avant_queue(cocktail39,"Rhum");
cocktail39 = insert_avant_queue(cocktail39, "Citron vert");
cocktail39 = insert_avant_queue(cocktail39, "Sucre");

cocktail40 = insert_queue(cocktail40, "Pina Colada");
cocktail40 = insert_avant_queue(cocktail40,"Rhum");
cocktail40 = insert_avant_queue(cocktail40, "Jus d'ananas");
cocktail40 = insert_avant_queue(cocktail40, "Noix de coco");
cocktail40 = insert_avant_queue(cocktail40, "Citron vert");
 
//---------------------------------------------------------------------------------------------------------------------------//
//Tequila 

cocktail41 = insert_queue(cocktail41, "Sunrise");
cocktail41 = insert_avant_queue(cocktail41,"Tequila");
cocktail41 = insert_avant_queue(cocktail41, "Grenadine");
cocktail41 = insert_avant_queue(cocktail41, "Jus d'orange");

cocktail42 = insert_queue(cocktail42,"Margarita");
cocktail42 = insert_avant_queue(cocktail42,"Tequila");
cocktail42 = insert_avant_queue(cocktail42,"Cointreau");
cocktail42 = insert_avant_queue(cocktail42,"Jus de citron");
 
//---------------------------------------------------------------------------------------------------------------------------//
//Vodka

cocktail43 = insert_queue(cocktail43, "Bloody Mary");
cocktail43 = insert_avant_queue(cocktail43,"Vodka");
cocktail43 = insert_avant_queue(cocktail43, "Jus de tomate");

cocktail44 = insert_queue(cocktail44, "Russe Blanc");
cocktail44 = insert_avant_queue(cocktail44,"Vodka");
cocktail44 = insert_avant_queue(cocktail44, "Liqueur de cafe");
cocktail44 = insert_avant_queue(cocktail44, "Lait");

cocktail45 = insert_queue(cocktail45, "Screwdriver");
cocktail45 = insert_avant_queue(cocktail45,"Vodka");
cocktail45 = insert_avant_queue(cocktail45, "Jus d'orange");

cocktail46 = insert_queue(cocktail46, "Sex on the beach");
cocktail46 = insert_avant_queue(cocktail46,"Vodka");
cocktail46 = insert_avant_queue(cocktail46, "Jus d'ananas");
cocktail46 = insert_avant_queue(cocktail46, "Sirop de peche");
cocktail46 = insert_avant_queue(cocktail46, "Jus de Canneberge");

cocktail47 = insert_queue(cocktail47, "Cosmopolitan");
cocktail47 = insert_avant_queue(cocktail47,"Vodka");
cocktail47 = insert_avant_queue(cocktail47, "Liqueur d'orange");
cocktail47 = insert_avant_queue(cocktail47, "Jus de Canneberge");

//---------------------------------------------------------------------------------------------------------------------------//
//Whisky

cocktail48 = insert_queue(cocktail48, "Manhattan");
cocktail48 = insert_avant_queue(cocktail48,"Whisky");
cocktail48 = insert_avant_queue(cocktail48, "Vermouth rouge");
cocktail48 = insert_avant_queue(cocktail48, "Amer");

cocktail49 = insert_queue(cocktail49, "Whisky-Coca");
cocktail49 = insert_avant_queue(cocktail49,"Whisky");
cocktail49 = insert_avant_queue(cocktail49, "Cola");

cocktail50 = insert_queue(cocktail50, "Mint Julep");
cocktail50 = insert_avant_queue(cocktail50,"Whisky");
cocktail50 = insert_avant_queue(cocktail50, "Menthe");
cocktail50 = insert_avant_queue(cocktail50, "Sucre");
cocktail50 = insert_avant_queue(cocktail50, "Eau");

cocktail51 = insert_queue(cocktail51, "Old Fashioned");
cocktail51 = insert_avant_queue(cocktail51,"Whisky");
cocktail51 = insert_avant_queue(cocktail51, "Amer");
cocktail51 = insert_avant_queue(cocktail51, "Sucre");

cocktail52 = insert_queue(cocktail52, "Whisky Sour");
cocktail52 = insert_avant_queue(cocktail52,"Whisky");
cocktail52 = insert_avant_queue(cocktail52, "Blanc d oeuf");
cocktail52 = insert_avant_queue(cocktail52, "Jus de citron");
cocktail52 = insert_avant_queue(cocktail52, "Sucre");

//---------------------------------------------------------------------------------------------------------------------------//
//Pastis

cocktail53 = insert_queue(cocktail53, "Tronconneuse");
cocktail53 = insert_avant_queue(cocktail53,"Pastis");
cocktail53 = insert_avant_queue(cocktail53, "Biere");

cocktail54 = insert_queue(cocktail54, "Tomate");
cocktail54 = insert_avant_queue(cocktail54,"Pastis");
cocktail54 = insert_avant_queue(cocktail54,"Eau");
cocktail54 = insert_avant_queue(cocktail54, "Sirop de Grenadine");
cocktail54 = insert_avant_queue(cocktail54,"Glace");

cocktail55 = insert_queue(cocktail55, "Rourou");
cocktail55 = insert_avant_queue(cocktail55,"Pastis");
cocktail55 = insert_avant_queue(cocktail55,"Eau");
cocktail55 = insert_avant_queue(cocktail55, "Sirop de Fraise");
cocktail55 = insert_avant_queue(cocktail55,"Glace");

cocktail56 = insert_queue(cocktail56, "Lama Hurlant");
cocktail56 = insert_avant_queue(cocktail56,"Pastis");
cocktail56 = insert_avant_queue(cocktail56,"Tabasco");
cocktail56 = insert_avant_queue(cocktail56, "Limoncello");
cocktail56 = insert_avant_queue(cocktail56,"Glace");

cocktail57 = insert_queue(cocktail57, "Mauresque");
cocktail57 = insert_avant_queue(cocktail57,"Pastis");
cocktail57 = insert_avant_queue(cocktail57,"Eau");
cocktail57 = insert_avant_queue(cocktail57, "Sirop d'orgeat");
cocktail57 = insert_avant_queue(cocktail57,"Glace");

cocktail58 = insert_queue(cocktail58, "Petrole");
cocktail58 = insert_avant_queue(cocktail58,"Pastis");
cocktail58 = insert_avant_queue(cocktail58,"Cola");
cocktail58 = insert_avant_queue(cocktail58,"Glace");

cocktail59 = insert_queue(cocktail59, "Kepi Blanc");
cocktail59 = insert_avant_queue(cocktail59,"Pastis");
cocktail59 = insert_avant_queue(cocktail59,"Lait");

cocktail60 = insert_queue(cocktail60, "Provencal");
cocktail60 = insert_avant_queue(cocktail60,"Pastis");
cocktail60 = insert_avant_queue(cocktail60,"Huile d olive");

cocktail61 = insert_queue(cocktail61, "Drakkard");
cocktail61 = insert_avant_queue(cocktail61,"Pastis");
cocktail61 = insert_avant_queue(cocktail61,"Raki");
cocktail61 = insert_avant_queue(cocktail61, "Eau");
cocktail61 = insert_avant_queue(cocktail61,"Glace");

cocktail62 = insert_queue(cocktail62, "Junifen");
cocktail62 = insert_avant_queue(cocktail62,"Pastis");
cocktail62 = insert_avant_queue(cocktail62,"Cointreau");
cocktail62 = insert_avant_queue(cocktail62,"Tranche d orange");
cocktail62 = insert_avant_queue(cocktail62, "Eau");
cocktail62 = insert_avant_queue(cocktail62,"Glace");

cocktail63 = insert_queue(cocktail63, "Flocon des neiges");
cocktail63 = insert_avant_queue(cocktail63,"Pastis");
cocktail63 = insert_avant_queue(cocktail63,"Creme de coco");
cocktail63 = insert_avant_queue(cocktail63,"Jus de citron vert");
cocktail63 = insert_avant_queue(cocktail63, "Menthe fraiche");
cocktail63 = insert_avant_queue(cocktail63,"Ginger");

cocktail64 = insert_queue(cocktail64, "Perroquet");
cocktail64 = insert_avant_queue(cocktail64,"Pastis");
cocktail64 = insert_avant_queue(cocktail64,"Sirop de menthe");
cocktail64 = insert_avant_queue(cocktail64,"Sirop de grenadine");
cocktail64 = insert_avant_queue(cocktail64, "Glace");

cocktail65 = insert_queue(cocktail65, "Feuille morte");
cocktail65 = insert_avant_queue(cocktail65,"Pastis");
cocktail65 = insert_avant_queue(cocktail65,"Sirop de menthe");
cocktail65 = insert_avant_queue(cocktail65,"Eau");
cocktail65 = insert_avant_queue(cocktail65, "Sirop de grenadine");
cocktail65 = insert_avant_queue(cocktail65,"Glace");

cocktail66 = insert_queue(cocktail66, "Pezoute");
cocktail66 = insert_avant_queue(cocktail66,"Pastis");
cocktail66 = insert_avant_queue(cocktail66,"Sirop de menthe");
cocktail66 = insert_avant_queue(cocktail66,"Cola");
cocktail66 = insert_avant_queue(cocktail66,"Glace");

cocktail67 = insert_queue(cocktail67, "Petouze");
cocktail67 = insert_avant_queue(cocktail67,"Pastis");
cocktail67 = insert_avant_queue(cocktail67,"Creme de menthe");
cocktail67 = insert_avant_queue(cocktail67,"Cola");
cocktail67 = insert_avant_queue(cocktail67,"Sucre glace");

cocktail68 = insert_queue(cocktail68, "Diesel");
cocktail68 = insert_avant_queue(cocktail68,"Pastis");
cocktail68 = insert_avant_queue(cocktail68,"Vin Blanc");

cocktail69 = insert_queue(cocktail69, "Rocard");
cocktail69 = insert_avant_queue(cocktail69,"Pastis");
cocktail69 = insert_avant_queue(cocktail69,"Vin rose");

cocktail70 = insert_queue(cocktail70, "Noir de crimee");
cocktail70 = insert_avant_queue(cocktail70,"Pastis");
cocktail70 = insert_avant_queue(cocktail70,"Vin rouge");



//---------------------------------------------------------------------------------------------------------------------------//
/**
* Ainsi tous les cocktails de 1 a 80 sont déclarés et initialisés
* On peut maintenant les mettre dans notre base de connaissance
*/

BC = insert_base(BC, cocktail1);
BC = insert_base(BC, cocktail2);
BC = insert_base(BC, cocktail3);
BC = insert_base(BC, cocktail4);
BC = insert_base(BC, cocktail5);
BC = insert_base(BC, cocktail6);
BC = insert_base(BC, cocktail7);
BC = insert_base(BC, cocktail8);
BC = insert_base(BC, cocktail9);
BC = insert_base(BC, cocktail10);
BC = insert_base(BC, cocktail11);
BC = insert_base(BC, cocktail12);
BC = insert_base(BC, cocktail13);
BC = insert_base(BC, cocktail14);
BC = insert_base(BC, cocktail15);
BC = insert_base(BC, cocktail16);
BC = insert_base(BC, cocktail17);
BC = insert_base(BC, cocktail18);
BC = insert_base(BC, cocktail19);
BC = insert_base(BC, cocktail20);
BC = insert_base(BC, cocktail21);
BC = insert_base(BC, cocktail22);
BC = insert_base(BC, cocktail23);
BC = insert_base(BC, cocktail24);
BC = insert_base(BC, cocktail25);
BC = insert_base(BC, cocktail26);
BC = insert_base(BC, cocktail27);
BC = insert_base(BC, cocktail28);
BC = insert_base(BC, cocktail29);
BC = insert_base(BC, cocktail30);
BC = insert_base(BC, cocktail31);
BC = insert_base(BC, cocktail32);
BC = insert_base(BC, cocktail33);
BC = insert_base(BC, cocktail34);
BC = insert_base(BC, cocktail35);
BC = insert_base(BC, cocktail36);
BC = insert_base(BC, cocktail37);
BC = insert_base(BC, cocktail38);
BC = insert_base(BC, cocktail39);
BC = insert_base(BC, cocktail40);
BC = insert_base(BC, cocktail41);
BC = insert_base(BC, cocktail42);
BC = insert_base(BC, cocktail43);
BC = insert_base(BC, cocktail44);
BC = insert_base(BC, cocktail45);
BC = insert_base(BC, cocktail46);
BC = insert_base(BC, cocktail47);
BC = insert_base(BC, cocktail48);
BC = insert_base(BC, cocktail49);
BC = insert_base(BC, cocktail50);
BC = insert_base(BC, cocktail51);
BC = insert_base(BC, cocktail52);
BC = insert_base(BC, cocktail53);
BC = insert_base(BC, cocktail54);
BC = insert_base(BC, cocktail55);
BC = insert_base(BC, cocktail56);
BC = insert_base(BC, cocktail57);
BC = insert_base(BC, cocktail58);
BC = insert_base(BC, cocktail59);
BC = insert_base(BC, cocktail60);
BC = insert_base(BC, cocktail61);
BC = insert_base(BC, cocktail62);
BC = insert_base(BC, cocktail63);
BC = insert_base(BC, cocktail64);
BC = insert_base(BC, cocktail65);
BC = insert_base(BC, cocktail66);
BC = insert_base(BC, cocktail67);
BC = insert_base(BC, cocktail68);
BC = insert_base(BC, cocktail69);
BC = insert_base(BC, cocktail70);

return BC;

}