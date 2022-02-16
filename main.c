#include <stdio.h>
#include <stdlib.h>
#include "fonctions.c"
int main(){

ListeO tO=NULL,qO=NULL,reO=NULL,O=NULL;
ListeE tE=NULL,qE=NULL,reE=NULL,E=NULL;
ListeEm tEm=NULL,qEm=NULL,reEm=NULL;
ListePe tPe=NULL,qPe=NULL;
File a,b,p1,p2,p;
int num1 = -1;
Initfile(&a);
Initfile(&b);
int option,Op,mat,num,elem,i,penalite,rePe;
char titre[sizeMax],cote[sizeMax],cote1[sizeMax];
char answer;


//SORAYA KHENE
//WISSAM MELIOUH
printf("\n *********************************************************************\n\n");
printf(" BIENVENU AU SYSTEM QUI VA VOUS AIDEZ A GERER VOTRE BIBLIOTHEQUE!\n\n");
printf(" *********************************************************************\n\n");
printf("RULES:\n\n");
printf("*Rule 1: pour afficher/supprimer/consulter/emprainter/modifier il faut d'abord incerer \n");
printf("*Rule 2: pour Emprainter il faut veriffier que l'etudiant n'est pas penaliser et que l'ouvrage est disponible \n");
printf("*Rule 3: pour ajouter un etudiant a la fil d'attente il faut assurer la diponibilite du livre \n          +existence de l'etudiant + l'etudiant n'est pas penaliser\n");
printf("*Rule 4: vous ne pouvez pas incerer 0 element\n");
printf("*Rule 5: si vous saissiez un matricule ou bien cote/titre qui n'existe pas le programme va vous demander de saissier infiniment jusqu'a ou vous le saissiez correctement\n");
printf("*Rule 6: quand vous incerez un ouvrage, si vous saissiez la cote fausse, meme si le titre est correcte le programme va vous demmander de saissier infiniment jusqu'a ou vous saissiez la cote correctement\n");
printf("*Rule 7: Vous ne pouvez pas saissiez une penalite inferieur a 1\n\n");
printf(" ***********************ALL RIGHTS RESERVED***************************\n\n\n");


printf("\nVoulez vous utilisez les listes par defaut? O\\N\n");
scanf(" %c",&answer);
if(answer == 'O' || answer == 'o'){
creationByDefault(&tO,&qO);
creationByDefaultE(&tE,&qE);
}
aceuille:
do{

do
{
printf("\nChoisissez la liste ( 1 a 4 )\n\n");
printf("\t1-Ouvrages\n\t2-Etudiants\n\t3-Emprunts\n\t4-Penalites\n\t5-Ajouter dans la file d'attente\n\t6-Afficher file etudiants classique\n\t7-Afficher file etudiants premium\n\t8-Les plus solisites\n\t9-Les moin Emprainte\n");
if(scanf("%d", &option)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
}while(option>9 || option<1);

    switch(option){

    case 1 :
        do
        {
        printf("\nChoisissez l'option( 1 a 5 )\n\n");
        printf("\t1-Insertion\n\t2-Affichage\n\t3-Suppression\n\t4-Retourner Emprunt\n\t5-Consulter un ouvrage\n");
        if(scanf("%d", &Op)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
        }while(Op>5 || Op<1);
        switch(Op)
        {
            case 1:incereO:
                do{
                printf("Combien d'ouvrages voulez vous incerez ? ");
                if(scanf("%d", &num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                }while(num<=0);
                incertionO(&tO,&qO,num);
            break;
            case 2 :
                afficheO:
                if(tO==NULL){
                        printf("\nLa liste est vide veuillez incerer des ouvrages d'abord ! clicez sur 1 pour incerer sur 0 pour retourner a l'accueil\n");
                        if(scanf("%d", &num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                        if(num == 1)goto incereO;
                        if(num == 0)goto aceuille;
                        }else{
                        affichageO(&tO);
                         }
            break;
            case 3 :if(tO==NULL){
                    printf("\nLa liste est vide veuillez incerer des ouvrages d'abord ! clicez sur 1 pour incerer sur 0 pour retourner a l'accueil\n");
                    if(scanf("%d", &num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                        if(num == 1)goto incereO;
                        if(num == 0)goto aceuille;
                        if(num!=1 && num!=0) printf("\nnumero invalide! je vous remet a l'aceuille");goto aceuille;
                    }else{
                do{
                printf("Combien d'elem voulez vs supprimer ? ");
                if(scanf("%d", &elem)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                }while(elem<=0);
                for(i=1;i<=elem;i++){
                do{saissiezAutre:
                printf("Donner le titre %d a supprimer ",i);
                scanf(" %[^\n]s",titre);
                printf("Donner la cote %d a supprimer ",i);
                scanf(" %[^\n]s",cote);
                reO=existeO(tO,cote,&reO);
                if(reO==NULL){printf("le titre ou bien la cote est fausse clicez sur 1 pour revoir les ouvrages qui existe ou bien 0 ensuite saissiez un autre");
                scanf("%d",&num);
                if(num==0) goto saissiezAutre;
                if(num==1) goto afficheO;}
                }while(reO==NULL);
                };
                supprimerO(&tO,titre,cote);
                }
            break;
            case 4 : if(tO==NULL){
                    printf("\nLa liste est vide veuillez incerer des ouvrages d'abord ! clicez sur 1 pour incerer sur 0 pour retourner a l'acceuille\n");
                     if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                        if(num == 1)goto incereO;
                        if(num == 0)goto aceuille;
                        if(num!=1 && num!=0) printf("\nnumero invalide! je vous remet a l'aceuille");goto aceuille;
                    }else{
                   do{
                    printf("Combien d'emprainte voulez vs remaitre? ");
                    if(scanf("%d",&elem)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    }while(elem<=0);
                    for(i=1;i<=elem;i++)
                    {   do{
                        printf("Donner le cote %d a retourner ",i);
                        scanf(" %[^\n]s",cote);
                        reO = existeO(tO,cote,&reO);
                        }while(reO==NULL);
                        returnEm(reO);
                    }}
            break;
            case 5 :
                if(tO==NULL){
                    printf("\nLa liste est vide veuillez incerer des ouvrages d'abord ! clicez sur 1 pour incerer sur 0 pour retourner a l'acceuille\n");
                    if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                        if(num == 1)goto incereO;
                        if(num == 0)goto aceuille;
                        if(num!=1 && num!=0) printf("\nnumero invalide! je vous remet a l'aceuille");goto aceuille;
                    }else{
                    do{
                    printf("Combien d'elem voulez vs verifier ? ");
                    if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    }while(num<=0);
                    for(i=1;i<=num;i++)
                    {   do{
                        printf("Donner la cote %d a verifier ",i);
                        scanf(" %[^\n]s",cote);
                        reO=existeO(tO,cote,&reO);}
                        while(reO==NULL);
                        if(verifO(reO,cote)!=NULL){
                        printf("\n\nL'ouvrage existe en %d exemplaires\nLe Titre :%s\nLa Cote: %s\nNbr d'Exemplaires :%d\nNbr d'Exemplaire Emprunté :%d\n",reO->exemplaireB-reO->exemplaireE,reO->titre,reO->cote,reO->exemplaireB,reO->exemplaireE);
                        }
                        else
                        {
                        printf("\nL'ouvrage n'est pas disponible\n");
                        }
                    }}
            break;
        }
    break;//case1
    case 2 :
        do
        {
            printf("\nChoisissez l'option( 1 a 5 )\n\n");
            printf("\t1-Insertion\n\t2-Affichage\n\t3-Suppression\n\t4-Consulter\n\t5-Modifier\n");
            if(scanf("%d",&Op)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
        }while(Op>5 || Op<1);
            switch(Op){
                case 1 :incereE:
                    do{
                    printf("\nCombien d'etudiants voulez vous incerez ? \n");
                    if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    }while(num<=0);
                    incertionE(&tE,&qE,num);
                break;
                case 2 :afficheE:
                    if(tE==NULL){
                    printf("\nLa liste est vide veuillez incerer des Etudiants d'abord ! clicez sur 1 pour incerer sur 0 pour retourner a l'acceuille\n");
                     if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                        if(num == 1)goto incereE;
                        if(num == 0)goto aceuille;
                        if(num!=1 && num!=0) printf("\nnumero invalide! je vous remet a l'aceuille");goto aceuille;
                    }else{
                    affichageE(&tE);}
                break;
                case 3 :
                    if(tE==NULL){
                    printf("\nLa liste est vide veuillez incerer des Etudiants d'abord ! clicez sur 1 pour incerer sur 0 pour retourner a l'acceuille\n");
                     if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                        if(num == 1)goto incereE;
                        if(num == 0)goto aceuille;
                        if(num!=1 && num!=0) printf("\nnumero invalide! je vous remet a l'aceuille");goto aceuille;
                    }else{
                    do{
                    printf("Combien d'etudiants voulez vs supprimer ? ");
                     if(scanf("%d",&elem)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    }while(elem<=0);
                    for(i=1;i<=elem;i++){
                    do{
                    printf("Donner le matricule %d a supprimer",i);
                     if(scanf("%d",&mat)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    reE = verifE(tE,mat,&reE);
                    }while(reE==NULL);
                    supprimerE(&tE,mat);
                    }}
                break;
                case 4 :
                    if(tE==NULL){
                    printf("\nLa liste est vide veuillez incerer des Etudiants d'abord ! clicez sur 1 pour incerer sur 0 pour retourner a l'acceuille\n");
                     if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    if(num == 1)goto incereE;
                    if(num == 0)goto aceuille;
                    if(num!=1 && num!=0) printf("\nnumero invalide! je vous remet a l'aceuille");goto aceuille;

                    }else{
                    do{
                    printf("Combien d'etudiants voulez vs consulter ? ");
                     if(scanf("%d",&elem)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    }while(elem<=0);
                    for(i=1;i<=elem;i++)
                    {
                    printf("\nDonner le matricule %d a consulter ",i);
                    if(scanf("%d",&mat)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    reE = verifE(tE,mat,&reE);
                       if(reE!=NULL){
                        printf("\nL'Etudiant existe\nLe Matricule: %d\nType abonnement :%d\nPenalite :%d",reE->matricule,reE->typeAb,reE->penalite);
                        }
                        else
                        {
                        printf("\nL'Etudiant n'Existe pas");
                        }

                    }}
                break;
                case 5 :
                    if(tE==NULL){
                    printf("\nLa liste est vide veuillez incerer des Etudiants d'abord ! clicez sur 1 pour incerer sur 0 pour retourner a l'acceuille\n");
                     if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    if(num == 1)goto incereE;
                    if(num == 0)goto aceuille;
                    if(num!=1 && num!=0) printf("\nnumero invalide! je vous remet a l'aceuille");goto aceuille;

                    }else{
                    do{
                    printf("Combien d'etudiants voulez vs modifier ? ");
                     if(scanf("%d",&elem)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    }while(elem<=0);
                    for(i=1;i<=elem;i++){
                    do{
                    printf("Donner le matricule ");
                     if(scanf("%d",&mat)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    reE=verifE(tE,mat,&reE);
                    }while(reE==NULL);
                    changerM(reE);
                    }}
                break;
            }
    break;//case2
    case 3 :
    do{
        printf("\nChoisissez l'option( 1 a 7 )\n\n");
        printf("\t1-Insertion\n\t2-Affichage\n\t3-Suppression\n\t4-Consulte\n\t5-Modifier\n\t6-Duree\n\t7-Max Ouvrages a emprainter\n");
        scanf("%d",&Op);
    }while(Op>7 || Op<1);
        switch(Op)
        {
            case 1 :
                do{
                printf("Donner le matricule ");
               if(scanf("%d",&mat)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                reE=verifE(tE,mat,&reE);
                }while(reE==NULL);
                printf("Donner la cote ");
                do{
                scanf(" %[^\n]s",cote);
                reO=verifO(tO,cote);
                if(reO==NULL){
                printf("Le livre n'est pas disponible ou n'est pas existant clicez sur 0 puis saissiez un autre oubien 1 pour consulter les livres \n");
               scanf("%d",&num);
               if(num==1) goto afficheO;
               }
                }while(reO==NULL);
                incertionEm(&tEm,&qEm,reE,mat,cote);
            break;
            case 2 :
                if(tEm==NULL){
                    printf("\nLa liste est vide !\n");
                    }else{
                        affichageEm(&tEm);}
            break;
            case 3 :
                if(tEm==NULL){
                    printf("\nLa liste est vide !\n");
                    }else{
                do{
                printf("Combien d'emprunts voulez vs supprimer ? ");
                if(scanf("%d",&elem)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                }while(elem<=0);
                for(i=1;i<=elem;i++){
                do{
                printf("Donner le matricule ");
                if(scanf("%d",&mat)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                reE=verifE(tE,mat,&reE);
                }while(reE == NULL);
                do{
                printf("\nDonner la cote\n");
                scanf(" %[^\n]s",cote);
                reEm = verifEm(tEm,mat,cote,&reEm);}
                while(reEm==NULL);
                supprimerEm(&tEm,mat,cote);
                }}
            break;
            case 4 :
                if(tEm==NULL){
                    printf("\nLa liste est vide !\n");
                    }else{
                do{
                printf("Combien d'emprunts voulez vs consulter ? ");
                if(scanf("%d",&elem)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                }while(elem<=0);
                for(i=1;i<=elem;i++)
                {   do{
                    printf("Donner le matricule ");
                     if(scanf("%d",&mat)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    reE=verifE(tE,mat,&reE);
                    }while(reE==NULL);
                    do{
                    printf("Donner la cote %d du livre ",i);
                    scanf(" %[^\n]s",cote);
                    reO = existeO(tO,cote,&reO);
                     }while(reO==NULL);
                    reEm = verifEm(tEm,mat,cote,&reEm);
                       if(reEm!=NULL){
                        printf("\nLe Matricule: %d\nLa cote: %s\nLa date de l'emprunte: %d/%d/%d\nLa date de recuperation: %d/%d/%d\n",reEm->matricule,reEm->coteEm,reEm->matricule,reEm->coteEm,reEm->dateEm.jour,reEm->dateEm.mois,reEm->dateEm.annee,reEm->dateRe.jour,reEm->dateRe.mois,
                        reEm->dateRe.annee);
                        }
                        else
                        {
                        printf("\nL'Emprunte n'Existe pas\n");
                        }
                }}
            break;
            case 5 :
                if(tEm==NULL){
                    printf("\nLa liste est vide !\n");
                    }else{
                do{
                printf("Combien d'Emprunts voulez vs modifier ? ");
                if(scanf("%d",&elem)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                }while(elem<=0);
                for(i=1;i<=elem;i++){
                do{
                printf("Donner le matricule");
                if(scanf("%d",&mat)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                printf("\nDonner la cote \n");
                scanf(" %[^\n]s",cote1);
                reEm = verifEm(tEm,mat,cote1,&reEm);}
                while(reEm==NULL);
                changerEm(reEm);
                }}
            break;
            case 6 :
                if(tEm==NULL){
                    printf("\nLa liste est vide !\n");
                    }else{
                do{
                printf("\nCombien d'Emprunts voulez vs conaitre leurs durees ? ");
                if(scanf("%d",&elem)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                }while(elem<=0);
                for(i=1;i<=elem;i++){
                do{
                printf("Donner le matricule \n");
                if(scanf("%d",&mat)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                printf("Donner la cote \n");
                scanf(" %[^\n]s",cote);
                reEm = verifEm(tEm,mat,cote,&reEm);
                }while(reEm==NULL);
                dureeE(reEm,mat,cote);
                }}
            break;
            case 7 :
                if(tO==NULL){
                    printf("\nLa liste est vide veuillez incerer des ouvrages d'abord !\n");
                    }else{
                    printf("\nNbr d'ouvrage disponible a emprainter est %d",maxO(tO));
                    }
            break;
        }
    break;//case 3
    case 4 :
        do{
            printf("\nChoisissez l'option( 1 a 5 )\n\n");
            printf("\t1-Ajouter\n\t2-Afficher\n\t3-Consulter\n\t4-Supprimer\n");
            if(scanf("%d",&Op)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
        }while(Op>5 || Op<1);
        switch(Op)
            {
            case 1 :incerep:
                    if(tE==NULL){
                    printf("\nLa liste des etudiants est vide,veuillez les ajouter d'abord ! clicez sur 1 pour incerer sur 0 pour retourner a l'acceuille\n");
                     if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    if(num == 1)goto incereE;
                    if(num == 0)goto aceuille;
                    }else{
                hna:
                printf("Donner le matricule\n");
                if(scanf("%d",&mat)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                reE=verifE(tE,mat,&reE);
                if(reE!=NULL){
                if(reE->typeAb=='A' || reE->typeAb=='a'){
                printf("L'etudiant est premium il ne peut pas etre penaliser,\n clicez sur 0 ensuite saissiez un autre\n sur 1 pour consulter la liste des etudiants\n");
                if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                if(num==1) goto afficheE;
                if(num==0) goto hna;
                }else{
                do{
                printf("Donner la penalite\n");
                if(scanf("%d",&penalite)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                }while(penalite<1);
                incertionPe(&tPe,&qPe,mat,penalite);
                }
                }else{
                printf("L'etudiant n'existe pas,\n clicez sur 0 ensuite saissiez un autre\n sur 1 pour consulter la liste des etudiants\n");
                 if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                if(num==1) goto afficheE;
                                if(num==0) goto hna;

                }
                }


            break;
            case 2 :
                if(tPe==NULL){
                 printf("\nLa liste est vide veuillez ajouter des penalitees d'abord ! clicez sur 1 pour incerer sur 0 pour retourner a l'acceuille\n");
                if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                if(num == 1)goto incerep;
                if(num == 0)goto aceuille;
                if(num!=1 && num!=0) printf("\nnumero invalide! je vous remet a l'aceuille");goto aceuille;
                }else{
                affichagePe(&tPe);
                }
            break;
            case 3 :
                    if(tPe==NULL){
                    printf("\nLa liste est vide veuillez ajouter des penalitees d'abord ! clicez sur 1 pour incerer sur 0 pour retourner a l'acceuille\n");
                     if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    if(num == 1)goto incerep;
                    if(num == 0)goto aceuille;
                   if(num!=1 && num!=0) printf("\nnumero invalide! je vous remet a l'aceuille");goto aceuille;

                    }else{
                do{
                printf("Combien de penalites voulez vs consulter ? ");
                if(scanf("%d",&elem)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                }while(elem<=0);
                for(i=1;i<=elem;i++)
                {
                do{
                printf("Donner le matricule \n");
                if(scanf("%d",&mat)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                reE=verifE(tE,mat,&reE);
                }while(reE==NULL);
                rePe = verifPe(tPe,mat);
                   if(rePe>=1){
                    printf("\nL'etudiant est penaliser %d fois\n",rePe);
                    }else
                    {
                    printf("\nL'etudiant n'est pas penaliser\n");
                    }
                };}
            break;
            case 4 :
                    if(tPe==NULL){
                    printf("\nLa liste est vide ! clicez sur 1 pour incerer sur 0 pour retourner a l'acceuille\n");
                     if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                    if(num == 1)goto incerep;
                    if(num == 0)goto aceuille;
                     if(num!=1 && num!=0) printf("\nnumero invalide! je vous remet a l'aceuille");goto aceuille;
                    }else{
                do{
                printf("Combien d'etudiants voulez vs suprimer de la liste de penalites ?");
                if(scanf("%d",&elem)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                }while(elem<=0);
                for(i=1;i<=elem;i++)
                {
                do{
                printf("Donner le matricule \n");
                if(scanf("%d",&mat)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                reE=verifE(tE,mat,&reE);
                }while(reE==NULL);
                supprimerPe(&tPe,mat);
                };}
            break;
            }
    break;//case 4
    case 5 :incereF:
        if(tO==NULL && tE==NULL){
                printf("Vous ne pouvez pas ! Confirmez que la liste des etudiants et des ouvrages n'ont pas vide\n- Clicez sur 0 pour consulter la liste des etudiants\n- Sur 1 pour consulter les ouvrages \n");
                if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                if(num==1) goto afficheO;
                if(num==0) goto afficheE;
                }else{
                do{
                printf("Combien d'etudiants voulez vs ajouter dans la liste ? \n");
                if(scanf("%d",&elem)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                }while(elem<=0);
                for(i=1;i<=elem;i++)
                {
                printf("Donner le matricule %d ",i);
                do{
                if(scanf("%d",&mat)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                reE=verifE(tE,mat,&reE);
              if(reE==NULL){
                    printf("L'etudiant n'existe pas saissiez un autre \n");
              }else{
                if(reE->penalite==max){printf("L'etudiant est penalise il ne peut pas etre ajouter a la liste d'attente donner un autre");}
                   }
                }while(reE==NULL || reE->penalite==max );
                do{
                printf("Donner la cote ");
                scanf(" %[^\n]s",cote);
                reO = verifO(tO,cote);
                if(reO==NULL) {printf("\nL'ouvrage n'est pas disponible ou n'existe pas,\n clicez sur 1 ensuite saissiez un autre\n clicez sur 2 pour Consulter la liste des ouvrages\n");
                if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
                  if(num==2)goto afficheO;}
                }while(reO==NULL);
                Liste(reO,reE,cote,mat,&a,&b);
                }}
       break;
    case 6 :
         if(Filevide(a)){
        printf("\nLa liste est vide veuillez incerer d'abord ! clicez sur 0 pour incerer sur 1 pour retourner a l'acceuil\n");
        if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
        if( num == 0 ) goto incereF;
        if ( num == 1 ) goto aceuille;
        }else{
        printf("\nFile d'attente des Etudiants classique\n");
        AfficheFile(&a);}
    break;

    case 7 :
         if(Filevide(b)){
        printf("\nLa liste est vide veuillez incerer d'abord ! clicez sur 0 pour incerer sur 1 pour retourner a l'acceuil\n");
        if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
        if( num == 0 ) goto incereF;
        if ( num == 1 ) goto aceuille;
        }else{
        printf("\nFile d'attente des Etudiants premium\n");
        AfficheFile(&b);}
    break;
    case 8 :
        printf("Developing in progress..");
//        while(Filevide(a)){
//        printf("La file d'attente est vide veuillez ajouter d'abord en cliquant sur 0 ou bien sur 1 pour retourner a l'acceuil ");
//       if(scanf("%d",&num)!=1){printf("ERREUR DE SAISIE: saisiez un entier la prochaine fois!");return 0;}
//        if(num==1) goto aceuille;
//        if(num==0) goto incereF;
//        }
//        Initfile(&p1);
//        p1=a;
//        plusSollicit(&p1,num1,"");
    break;
        case 9 :
            printf("Developing in progress..");
        break;
}//switch ends

printf("\nVoulez vous faire des nouvelles operations ? O\\N\n");
scanf(" %c",&answer);
}while(answer == 'O' || answer == 'o');
 return 0;}
