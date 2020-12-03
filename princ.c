#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
// Les Tableaux:
    // Tableau Contient les Identifiants du voyage
    char ID_Voy[70][3]= {"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42","43","44","45","46","47","48","49","50"};

    // Tableau Contient les Numéro de passeport du voyageurs
    char NumPass[70][8]= {"C303056","G905035","F206024","O100703","M500002","S600303","T390406","U860303","J180704","Y690904","D510700","U920003","Z410003","T390406","O680206","J180704","Y561101","B640402","N250702","I870703","A870000","S411003","Y690904","N250702","T390406","Q130404","Y561101","C550506","X800500","J180704","C303056","G770004","W100106","N250702","T390406","W690406","N611100","X960105","B640402","R900705","F410203","K180004","Z120500","Y690904","M800606","C550506","I950305","J180704","V702060","T390406"};

    // Tableau Contient les Noms du voyageurs
    char Nom[70][20]= {"HASSAN_WNUK","TOMOKO_LARMON","CHERYL_SCHUETZ","MIA_GUSTAVSON","RODRIGO_GINES","DAVE_LOKKEN","AILEEN_ERION","LELA_WHITTENBERG","KARA_EAST","SO_KIMLER","CORNELL_BIERY","MEREDITH_GANTT","MARINE_GIEL","AILEEN_ERION","GENNIE_RAYE","KARA_EAST","JOHN_MEHL","DENA_RAUCH","STELLA_SAVOY","RONI_ADAMSON","CARLY_CRUSE","VELMA_KEPLER","SO_KIMLER","STELLA_SAVOY","AILEEN_ERION","KRISTI_SEPULVEDA","JOHN_MEHL","TONI_DEMAREST","NAKITA_BEDFORD","KARA_EAST","HASSAN_WNUK","CHRYSTAL_PEAKE","TRISTA_MODE","STELLA_SAVOY","AILEEN_ERION","JONI_ROSELLI","MARCIE_BOWSHER","GILDA_CUTRER","DENA_RAUCH","ELZA_ABELL","RICHELLE_KARPINSKI","ALEXANDER_ENDERLE","AUDRA_SPEECE","SO_KIMLER","KAREN_DOLPHIN","TONI_DEMAREST","KAYLEE_YANG","KARA_EAST","MADALYN_DEBOSE","AILEEN_ERION"};

    // Tableau Contient les Date de naissance du voyageurs
    char Date_Naiss[70][11]= {"22/09/1907","25/11/1914","05/11/1915","11/02/1919","29/05/1919","25/07/1923","17/12/1980","11/09/1937","29/09/1973","11/05/1940","20/07/1944","22/07/1944","10/07/1960","17/12/1980","09/02/1962","29/09/1973","09/06/1966","07/10/1972","18/02/1975","15/04/1975","11/01/1976","08/09/1977","11/05/1940","18/02/1975","17/12/1980","17/02/1982","09/06/1966","18/07/1966","09/02/1978","29/09/1973","22/09/1907","03/11/1984","01/04/1977","18/02/1975","17/12/1980","19/07/1990","07/05/1981","08/01/1947","07/10/1972","24/07/1948","15/06/1950","26/11/1955","05/06/1959","11/05/1940","24/07/1965","18/07/1966","04/10/1969","29/09/1973","25/11/1977","17/12/1980"};

    // Tableau Contient les Date de depart
    char Date_Dep[70][11]= {"16/03/1981","10/05/1981","16/03/1981","28/06/1981","05/07/1984","29/12/2006","16/03/1981","28/06/1981","09/03/1984","09/03/1984","09/03/1984","16/01/2003","30/05/2003","28/06/1981","28/06/1981","28/06/1981","16/03/1981","09/03/1984","29/12/2006","28/12/2005","29/12/2006","28/06/1981","16/03/1981","29/06/2009","16/01/2003","16/01/2003","28/06/1981","20/12/2011","28/06/1981","16/01/2003","25/02/2015","01/01/2016","05/07/1984","28/06/1981","28/06/1981","28/09/2018","05/07/1984","28/06/1981","09/03/1984","16/01/2003","28/06/1981","28/06/1981","28/07/1987","28/06/1981","16/03/1981","16/01/2003","05/07/1984","10/01/1989","16/03/1981","28/06/1981"};

    // Tableau Contient les Date d'arrivée
    char Date_Arr[70][11]= {"17/03/1981","14/05/1981","17/03/1981","29/06/1981","07/07/1984","31/12/2006","17/03/1981","29/06/1981","10/03/1984","10/03/1984","10/03/1984","17/01/2003","02/06/2003","29/06/1981","29/06/1981","29/06/1981","17/03/1981","10/03/1984","31/12/2006","31/12/2005","31/12/2006","29/06/1981","17/03/1981","30/06/2009","17/01/2003","17/01/2003","29/06/1981","21/12/2011","29/06/1981","17/01/2003","26/02/2015","03/01/2016","07/07/1984","29/06/1981","29/06/1981","29/09/2018","07/07/1984","29/06/1981","10/03/1984","17/01/2003","29/06/1981","29/06/1981","30/07/1987","29/06/1981","17/03/1981","17/01/2003","07/07/1984","12/01/1989","17/03/1981","29/06/1981"};

    // Tableau Contient les Ville de la destination
    char Ville[70][20]= {"KAESONG","SALALAH","KAESONG","ALEXANDRIE","MOROCCO","HAMBOURG","KAESONG","ALEXANDRIE","TAIPEI","TAIPEI","TAIPEI","OLONKINBYEN","BUENOS AIRES","ALEXANDRIE","ALEXANDRIE","ALEXANDRIE","KAESONG","TAIPEI","HAMBOURG","MANCHESTER","HAMBOURG","ALEXANDRIE","KAESONG","LONDRES","OLONKINBYEN","OLONKINBYEN","ALEXANDRIE","NIAMEY","ALEXANDRIE","OLONKINBYEN","MALACCA","VATICAN","MOROCCO","ALEXANDRIE","ALEXANDRIE","STOCKHOLM","MOROCCO","ALEXANDRIE","TAIPEI","OLONKINBYEN","ALEXANDRIE","ALEXANDRIE","MANAMA","ALEXANDRIE","KAESONG","OLONKINBYEN","MOROCCO","TORONTO","KAESONG","ALEXANDRIE"};

    // Tableau Contient les Pays de la destination
    char Pays[70][30]= {"NORTH KOREA","OMAN","NORTH KOREA","EGYPT","MOROCCO","GERMANY","NORTH KOREA","EGYPT","TAIWAN","TAIWAN","TAIWAN","SVALBARD AND JAN MAYEN","ARGENTINA","EGYPT","EGYPT","EGYPT","NORTH KOREA","TAIWAN","GERMANY","UNITED KINGDOM","GERMANY","EGYPT","NORTH KOREA","ENGLAND","SVALBARD AND JAN MAYEN","SVALBARD AND JAN MAYEN","EGYPT","NIGER","EGYPT","SVALBARD AND JAN MAYEN","MALAYSIA","HOLY SEE","MOROCCO","EGYPT","EGYPT","SWEDEN","MOROCCO","EGYPT","TAIWAN","SVALBARD AND JAN MAYEN","EGYPT","EGYPT","BAHRAIN","EGYPT","NORTH KOREA","SVALBARD AND JAN MAYEN","MOROCCO","CANADA","NORTH KOREA","EGYPT"};


    int Grp[70]= {0,1,1,1,0,0,1,0,0,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,1,1,0,1,1,0,0,0,1,1,0,1,0,1,0,1,1,1,1,0,0,0,0,0,1};

    //Tableau Contient les Numéro du groupe(Identifiant)
    char NumGrp[70][3]= {"5","0","5","3","6","4","5","3","2","2","2","1","0","3","3","3","5","2","4","0","4","3","5","0","1","1","3","0","3","1","0","0","6","3","3","0","6","3","2","1","3","3","0","3","5","1","6","0","5","3"};

    //Tableau Contient les Nombres des voyageurs affectés à un groupe
    char NbrGrp[70][3]= {"7","0","7","15","4","3","7","15","5","5","5","6","0","15","15","15","7","5","3","0","3","15","7","0","6","6","15","0","15","6","0","0","4","15","15","0","4","15","5","6","15","15","0","15","7","6","4","0","7","15"};

    char Ch_choix[2];
    int s,choix;
    int N=50;
    char NmPass[8];
    int test=1,C=0;
    char Iden[3];
    int i,j;
    int exist;
    char reponse;
    int  hiver=0,ete=0,automne=0,printemps=0,m;
    char ann[5];
    char v[70][5];
    char mm[3];
    int X,V;
    char ve[70][5], xe[70][5];
    int   agem=0;
    int agej=0;
    int  agea=0;
    int   agev=0;
    int testc,nb_voy=0;

MENU_PRINCIPAL:
    system("color F0");
    printf("||-------------------------------------------------------------------------------------------------------------------||\n");
    printf("||\t\t\t\t\tMENU PRINCIPALE DE NOTRE AGENCE DE VOYAGE  \t\t\t\t     ||\n");
    printf("||-------------------------------------------------------------------------------------------------------------------||\n");
    printf("\n\n");
    printf("||-------------------------------------------------------------------------------------------------------------------||\n");
    printf("||-------------------------------------------------------------------------------------------------------------------||\n");
    printf("||------------------------------------BIENVENUE AU MENU PRINCIPAL DE NOTRE AGENCE------------------------------------||\n");
    printf("||-------------------------------------------------------------------------------------------------------------------||\n");
    printf("||-------------------------------------------------------------------------------------------------------------------||\n");
    printf("||-----------------------------------Veuillez choisir l'objectif de votre operation----------------------------------||\n");
    printf("||-------------------------------------------------------------------------------------------------------------------||\n");
    printf("||-------------------------------------------------------------------------------------------------------------------||\n");
    printf("||\t\t\t\t\t1. GESTION DES VOYAGES \t\t\t\t\t\t\t     ||\n");
    printf("||\t\t\t\t\t2. STATISTIQUE POUR L'AGENCE \t\t\t\t\t\t     ||\n");
    printf("||-------------------------------------------------------------------------------------------------------------------||\n");
    printf("||-------------------------------------------------------------------------------------------------------------------||\n");
    printf("||\t\t\t\t\t3. QUITTER L'APPLICATION\t\t\t\t\t             ||\n");
    printf("||-------------------------------------------------------------------------------------------------------------------||\n");
    printf("||Votre choix: ");

    do
    {
        scanf("%s",&Ch_choix);
        choix=atoi(Ch_choix);
        if((choix>3)||(choix<1))
        {
            printf("||S.V.P, Verifier votre choix: ");
        }
    }
    while((choix>3)||(choix<1));


    switch(choix)
    {
    case 1:
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||----------------------------BIENVENUE DANS LE MENU DE GESTION DES VOYAGES DE L'AGENCE------------------------------||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
MENU_GV:
        system("color FC");
        printf("||-------------------------------------------Veuillez choisir une action---------------------------------------------||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||\t\t\t\t\t1. Afficher tous les voyages \t\t\t\t\t             ||\n");
        printf("||\t\t\t\t\t2. Rechercher ler voyages d'un clients \t\t\t\t             ||\n");
        printf("||\t\t\t\t\t3. Supprimer un voyage \t\t\t\t\t\t\t     ||\n");
        printf("||\t\t\t\t\t4. Modifier la date d'un voyage \t\t\t\t             ||\n");
        printf("||\t\t\t\t\t5. Afficher les voyages vers chaque pays \t\t\t             ||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||========================================= ****** Ajouter un voyage ****** =========================================||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||\t\t\t\t\t6. Voyage d'un seul client \t\t\t\t\t             ||\n");
        printf("||\t\t\t\t\t7. Voyage organise \t\t\t\t\t\t             ||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||\t\t\t\t\t8. Tirage au sort du gangnat \t\t\t\t\t             ||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||\t\t\t\t\t9. RETOUR AU MENU PRINCIPAL \t\t\t\t\t             ||\n");
        printf("||\t\t\t\t\t10. QUITTER L'APPLICATION \t\t\t\t\t\t     ||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||Votre choix: ");

        do
        {
            scanf("%s",&Ch_choix);
            choix=atoi(Ch_choix);
            if((choix>10)||(choix<1))
            {
                printf("||S.V.P, Verifier votre choix: ");
            }
        }
        while((choix>10)||(choix<1));

        switch(choix)
        {
        case 1:
            for(int i=0; i<N; i++)
            {
                printf("\t|-----------|--------------\n");
                printf("\t|ID         | %s\n",ID_Voy[i]);
                printf("\t|NumPass    | %s\n",NumPass[i]);
                printf("\t|Nom        | %s\n",Nom[i]);
                printf("\t|Date_Naiss | %s\n",Date_Naiss[i]);
                printf("\t|Date_Dep   | %s\n",Date_Dep[i]);
                printf("\t|Date_Arr   | %s\n",Date_Arr[i]);
                printf("\t|Ville      | %s\n",Ville[i]);
                printf("\t|Pays       | %s\n",Pays[i]);
                printf("\t|Grp        | %i\n",Grp[i]);
            }
Retour:


            system("color 0F");
            printf("||-------------------------------------------------------------------------------------------------------------------||\n");
            printf("||-------------------------------------------------------------------------------------------------------------------||\n");
            printf("||\t\t\t\t\t1. RETOUR AU MENU DE GESTION DES VOYAGES DE L'AGENCE \t\t             ||\n");
            printf("||\t\t\t\t\t2. RETOUR AU MENU PRINCIPAL \t\t\t\t                     ||\n");
            printf("||\t\t\t\t\t3. QUITTER L'APPLICATION \t\t\t\t                     ||\n");
            printf("||-------------------------------------------------------------------------------------------------------------------||\n");
            printf("||Votre choix: ");

            do
            {
                scanf("%s",&Ch_choix);
                choix=atoi(Ch_choix);
                if((choix>3)||(choix<1))
                {
                    printf("||S.V.P, Verifier votre choix: ");
                }
            }
            while((choix>3)||(choix<1));

            switch(choix)
            {
            case 1:
                printf("\n\n\n\n\n\n");
                goto MENU_GV;

            case 2:
                printf("\n\n\n\n\n\n");
                goto MENU_PRINCIPAL;

            case 3:
                return 0;

            }
        case 2:
            test=1;

            printf("||Numero de passprot: ");
            do
            {
                scanf(" %s",&NmPass);
                if(strlen(NmPass)!=7)
                {
                    printf("||\nLe numero de passeport doit etre compose de 7 caractères(1 lettre, puis 6 chiffres)\n");
                    printf("||Verifier le numero SVP: ");
                    test=0;
                }
                else if((isalpha(NmPass[0])==0)||(isupper(NmPass[0])==0))
                {
                    printf("||\nLe premier caractere doit etre alphabetique et Majuscule\nVerifier le numero SVP: ");
                    test=0;
                }
                else
                    for(int i=1; i<7; i++)
                    {
                        if(isdigit(NmPass[i])==0)
                        {
                            test=0;
                            break;
                        }
                    }
            }
            while(test==0);

            for(i=0; i<N; i++)
            {

                if(strcmp(NmPass,NumPass[i])==0)
                {
                    C++;
                    printf("\t|-----------|--------------\n");
                    printf("\t|ID         | %s\n",ID_Voy[i]);
                    printf("\t|NumPass    | %s\n",NumPass[i]);
                    printf("\t|Nom        | %s\n",Nom[i]);
                    printf("\t|Date_Naiss | %s\n",Date_Naiss[i]);
                    printf("\t|Date_Dep   | %s\n",Date_Dep[i]);
                    printf("\t|Date_Arr   | %s\n",Date_Arr[i]);
                    printf("\t|Ville      | %s\n",Ville[i]);
                    printf("\t|Pays       | %s\n",Pays[i]);
                    printf("\t|Grp        | %i\n",Grp[i]);
                }
            }
            if (C>0)
            {
                printf("\t|-----------|--------------\n");
            }
            else
            {
                printf("Le numero %s n exist pas\n",NmPass);
            }
            goto Retour;

            do
            {
                scanf("%s",&Ch_choix);
                choix=atoi(Ch_choix);
                if((choix>3)||(choix<1))
                {
                    printf("S.V.P, Verifier votre choix: ");
                }
            }
            while((choix>3)||(choix<1));

            switch(choix)
            {
            case 1:
                printf("\n\n\n\n\n\n");
                goto MENU_GV;

            case 2:
                printf("\n\n\n\n\n\n");
                goto MENU_PRINCIPAL;

            case 3:
                return 0;
            }



        case 3:
            do
            {
                printf("||Donner l'identifiant de le voyage ");
                scanf("%s",&Iden);
            }
            while(atoi(Iden)<=0);


            for(i=0; i<N; i++)
            {
                printf("\t|-----------|--------------\n");
                printf("\t|-----------|--------------\n");
                printf("\t|ID         | %s\n",ID_Voy[i]);
                printf("\t|NumPass    | %s\n",NumPass[i]);
                printf("\t|Nom        | %s\n",Nom[i]);
                printf("\t|Date_Naiss | %s\n",Date_Naiss[i]);
                printf("\t|Date_Dep   | %s\n",Date_Dep[i]);
                printf("\t|Date_Arr   | %s\n",Date_Arr[i]);
                printf("\t|Ville      | %s\n",Ville[i]);
                printf("\t|Pays       | %s\n",Pays[i]);
                printf("\t|Grp        | %i\n",Grp[i]);
            }
            printf("\t|-----------|--------------\n");

            i=0;
            exist=0;
            while((i<N)&&(exist==0))
            {
                if(strcmp(ID_Voy[i],Iden)==0)
                {
                    printf("||Etes-vous sur de supprimer ces informations ?\n|| 1.Continue \t\t 2.Annuler\n");
                    printf("||Votre choix: ");

                    do
                    {
                        scanf("%s",&Ch_choix);
                        choix=atoi(Ch_choix);
                        if((choix>2)||(choix<1))
                        {
                            printf("||S.V.P, Verifier votre choix: ");
                        }
                    }
                    while((choix>2)||(choix<1));

                    if(choix==1)
                    {
                        for(j=i; j<N-1; j++)
                        {

                            strcpy(ID_Voy[j],ID_Voy[j+1]);
                            strcpy(NumPass[j],NumPass[j+1]);
                            strcpy(Nom[j],Nom[j+1]);
                            strcpy(Date_Naiss[j],Date_Naiss[j+1]);
                            strcpy(Date_Dep[j],Date_Dep[j+1]);
                            strcpy(Date_Arr[j],Date_Arr[j+1]);
                            strcpy(Ville[j],Ville[j+1]);
                            strcpy(Pays[j],Pays[j+1]);
                            Grp[j]=Grp[j+1];
                            strcpy(NumGrp[j],NumGrp[j+1]);
                            strcpy(NbrGrp[j],NbrGrp[j+1]);
                        }
                        N--;
                        exist=1;
                    }
                    else
                    {
                        goto END;
                    }
                }
                else
                {
                    i++;
                }
            }
            if(exist==1)
            {
                for(i=0; i<N; i++)
                {
                    printf("\t|-----------|--------------\n");
                    printf("\t|-----------|--------------\n");
                    printf("\t|ID         | %s\n",ID_Voy[i]);
                    printf("\t|NumPass    | %s\n",NumPass[i]);
                    printf("\t|Nom        | %s\n",Nom[i]);
                    printf("\t|Date_Naiss | %s\n",Date_Naiss[i]);
                    printf("\t|Date_Dep   | %s\n",Date_Dep[i]);
                    printf("\t|Date_Arr   | %s\n",Date_Arr[i]);
                    printf("\t|Ville      | %s\n",Ville[i]);
                    printf("\t|Pays       | %s\n",Pays[i]);
                    printf("\t|Grp        | %i\n",Grp[i]);
                }
                printf("\t|-----------|--------------\n");
                printf("\t|-----------|--------------\n");
            }
            else
            {
                printf("||l'identifiant n est exist pas\n");
            }

END:
    goto Retour;

            do
            {
                scanf("%s",&Ch_choix);
                choix=atoi(Ch_choix);
                if((choix>3)||(choix<1))
                {
                    printf("||S.V.P, Verifier votre choix: ");
                }
            }
            while((choix>3)||(choix<1));

            switch(choix)
            {
            case 1:
                printf("\n\n\n\n\n\n");
                goto MENU_GV;

            case 2:
                printf("\n\n\n\n\n\n");
                goto MENU_PRINCIPAL;

            case 3:
                return 0;
            }




        case 9:
            printf("\n\n\n\n\n\n");
            goto MENU_PRINCIPAL;

        case 10:
            return 0;
        }


        break;
    case 2:
        system("color F5");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||\t\t\t\t          PARTIE STATISTIQUE DE L'AGENCE  \t\t\t\t\t\t||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("\n\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||--------------------------------BIENVENUE DANS LE MENU DES STATISTIQUE POUR L'AGENCE-------------------------------||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||----------------------------------------------Veuillez choisir une action------------------------------------------||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||\t\t\t\t1. Nombre totale de voyaves \t\t\t\t\t\t             ||\n");
        printf("||\t\t\t\t2. Nombre annuel moyen de voyages \t\t\t\t\t             ||\n");
        printf("||\t\t\t\t3. Nombre de voyages par saison \t\t\t\t\t             ||\n");
        printf("||\t\t\t\t4. Periode ayant le plus de demandes \t\t\t\t\t             ||\n");
        printf("||\t\t\t\t5. Periode ayant le moins de demandes \t\t\t\t\t             ||\n");
        printf("||\t\t\t\t6. Nombre de clients distincts \t\t\t\t\t\t\             ||\n");
        printf("||\t\t\t\t7. Tranche d'AGES la plus frequente \t\t\t\t\t             ||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||\t\t\t\t8. RETOUR AU MENU PRINCIPAL \t\t\t\t\t\t\t     ||\n");
        printf("||\t\t\t\t9. QUITTER L'APPLICATION \t\t\t\t\t\t\t     ||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("||-------------------------------------------------------------------------------------------------------------------||\n");
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("||Votre choix: ");

        do
        {
            scanf("%s",&Ch_choix);
            choix=atoi(Ch_choix);
            if((choix>9)||(choix<1))
            {
                printf("||S.V.P, Verifier votre choix: ");
            }
        }
        while((choix>9)||(choix<1));

        switch(choix)
        {
        case 1:


        case 3:
            printf("||Donner une annee: ");
                do{scanf("%s",ann);
                if(atoi(ann)<1900){
                    printf("||L annee doit etre superieur a 1900: ");
                }
            }while (atoi(ann)<1900);
int            h=0;
            for(i=0; i<N; i++)
            {
                mm[0]=Date_Dep[i][3];
                mm[1]=Date_Dep[i][4];
                strrev(Date_Dep[i]);
                strncpy(v[i],Date_Dep[i],4);
                strrev(v[i]);
                m=atoi(mm);
                if ((strcmp(ann,v[i])==0))
                {
                    if((m==12)||(m==1)||(m==2))
                    {
                        hiver++;
                    }
                    else if((m==3)||(m==4)||(m==5))
                    {
                        printemps++;
                    }
                    else if((m==6)||(m==7)||(m==8))
                    {
                        ete++;
                    }
                    else if((m==9)||(m==10)||(m==11))
                    {
                        automne++;
                    }


                }
            }
            if( (hiver==0)&&(printemps==0)&&(ete==0)&&(automne==0) ){
                printf("||L annee %s n existe pas.\n",ann);
            }else{
            printf("||Le nombre des voyages par saison\n");
            printf("||-------------------------------------------------------------------------------------------------------------------||\n");
            printf("||-------------------------------------------------------------------------------------------------------------------||\n");
            printf("||-------------------------------------------------------------------------------------------------------------------||\n");
            printf("|| Hiver: %i\t|| Printemps:%i\t|| L'Ete :%i\t|| Automne: %i\t\t\t\t\t\t\t     ||\n",hiver,printemps,ete,automne);
            printf("||-------------------------------------------------------------------------------------------------------------------||\n");
            printf("||-------------------------------------------------------------------------------------------------------------------||\n");
            printf("||-------------------------------------------------------------------------------------------------------------------||\n");
            }
            goto Retour;
              case 6:
               for (i=0; i<N; i++)
                {testc=1;
                for (j=i+1; j<N; j++)
                {if(strcmp(Nom[i],Nom[j])==0)
                        test=0;}
                {if (testc==1)
                        nb_voy= nb_voy+1;}

            }
            printf("||-------------------------------------------------------------------------------------------------------------------||\n");
            printf("||-------------------------------------------------------------------------------------------------------------------||\n");

            printf("||\t\t\t\t \tle nombre distincts des voyageurs est:%i \t\t\t\t     ||\n", nb_voy);

            printf("||-------------------------------------------------------------------------------------------------------------------||\n");
            printf("||-------------------------------------------------------------------------------------------------------------------||\n");
              goto END;
            goto Retour;
        case 7:
            for(i=0; i<N; i++)
            {
                strrev(Date_Dep[i]);
                strncpy(ve[i],Date_Dep[i],4);
                strrev(ve[i]);
                V=atoi(ve[i]);

                strrev(Date_Naiss[i]);
                strncpy(xe[i],Date_Naiss[i],4);
                strrev(xe[i]);
                X=atoi(xe[i]);
                s= V-X;
                  if (s<=18)
                    agem=agem+1;
                else if ( (s>=19) && (s<=39))
                    agej=agej+1;
                else if ((s<=40)&&(s>=60))
                    agea=agea+1;
                else if (s>60)
                    agev=agev+1;
            }
            printf("\t\t\t -----------------------------------------------------------------\n");
            printf("\t\t\t | \t<=18\t | \t[19,35]\t | \t[36,60]\t | \t60>\t |\n");
            printf("\t\t\t -----------------------------------------------------------------\n");
            printf("\t\t\t | \t%i\t | \t%i\t | \t%i\t | \t%i\t |\n",agem,agej,agea,agev);
            printf("\t\t\t -----------------------------------------------------------------\n");
            int max=agem;
            int Tr=1;
            if (max<agej)
            {max=agej;
                Tr=2;}
            else if (max<agea)
            {max=agea;
                Tr=3;}
            else if (max<agev)
            {
                max=agev;
                Tr=4;
            }
            printf("||--------------------------------------------------------------------------------------------------------------------||\n");
            printf("||--------------------------------------------------------------------------------------------------------------------||\n");

            printf("||La tranche d age la plus frequente de la clientele de cette agence est");
            switch(Tr)
            {
            case 1:
                printf("|| =<18  ||  \n");
                break;
            case 2:
                printf(" ||  [19..35] || \n");
                break;
            case 3:
                printf(" ||  [36..60]  || \n");
                break;
            case 4 :
                printf(" || 60> ||  \n");

            }

            printf("||--------------------------------------------------------------------------------------------------------------------||\n");
            printf("||--------------------------------------------------------------------------------------------------------------------||\n");
            goto END;
            goto Retour;
        case 8:
            printf("\n\n\n\n\n\n");
            goto MENU_PRINCIPAL;

        case 9:
            return 0;
        }



        break;
    case 3:
        return 0;


    }
















    return 0;
}
