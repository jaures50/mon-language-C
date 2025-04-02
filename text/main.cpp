#include <iostream>

using namespace std;

int main()
{
  printf(" je suis popop\n");
  scanf(" Le nombre dde votre choix");
  printf(" Merci à vous ");



  nom EST_DU_TYPE CHAINE
  prenom EST_DU_TYPE CHAINE
  mail EST_DU_TYPE CHAINE
  motdepasse1 EST_DU_TYPE CHAINE
  motdepasse2 EST_DU_TYPE CHAINE
  nbr EST_DU_TYPE NOMBRE
  autorisebnr1 EST_DU_TYPE NOMBRE
  autorisebnr2 EST_DU_TYPE NOMBRE
  evenement1 EST_DU_TYPE CHAINE
  evnement2 EST_DU_TYPE CHAINE
DEBUT_ALGORITHME
  AFFICHER* "Veuillez remplir les champs"
  AFFICHER* "Entrer votre nom"
  LIRE nom
  AFFICHER* "Votre prenom"
  LIRE prenom
  AFFICHER* "Votre mail"
  LIRE mail
  AFFICHER* "Votre mot de passe"
  LIRE motdepasse1
  AFFICHER* "Cofirmer le mot de passe"
  LIRE motdepasse2
  SI (motdepasse1==motdepasse2) ALORS
    DEBUT_SI
    AFFICHER* "Status"
    //Affichage des Status
    AFFICHER* "1. Utilisateur"
    AFFICHER* "2. Promoteur"
    AFFICHER* "3. Financeur"
    //Choix de status par un utilisateur
    AFFICHER* "Choisir par le numéro"
    LIRE nbr

    SI (nbr==1) ALORS
      DEBUT_SI
      AFFICHER* "Vous êtes un utilisateur"
      AFFICHER* "Veuillez choisir vos évènements et suivre  les procédures pour payer les billets et aussi les réservations "
      FIN_SI
    SI (nbr==2) ALORS
      DEBUT_SI
      //Autaurisation de l'Admin
      AFFICHER* "Choix par l'Admin"
      AFFICHER* "1. Oui              2. Non    "
      //L'Admin choisir entre  "Oui et Non"
      LIRE autorisebnr1
      SI (autorisebnr1==1) ALORS
        DEBUT_SI
        AFFICHER* "Vous êtes un promoteur"
        LIRE evenement1
        LIRE evnement2
        AFFICHER* evenement1
        AFFICHER* evnement2
        FIN_SI
      SI (autorisebnr1==2) ALORS
        DEBUT_SI
        AFFICHER* "Vous êtes un utilisateur"
        AFFICHER* "Veuillez choisir vos évènements et suivre les procédures pour payer les billets et aussi les réservations"
        FIN_SI
      FIN_SI
    SI (nbr==3) ALORS
      DEBUT_SI
      //Autorisation de l'Admin
      AFFICHER* "Choix par l'Admin"
      AFFICHER* "1. Oui          2. Non"
      //L'Admin choisir entre  "Oui et Non"
      LIRE autorisebnr2
      SI (autorisebnr2==1) ALORS
        DEBUT_SI
        AFFICHER* "Vous êtes le Financeur"
        //Il gère tout le finance
        FIN_SI
      SI (autorisebnr2==2) ALORS
        DEBUT_SI
        AFFICHER* "Vous êtes un utilisateur "
        AFFICHER* "Veuillez choisir vos évènements et suivre les procédures pour payer les billets et aussi les réservations"
        FIN_SI
      FIN_SI
    TANT_QUE (nbr!=1 && nbr!=2 && nbr!=3) FAIRE
      DEBUT_TANT_QUE
      AFFICHER* "Choisir par le numéro"
      LIRE nbr
      FIN_TANT_QUE
    FIN_SI
    SINON
      DEBUT_SINON
      AFFICHER* "Mot de passe incorrect"
      AFFICHER* "Récommencer l'inscription Svp"
      FIN_SINON
FIN_ALGORITHME



    cout << "Hello world!"<< endl;
    return 0;
}
