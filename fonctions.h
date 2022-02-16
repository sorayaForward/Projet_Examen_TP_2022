typedef struct date{
int jour;
int mois;
int annee;
}date;
typedef struct Ouvrage* ListeO;
typedef struct Ouvrage{
char cote [20];
char titre [20];
int exemplaireB;
int exemplaireE;
ListeO suiv;
ListeO avant;
}CellO;
typedef struct etudiant* ListeE;
typedef struct etudiant{
int penalite;
int matricule;
char typeAb;
ListeE suiv;
ListeE avant;
}CellE;
typedef struct Emprunte* ListeEm;
typedef struct Emprunte{
int matricule;
char coteEm [20];//coteEm<>cote
date dateEm;
date dateRe;
ListeEm suiv;
ListeEm avant;
}CellEm;
typedef struct Penalite* ListePe;
typedef struct Penalite{
int matricule;
int penalite;
ListePe suiv;
ListePe avant;
}CellPe;
typedef struct Type type;
typedef struct Type{
int matricule;
char cote[20];
}TypeD;
typedef struct file* Efile;
typedef struct file{type data; Efile Suiv;} etuF;
typedef struct {Efile Tete,Queue;} File;
void creationByDefault( ListeO *t,ListeO *q);
void creationByDefaultE( ListeE *tE,ListeE *qE);

////primitives des Files
//procedure Initfile
void Initfile(File *F);

//procedure Enfiler
void Enfiler(File *F,type *data);

//procedure Defiler
void Defiler(File *F, type *data);

//Fonction Filevide
int Filevide(File F);


//Fonction Tetefile
type Tetefile(File F);

//CREATION FIFO
void creationO(ListeO *t,ListeO *q);
void creationE(ListeE *t,ListeE *q);
void creationEm(ListeEm *t,ListeEm *q);
void creationPe(ListePe *t,ListePe *q);
//Incertion
void incertionO(ListeO *t,ListeO *q,int n);
void incertionE(ListeE *t,ListeE *q,int n);
void incertionEm(ListeEm *t,ListeEm *q,ListeE t1,int matricule,char titre[20]);//incertion ssi l'etudiant n'esp pas penalisé et livre disponible
void incertionPe(ListePe *t,ListePe * q,int matricule,int Penalite);


//Affichage de liste des Ouvrages
void affichageO(ListeO *t);
//Affichage de liste des Etudiants
void affichageE(ListeE *t);
//Affichage de liste des Empruntes
void affichageEm(ListeEm *t);
//Affichage de liste des Penalites
void affichagePe(ListePe *Pe);


//verifier si ouvrage existe
ListeO existeO(ListeO t,char cote[20],ListeO *p);
//verifier si ouvrage dispo
ListeO verifO(ListeO t,char cote[20]);
//verifier si etudiants dispo
ListeE verifE(ListeE t,int mat,ListeE *p);
//verifier si etudiants dispo
ListeEm verifEm(ListeEm t,int mat,char cote[20],ListeEm *p);
//verifier si etudinat penalisé
int verifPe(ListePe t,int mat);


//supprimer un ouvrage
ListeO supprimerO(ListeO *t,char titre[20],char cote[20]);
//supprimer un etudiant
ListeE supprimerE(ListeE *t,int mat);
//supprimer une penalite
ListePe supprimerPe(ListePe *t,int matricule);
//Supprimer une emprunte
ListeEm supprimerEm(ListeEm *t,int matricule,char cote[20]);


//calculer la duree d'une emprunte
void dureeE(ListeEm t,int matricule,char cote[20]);

//modifier un membre
ListeE changerM(ListeE reE);
//modifier une emprainte
ListeEm changerEm(ListeEm t);

//max ouvrages a emprunté
int maxO(ListeO t);

//affiche file
void AfficheFile(File *a);

//Retourner un emprunt
ListeO returnEm(ListeO t);

//File d'attente
File Liste(ListeO t,ListeE t1,char titre[20],int matricule,File *a,File *b);

//Livres plus sollicites
//char plusSollicit(File *a,int num1,char splusSoli[20]);

//Consulter l'ouvrage le moins emprunté
