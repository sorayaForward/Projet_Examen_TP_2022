#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonctions.h"
#define max 7
#define sizeMax 30

void creationByDefault( ListeO *t,ListeO *q ){
  CellO *p;
    int i=1;
    char cote [sizeMax];
    char titre [sizeMax];
    int nbrB;
    int nbrE;

   if(*t==NULL)//permet de cree + completer l'espace vide avec les infos
    {
    creationO(t,q);
    strcpy((*q)->cote ,"P 120 ou in-12 147");//instead of p->cote=cote wich is not allowed
    strcpy((*q)->titre,"Les hello");
    (*q)->exemplaireB = 3;
    (*q)->exemplaireE = 1;
    }
        p=malloc(sizeof(CellO));//1
        strcpy(p->cote ,"494.33");//instead of p->cote=cote wich is not allowed
        strcpy(p->titre,"L'Arab");
        p->exemplaireB = 3;
        p->exemplaireE = 2;
        p->avant=*q;
        (*q)->suiv=p;
        *q=p; p=malloc(sizeof(CellO));//2
        strcpy(p->cote ,"HY29");//instead of p->cote=cote wich is not allowed
        strcpy(p->titre,"L'Algerie");
        p->exemplaireB = 33;
        p->exemplaireE = 3;
        p->avant=*q;
        (*q)->suiv=p;
        *q=p; p=malloc(sizeof(CellO));//3
        strcpy(p->cote ,"ASH5");//instead of p->cote=cote wich is not allowed
        strcpy(p->titre,"Physique");
        p->exemplaireB = 3;
        p->exemplaireE = 3;
        p->avant=*q;
        (*q)->suiv=p;
        *q=p; p=malloc(sizeof(CellO));//4
        strcpy(p->cote ,"HY28");//instead of p->cote=cote wich is not allowed
        strcpy(p->titre,"Salut eceri voft");
        p->exemplaireB = 3;
        p->exemplaireE = 1;
        p->avant=*q;
        (*q)->suiv=p;
        *q=p; p=malloc(sizeof(CellO));//5
        strcpy(p->cote ,"HYZZ29");//instead of p->cote=cote wich is not allowed
        strcpy(p->titre,"Maths");
        p->exemplaireB = 3;
        p->exemplaireE = 0;
        p->avant=*q;
        (*q)->suiv=p;
        *q=p; p=malloc(sizeof(CellO));//6
        strcpy(p->cote ,"T 8 1420");//instead of p->cote=cote wich is not allowed
        strcpy(p->titre,"Algo");
        p->exemplaireB = 22;
        p->exemplaireE = 2;
        p->avant=*q;
        (*q)->suiv=p;
        *q=p; p=malloc(sizeof(CellO));//7
        strcpy(p->cote ,"HY29");//instead of p->cote=cote wich is not allowed
        strcpy(p->titre,"MI");
        p->exemplaireB = 311;
        p->exemplaireE = 44;
        p->avant=*q;
        (*q)->suiv=p;
        *q=p; p=malloc(sizeof(CellO));//8
        strcpy(p->cote ,"C55");//instead of p->cote=cote wich is not allowed
        strcpy(p->titre,"Logique");
        p->exemplaireB = 3;
        p->exemplaireE = 1;
        p->avant=*q;
        (*q)->suiv=p;
        *q=p; p=malloc(sizeof(CellO));//9
        strcpy(p->cote ,"H9");//instead of p->cote=cote wich is not allowed
        strcpy(p->titre,"Proba");
        p->exemplaireB = 3;
        p->exemplaireE = 3;
        p->avant=*q;
        (*q)->suiv=p;
        *q=p; p=malloc(sizeof(CellO));//10
        strcpy(p->cote ,"2 J 23");//instead of p->cote=cote wich is not allowed
        strcpy(p->titre,"Sciences");
        p->exemplaireB = 3;
        p->exemplaireE = 3;
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;

        (*q)->suiv=NULL;
};
void creationByDefaultE(ListeE *t,ListeE *q){
CellE *p;
    int penal=0;
    int mat,i=1;
    char abn;
   if((*t)==NULL)
    {
    creationE(t,q);
    (*q)->penalite=penal;
    (*q)->matricule = 309;
    (*q)->typeAb = 'C';
    };
        p=malloc(sizeof(CellE));//1
        p->penalite=penal;
        p->matricule = 310;
        p->typeAb = 'A';
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;
        p=malloc(sizeof(CellE));//2
        p->penalite=penal;
        p->matricule = 311;
        p->typeAb = 'C';
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;
        p=malloc(sizeof(CellE));//3
        p->penalite=penal;
        p->matricule = 312;
        p->typeAb = 'A';
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;
          p=malloc(sizeof(CellE));//4
        p->penalite=penal;
        p->matricule = 313;
        p->typeAb = 'C';
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;
        p=malloc(sizeof(CellE));//5
        p->penalite=penal;
        p->matricule = 314;
        p->typeAb = 'A';
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;

        p=malloc(sizeof(CellE));//6
        p->penalite=penal;
        p->matricule = 315;
        p->typeAb = 'C';
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;
        p=malloc(sizeof(CellE));//7
        p->penalite=penal;
        p->matricule = 316;
        p->typeAb = 'A';
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;
        p=malloc(sizeof(CellE));//8
        p->penalite=penal;
        p->matricule = 317;
        p->typeAb = 'C';
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;
          p=malloc(sizeof(CellE));//9
        p->penalite=penal;
        p->matricule = 318;
        p->typeAb = 'A';
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;
        p=malloc(sizeof(CellE));//10
        p->penalite=penal;
        p->matricule = 319;
        p->typeAb = 'C';
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;
        (*q)->suiv=NULL;//last
}
//primitives des Files
//procedure Initfile
void Initfile(File *F)
{(*F).Tete=NULL; (*F).Queue=NULL;}

//procedure Enfiler
void Enfiler(File *F,type *x)
{Efile V;
 V=malloc(sizeof(etuF));
V->data.matricule=(*x).matricule;
strcpy(V->data.cote, (*x).cote);
 V->Suiv=NULL;
 if ((*F).Tete==NULL) (*F).Tete=V; //la file est vide
 else {(*F).Queue->Suiv=V;}
 (*F).Queue=V;
}

//procedure Defiler
void Defiler(File *F, type *x)
{Efile V;
V=(*F).Tete;
(*x).matricule=V->data.matricule;
strcpy((*x).cote,V->data.cote);
 if ((*F).Tete==(*F).Queue) {(*F).Tete=NULL; (*F).Queue=NULL;}
 else (*F).Tete=(*F).Tete->Suiv;
 free(V);
}

//Fonction Filevide
int Filevide(File F)
{if(F.Tete==NULL) return 1;
 else return 0;
}

//Fonction Tetefile
type Tetefile(File F)
{return F.Tete->data;}


//Creations des listes(permet d'allouer un seul espace du type correspondant et le laisse vide)
//CREATION OUVRAGE
void creationO(ListeO *t,ListeO *q){
*t=malloc(sizeof(CellO));
(*t)->avant=NULL;
(*t)->suiv=NULL;
*q=*t;
};

// CREATTION ETUDIANTS
void creationE(ListeE *t,ListeE *q){
*t=malloc(sizeof(CellE));
(*t)->avant=NULL;
(*t)->suiv=NULL;
*q=*t;
};

// CREATTION EMPRUNTS
void creationEm(ListeEm *t,ListeEm *q){
*t=malloc(sizeof(CellEm));
(*t)->avant=NULL;
(*t)->suiv=NULL;
*q=*t;
};

// CREATTION PENALITE
void creationPe(ListePe *t,ListePe *q){
*t=malloc(sizeof(CellPe));
(*t)->avant=NULL;
(*t)->suiv=NULL;
*q=*t;
};


//INCERTION OUVRAGES
void incertionO(ListeO *t,ListeO *q,int n)
{   CellO *p;
    int i=1;
    char cote [20];
    char titre [20];
    int nbrB;
    int nbrE;

   if(*t==NULL)//permet de cree + completer l'espace vide avec les infos
    {
    creationO(t,q);
    printf("donner la cote 1: string\n");
    scanf(" %[^\n]s",cote);
    printf("donner le titre 1: string\n");
    scanf(" %[^\n]s",titre);
    printf("donner le nombre d'exemplaires 1: int\n");
    scanf("%d",&nbrB);
    printf("donner le nombres d'exemplaires emprunte 1: int\n");
    scanf("%d",&nbrE);
    strcpy((*q)->cote ,cote);//instead of p->cote=cote wich is not allowed
    strcpy((*q)->titre,titre);
    (*q)->exemplaireB = nbrB;
    (*q)->exemplaireE = nbrE;
    i++;
    };

        for(i;i<=n;i++)
        {
        p=malloc(sizeof(CellO));
        printf("donner la cote %d: string\n",i);
        scanf(" %[^\n]s",cote);
        printf("donner le titre %d: string\n",i);
        scanf(" %[^\n]s",titre);
        printf("donner le nombre d'exemplaires %d: int\n",i);
        scanf("%d",&nbrB);
        printf("donner le nombres d'exemplaires emprunte %d: int\n",i);
        scanf("%d",&nbrE);
        strcpy(p->cote ,cote);//instead of p->cote=cote wich is not allowed
        strcpy(p->titre,titre);
        p->exemplaireB = nbrB;
        p->exemplaireE = nbrE;
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;
        };
        (*q)->suiv=NULL;
};



//INCERTION ETUDIANTS
void incertionE(ListeE *t,ListeE *q,int n)//A LA FIN
{   CellE *p;
    int penal=0;
    int mat,i=1;
    char abn;
   if((*t)==NULL)
    {
    creationE(t,q);
    printf("donner le matricule 1: int\n");
    scanf("%d",&mat);
    printf("donner le type abonement 1: a/c\n");
    scanf(" %c",&abn);
    (*q)->penalite=penal;
    (*q)->matricule = mat;
    (*q)->typeAb = abn;
    i++;
    };

        for(i;i<=n;i++)
        {
        p=malloc(sizeof(CellE));
        printf("donner le matricule %d: int\n",i);
        scanf("%d",&mat);
        printf("donner le type abonement %d: a/c\n",i);
        scanf(" %c",&abn);
        p->penalite=penal;
        p->matricule = mat;
        p->typeAb = abn;
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;
        };
        (*q)->suiv=NULL;
};

//INCERTION EMPRUNTS
void incertionEm(ListeEm *t,ListeEm *q,ListeE reE,int matricule,char cote[20])//A LA FIN
{   CellEm *p;
    int i = 1;
    date datEmp;
    date datRe;
     if(reE->penalite<max){
      if(*t==NULL)
    {
    creationEm(t,q);
    printf("donner la date emp 1(MM/DD/YYYY):\n");
    scanf("%d/%d/%d",&datEmp.jour,&datEmp.mois,&datEmp.annee);
    printf("donner la date retour 1 (MM/DD/YYYY):\n");
    scanf("%d/%d/%d",&datRe.jour,&datRe.mois,&datRe.annee);
    (*q)->matricule = matricule;
    strcpy((*q)->coteEm , cote);
    (*q)->dateEm.jour=datEmp.jour;
    (*q)->dateEm.mois=datEmp.mois;
    (*q)->dateEm.annee=datEmp.annee;

    (*q)->dateRe.jour = datRe.jour;
    (*q)->dateRe.mois=datRe.mois;
    (*q)->dateRe.annee=datRe.annee;

    }else{
        p=malloc(sizeof(CellEm));

        printf("donner la date emp 1(MM/DD/YYYY):\n");
        scanf("%d/%d/%d",&datEmp.jour,&datEmp.mois,&datEmp.annee);
        printf("donner la date retour 1 (MM/DD/YYYY):\n");
        scanf("%d/%d/%d",&datRe.jour,&datRe.mois,&datRe.annee);
        p->matricule = matricule;
        strcpy(p->coteEm , cote);
        p->dateEm.jour=datEmp.jour;
        p->dateEm.mois=datEmp.mois;
        p->dateEm.annee=datEmp.annee;

        p->dateRe.jour = datRe.jour;
        p->dateRe.mois=datRe.mois;
        p->dateRe.annee=datRe.annee;
        p->avant=(*q);
        (*q)->suiv=p;
        (*q)=p;
        (*q)->suiv=NULL;
        }
     }else{
         if(reE->penalite == max){
         printf("\nVeuillez verifier si l'etudiant n'est pas penaliser + la disponibilite de l'ouvrage\n");}
         }
};


//INCERTION PEANLITES
void incertionPe(ListePe *t,ListePe *q,int matricule,int penalite){
int i=1;
CellPe *p;

if((*t)==NULL)
    {
    creationPe(t,q);
    (*q)->penalite=penalite;
    (*q)->matricule = matricule;
    i++;
    }else{
        p=malloc(sizeof(CellE));
        p->penalite=penalite;
        p->matricule = matricule;
        p->avant=*q;
        (*q)->suiv=p;
        *q=p;
        (*q)->suiv=NULL;
    }
};

//Affichage liste Ouvrage
void affichageO(ListeO *O){
ListeO p;
p=*O;
int i = 0;

while(p!=NULL){
printf("\n\tOuvrage %d\n\n",i+1);
printf("la cote: %s\nLe titre: %s\nLe nombre d'exemplaires: %d\nLe nombre d'exemplaires emprunte: %d\n",p->cote,p->titre,p->exemplaireB,p->exemplaireE);
i++;
p=p->suiv;
};
printf("\n");
};



//Affichage liste Etudiants
void affichageE(ListeE *E){
ListeE p;
p=*E;
int i = 1;

while(p!=NULL){
printf("\n\tEtudiant %d\n\n",i);
printf("Le Matricule: %d\nLa penalite: %d\nLe type d'abonnement: %c\n",p->matricule,p->penalite,p->typeAb);
i++;
p=p->suiv;
};
printf("\n");
};

//Affichage liste Empruntes
void affichageEm(ListeEm *Em){
ListeEm p;
p=*Em;
int i = 0;

while(p!=NULL){
printf("\n\tLivre Emprunte %d\n\n",i+1);
printf("Le Matricule: %d\nLa cote: %s\nLa date de l'emprunte: %d/%d/%d\nLa date de recuperation: %d/%d/%d\n",
p->matricule,p->coteEm,p->dateEm.jour,p->dateEm.mois,p->dateEm.annee,p->dateRe.jour,p->dateRe.mois,p->dateRe.annee);
i++;
p=p->suiv;
};
printf("\n");
};

//Affichage liste penalite
void affichagePe(ListePe *Pe){
ListePe p;
p=*Pe;
int i = 0;

while(p!=NULL){
printf("\n\tPenalite %d\n\n",i+1);
printf("Le Matricule: %d\nLa penalite: %d\n\n",p->matricule,p->penalite);
i++;
p=p->suiv;
};
printf("\n");
};

//verifier l'existence d'un ouvrage
ListeO existeO(ListeO t,char cote[sizeMax],ListeO *p){
int existe=0;
*p=t;
while(*p!=NULL && existe==0)
{
  if(strncmp(cote,(*p)->cote,sizeMax)!=0)
  {//strncmp return 0 when equal
     *p=(*p)->suiv;
  }else{
    existe=1;
    return *p;
  }
};
if(existe==0) return NULL;
};

//verifier si ouvrage dispo
ListeO verifO(ListeO t,char cote[sizeMax]){
int x=1,dispo=0;
ListeO p = existeO(t,cote,&p);
if(p!=NULL){
if(p->exemplaireB-p->exemplaireE>0){
    if(p->exemplaireE==0){
          return p;
          }
          }
else {return NULL;}
}
}
//verifier si etudiant dispo
ListeE verifE(ListeE t,int mat,ListeE *p){
int existe=0;
*p=t;
while(*p!=NULL && existe==0)
{
  if((*p)->matricule==mat)
  {//strcmp return 0 when equal and c needs 1 to executeS
    existe=1;
    return *p;
  }
  *p=(*p)->suiv;
};
if(existe==0) return NULL;
};


//verifier si emprunte dispo
ListeEm verifEm(ListeEm t,int mat,char cote[sizeMax],ListeEm *p){
int existe=0;
*p=t;

while(*p!=NULL && existe==0)
{
  if((*p)->matricule==mat && strncmp((*p)->coteEm, cote,sizeMax)==0 )
  {//strcmp return 0 when equal and c needs 1 to executeS
    existe=1;return *p;
  }
  else
  {
  *p=(*p)->suiv;
  };
};
if(existe==0)return NULL;
};
//verifier si etudiant penalisé dans la liste d'etudiants
int verifPe(ListePe t,int mat){
int x=0;
ListePe p=t;
while(p!=NULL && x==0){

if(mat==p->matricule){
x=1;
return p->penalite;
  }else
  {
  p=p->suiv;
  }
}
if(x==0) return 0;
}

//Supprimer un Ouvrage
ListeO supprimerO(ListeO *t,char titre[sizeMax],char cote[sizeMax]){
ListeO p1,p2;
p1=*t;
p2=*t;
int supp=0;
int k=1;

if(p1!=NULL){
while(p1!=NULL && strncmp(titre,p1->titre,sizeMax)!=0 && strncmp(cote,p1->cote,sizeMax)!=0 )//tanque mal9itch le livre j'avance et j'incremente le k
    {
      k++; p1=p1->suiv;
    };

if(k==1)
      {
        p1=*t;*t=(*t)->suiv;free(p1);
        if(*t!=NULL){(*t)->avant=NULL;}
      }//sup debut
      else
      {
     p2=(*t)->suiv;
     while(p2!=NULL &&  k>2)
        {
        p2=p2->suiv;
        k=k-1;
        }
    if(p2->suiv==NULL)//vaut dire que la position k se trouve a la fin
    { p1=p2; p2=p2->avant; free(p1);
    if(p2!=NULL){p2->suiv=NULL;} //sup fin
    }
    else
    {
     (p2->avant)->suiv=p2->suiv;
     (p2->suiv)->avant=p2->avant; free(p2);
     }//sup milieu
     }
}
return *t;

}



//Supprimer un Etudiant
ListeE supprimerE(ListeE *t,int matricule){
ListeE p1,p2;
p1=*t;
p2=*t;
int supp=0;
int k=1;

while(p1!=NULL && matricule!=p1->matricule)//tanque mal9itch le livre j'avance et j'incremente le k
    {
      k++; p1=p1->suiv;
    };

if(k==1)
      {
        p1=*t;*t=(*t)->suiv;free(p1);
        if((*t)!=NULL){(*t)->avant=NULL;}
      }//sup debut
      else
      {
     p2=(*t)->suiv;
     while(p2!=NULL &&  k>2)
        {
        p2=p2->suiv;
        k=k-1;
        }
    if(p2->suiv==NULL)//vaut dire que la position k se trouve a la fin
    { p1=p2; p2=p2->avant; free(p1);
    if(p2!=NULL){p2->suiv=NULL;} //sup fin
    }
    else
    {
     (p2->avant)->suiv=p2->suiv;
     (p2->suiv)->avant=p2->avant; free(p2);
     }//sup milieu
     }

return *t;
}


//Supprimer une penalite
ListePe supprimerPe(ListePe *t,int matricule){
ListePe p1,p2;
p1=*t;
p2=*t;
int supp=0;
int k=1;

while(p1!=NULL && matricule!=p1->matricule)//tanque mal9itch le livre j'avance et j'incremente le k
    {
      k++; p1=p1->suiv;
    };

if(k==1)
      {
        p1=*t;*t=(*t)->suiv;free(p1);
        if((*t)!=NULL){(*t)->avant=NULL;}
      }//sup debut
      else
      {
     p2=(*t)->suiv;
     while(p2!=NULL &&  k>2)
        {
        p2=p2->suiv;
        k=k-1;
        }
    if(p2->suiv==NULL)//vaut dire que la position k se trouve a la fin
    { p1=p2; p2=p2->avant; free(p1);
    if(p2!=NULL){p2->suiv=NULL;} //sup fin
    }
    else
    {
     (p2->avant)->suiv=p2->suiv;
     (p2->suiv)->avant=p2->avant; free(p2);
     }//sup milieu
     }
return *t;
}
//Supprimer une emprunte
ListeEm supprimerEm(ListeEm *t,int matricule,char cote[20]){
ListeEm p1,p2;
p1=*t;
p2=*t;
int supp=0;
int k=1;

while(p1!=NULL && matricule!=p1->matricule && cote!=p1->coteEm)//tanque mal9itch le livre j'avance et j'incremente le k
    {
      k++; p1=p1->suiv;
    };

if(k==1)
      {
        p1=*t;*t=(*t)->suiv;free(p1);
        if((*t)!=NULL){(*t)->avant=NULL;}
      }//sup debut
      else
      {
     p2=(*t)->suiv;
     while(p2!=NULL &&  k>2)
        {
        p2=p2->suiv;
        k=k-1;
        }
    if(p2->suiv==NULL)//vaut dire que la position k se trouve a la fin
    { p1=p2; p2=p2->avant; free(p1);
    if(p2!=NULL){p2->suiv=NULL;} //sup fin
    }
    else
    {
     (p2->avant)->suiv=p2->suiv;
     (p2->suiv)->avant=p2->avant; free(p2);
     }//sup milieu
     }
return *t;
}

//definir la duree d'une Emprunte
void dureeE(ListeEm retour,int matricule,char cote[20]){
int year_diff,mon_diff,day_diff;

  year_diff = retour->dateRe.annee-retour->dateEm.annee;
  mon_diff = retour->dateRe.mois-retour->dateEm.mois;
  day_diff = retour->dateRe.jour-retour->dateEm.jour;
  printf("\nil reste %d jours et %d mois %d annee",day_diff,mon_diff,year_diff);
}

//modifier un membre
ListeE changerM(ListeE p){
int choix,pen;
printf("Que voulez changer ?\n1-Penalite\n2-Type Abonnement");
scanf("%d",&choix);
if(choix==1){
        if(p->typeAb=='c' || p->typeAb=='C'){
      printf("\nSaissiez la nouvelle penalite\n");
      scanf("%d",&pen);
      p->penalite=pen;
      printf("\nLa penalite a ete changer\n");
     }else{
      printf("L'etudiant est premium in ne peut pas etre penalise\n");}
};
if(choix==2){

    if(p->typeAb=='c'|| p->typeAb=='C'){
        p->typeAb='A';
    }else{p->typeAb='C';}
    printf("\nLe type d'abonement a ete changer\n");
}
}
//modifier un emprunte
ListeEm changerEm(ListeEm p){
int choix;
date datEmp;
date datRe;
char cot[20];
printf("Que voulez changer ?\n1-cote\n2-date emprunte\n3-date retour\n");
scanf("%d",&choix);
if(choix==1){
      printf("Saissiez la nouvelle cote\n");
      scanf(" %[^\n]s",cot);
      strcpy(p->coteEm, cot);
};
if(choix==2){
    printf("saissiez la nouvelle date (MM/DD/YYYY)\n");
    scanf("%d/%d/%d",&datEmp.jour,&datEmp.mois,&datEmp.annee);
        p->dateEm.jour=datEmp.jour;
        p->dateEm.mois=datEmp.mois;
        p->dateEm.annee=datEmp.annee;
}
if(choix==3){
    printf("saissiez la nouvelle date(JJ/MM/AAAA):\n");
    scanf("%d/%d/%d",&datRe.jour,&datRe.mois,&datRe.annee);
        p->dateRe.jour = datRe.jour;
        p->dateRe.mois=datRe.mois;
        p->dateRe.annee=datRe.annee;
}
return p;
}
//max ouvrage
int maxO(ListeO t){
ListeO p1=t;
int s = 0;
while(p1!=NULL){
s=p1->exemplaireB-p1->exemplaireE+s;
p1=p1->suiv;
};
return s;
}

//affiche file
void AfficheFile(File *a){
type X;
File R;
int i=1;
Initfile(&R);
while(!Filevide(*a))
    {
Defiler(a,&X);
printf("\nMatricule %d : %d\nLe titre : %s",i,X.matricule,X.cote);
Enfiler(&R,&X);
i++;
   }
*a=R;
}
//retourner une emprainte
ListeO returnEm(ListeO p){//je decremente le nbr de livre emprainté

   p->exemplaireE--;
   printf("\nL'emprainte est retourner\n");

};

//Enfiler dans la file d'attente sous conditions a/c + diponibilité du livre + existence de l'etudiant + l'etudiant n'est pas penaliser
File Liste(ListeO reO,ListeE reE,char cote[20],int matricule,File *a,File *b){
type *donne;
donne = malloc(sizeof(TypeD));
strcpy(donne->cote, cote);
donne->matricule=matricule;
    if(reE->typeAb=='c'|| reE->typeAb=='C' && reE->penalite<max)
    {
    Enfiler(a,donne);
    printf("\nL'etudiant est bien incerer\n");return *a;
    }
            if(reE->typeAb=='a'|| reE->typeAb=='A')
            {    Enfiler(b,donne);
                 printf("\nL'etudiant est bien incerer\n");return *b;
            }

          if(reE->penalite>=max)  printf("\nImpossible car l'etudiant est penaliser\n");

}
//
//////Livres plus sollicites
//char plusSollicit(File *p1,int num1,char plusSoli[20]){
//int num2 = num1;
//File p2,p;
//type *data,x;
//data = malloc(sizeof(TypeD));
//Initfile(&p);
//Initfile(&p2);
//    Defiler(p1,data);
//    strcpy(x.cote, data->cote);//x = data.cote
//    x.matricule=data->matricule;
//    Enfiler(&p,data);
//while(!Filevide(*p1)){
//if(strncmp(x.cote,Tetefile(*p1).cote,20)!=0 && num1>=num2){
//   num1++;printf("cote 2 %s ",x.cote);
//    Defiler(p1,data);
//    Enfiler(&p,data);
//    }else{
//        Defiler(p1,data);
//        Enfiler(&p2,data);
//       Enfiler(&p,data);
//        }
//}
//
//if(!Filevide(p2)){
//       plusSollicit(&p2,num1,x.cote);
//            }else{printf("Le plus solie = %s",plusSoli);}
//}
//
