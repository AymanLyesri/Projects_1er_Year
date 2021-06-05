#include <stdlib.h>
#include <stdio.h>
char shameZone[100]; //                                chaine global pour les non-validees
int x = 0;           //                                valeur global representant le nombre des etudiants
float note = 0;      //                                valeur global du somme de note des etudiants

struct student //                                      les informations de chaque etudiant *liste chainee*
{
    char firstname[100];
    char lastname[100];
    int note;
    struct student *io; //                             next student etc...
};

typedef struct student stud;

stud *studx; //                                        pointeur global d'etudiant

void notvalid(stud *variable) //                       fonction pour sesir et stocker les non-validees
{
    strcat(shameZone, variable->firstname);
    strcat(shameZone, " . ");
    strcat(shameZone, variable->lastname);
    strcat(shameZone, " ||\n");
}

void student(stud *variable) //                        fonction permet de stocker les etudiant pour la premier fois
{
    char n[5] = "done"; //                             done = sortir du saisie des eleves
    FILE *f;

    f = fopen("XNotes.txt", "w+"); //                  permet d'ecraser les donnees du fichier et d'ecrire a nouveau

    system("cls");

    while (1)
    {
        variable->io = malloc(sizeof(stud));
        printf("\n--------FirstName : ");
        scanf("%s", variable->firstname);
        if (strcmp(variable->firstname, n) == 0) //   si le mot saisie est "done" on va quitter
        {
            break;
        }
        printf("\n---------LastName : ");
        scanf("%s", variable->lastname);
        printf("\n-------------Note : ");
        scanf("%d", &variable->note);
        if (variable->note < 10)
        {
            notvalid(variable);
        }
        printf("___________________________________________________________________________________________if done type 'done'\n");
        x++;
        note = note + variable->note;
        fprintf(f, "%s . %s --> %d \n", variable->firstname, variable->lastname, variable->note); //stocker les eleves dans un fichier

        variable = variable->io; //                                        sauter vers l'etudiant suivant
    }
}

void addstudent(stud *variable) //                                         fonction pour ajouter de nouveaux etudiants
{
    char n[5] = "done"; //                                                 "done" = sortir du saisie des eleves
    FILE *f;

    f = fopen("XNotes.txt", "a+"); //                                      permet d'ajouter au fichier specifiee

    system("cls");

    while (strcmp(variable->firstname, n) != 0) //                         on va chercher 'done' et on va la remplacer par le nouveau etudiant saisie
    {
        puts(variable->firstname);
        variable = variable->io; //                                        sauter vers l'etudiant suivant
    }
    while (1)
    {
        variable->io = malloc(sizeof(stud));
        printf("\nFirstName : ");
        scanf("%s", variable->firstname);
        if (strcmp(variable->firstname, n) == 0) //                        si le mot saisie est "done" on va quitter
        {
            break;
        }
        printf("\nLastName : ");
        scanf("%s", variable->lastname);
        printf("\nNote : ");
        scanf("%d", &variable->note);
        if (variable->note < 10)
        {
            notvalid(variable);
        }
        printf("_________________________________________________________________________\t\t\tif done type 'done'\n");
        x++;
        note = note + variable->note;
        fprintf(f, "%s . %s --> %d \n", variable->firstname, variable->lastname, variable->note); //  ajouter les eleves dans un fichier

        variable = variable->io; //                    sauter vers l'etudiant suivant
    }
}

void cooleffects() //                                 simple fonction qui fait des effects basic
{
    int cool = 0, clock = 0; //                       cool = numero du ligne ($$$....) // clock = un delai entre l'affichage du chaque ligne
    while (cool < 9)
    {
        switch (cool)
        {
        case 0:
            system("cls");
            printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        case 1:
            system("cls");
            printf("\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        case 2:
            system("cls");
            printf("\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        case 3:
            system("cls");
            printf("\n\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        case 4:
            system("cls");
            printf("\n\n\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        case 5:
            system("cls");
            printf("\n\n\n\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        case 6:
            system("cls");
            printf("\n\n\n\n\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        case 7:
            system("cls");
            printf("\n\n\n\n\n\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        case 8:
            system("cls");
            printf("\n\n\n\n\n\n\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        case 9:
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        }
        while (clock < 1000000)
        {
            clock++;
            clock++;
            clock--;
            cool++;
        }
        clock = 0;
    }
}

main() //                                              responsable a l'affichage et la saisie
{
    int choice;   //                                   votre choix (1.2.3.4.5)
    float result; //                                   le resultat finale (moyen generale)

    studx = malloc(sizeof(stud)); //                   allocation du pointeur d'etudiant

start:;

    cooleffects();

    system("cls");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$\t\t\t\t\tWell Hello there\t\t\t\t\t$$$$\n");
    printf("$$$$\t\t\t\t\t\t\t\t\t\t\t\t$$$$\n");
    printf("$$$$\t\t\t\t\t\t\t\t\t\t\t\t$$$$\n");
    printf("$$$$\t\t\t\t\t\t\t\t\t\t\t\t$$$$\n");
    printf("$$$$\t\t\t\t\t1 - add a student\t\t\t\t\t$$$$\n");
    printf("$$$$\t\t\t\t\t2 - Not validated students\t\t\t\t$$$$\n");
    printf("$$$$\t\t\t\t\t3 - How much students ?\t\t\t\t\t$$$$\n");
    printf("$$$$\t\t\t\t\t4 - General Note of the class\t\t\t\t$$$$\n");
    printf("$$$$\t\t\t\t\t5 - exit\t\t\t\t\t\t$$$$\n");
    printf("$$$$\t\t\t\t\t\t\t\t\t\t\t\t$$$$\n");
    printf("$$$$\t\t\t\t\t\t\t\t\t\t\t\t$$$$\n");
    printf("$$$$\t\t\t\t\t\t\t\t\t\tlyesri-ayman\t$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("\nWhich one ? : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        if (x == 0)
        {
            student(studx);
            goto start;
        }
        else
        {
            addstudent(studx);
            goto start;
        }
    case 2:
        puts(shameZone); //                                                                  les noms des non-validees
        system("pause");
        goto start;
    case 3:
        printf("\n\t\t\tThere is %d student(s)\t\t\t\n\n\n", x); //                          le nombre totale des etudiants
        system("pause");
        goto start;
    case 4:
        result = note / x;                                                         //                                                                calculer la note generale des etudiants
        printf("\n\t\t\tThe general note of the class is %f\t\t\t\n\n\n", result); //        la note generale des etudiants
        system("pause");
        goto start;
    case 5:
        system("cls");
        printf("$$$$\t\t\t\t\t\t\t\t\t\t\t\t$$$$\n");
        printf("$$$$\t\t\t\t\t\t\t\t\t\t\t\t$$$$\n");
        printf("$$$$\t\t\t\t\t\t\t\t\t\t\t\t$$$$\n");
        printf("$$$$\t\t\t\tGoodBye for now :)\t\t\t\t\t\t$$$$\n");
        printf("$$$$\t\t\t\t\t\t\t\t\t\t\t\t$$$$\n");
        printf("$$$$\t\t\t\t\t\t\t\t\t\t\t\t$$$$\n");
        printf("$$$$\t\t\t\t\t\t\t\t\t\t\t\t$$$$");
        return 0; //                                                                         quitter l'application
    }
}