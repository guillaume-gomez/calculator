#include <stdio.h>
#include <stdlib.h>

long addition(long nombre1, long nombre2)
{
   long resultat = 0;
   printf("vous avez choisis l'addition\n");
   printf("entrer un nombre\t");
   scanf("%ld", &nombre1);
   printf("entrer un autre nombre\t");
   scanf("%ld", &nombre2);
   resultat = nombre1 + nombre2;
   printf("le resultat est %ld\n", resultat);
   return 0;
}

long soustraction(long nombre1, long nombre2)
{
    long resultat = 0;
    printf("vous avez choisis la soustraction\n");
    printf("entrer un nombre\t");
    scanf("%ld", &nombre1);
    printf("entrer un autre nombre qui sera soustrait au premier\t");
    scanf("%ld", &nombre2);
    resultat = nombre1 - nombre2;
    printf("le resultat est %ld\n", resultat);
    return 0;
}

long multiplication(long nombre1, long nombre2)
{
  	long resultat = 0;
    printf("vous avez choisis la multiplication\n");
    printf("entrer un nombre\t");
    scanf("%ld\n", &nombre1);
    printf("entrer un autre nombre\t");
    scanf("%ld", &nombre2);
    resultat = nombre1 * nombre2;
    printf("le resultat est %ld\n", resultat);
    return 0;
}

long division(long nombre1, long nombre2)
{
	double resultat = 0;
	printf("vous avez choisis la division\n");
	printf("entrer un nombre\t");
	scanf("%ld", &nombre1);
	printf("entrer un autre nombre\t");
	scanf("%ld", &nombre2);
	resultat = nombre1 / nombre2;
	printf("le resultat est %lf\n", resultat);
	return 0;
}

long carre(long nombre1)
{
    long resultat = 0;
    printf("vous avez choisis la fonction carre\n");
    printf("entrer un nombre\t");
    scanf("%ld", &nombre1);
    resultat = nombre1 * nombre1;
    printf("le carre de ce nombre est %ld\n", resultat);
    return 0;
}

double inverse(double nombre3)
{
    double resultat = 0;
    printf("vous avez choisis la fonction inverse\n");
    printf("entrer un nombre\t\t");
    scanf("%ld", &nombre3);
    resultat= 1 / nombre3;
    printf("l'inverse de ce nombre est %lf\n", resultat);
    return 0;
}

double conversion(double nombre3)
{
    double resultat = 0;
    printf("vous avez choisi la conversion en euros du francs\n");
    printf("entrer un nombre\t");
    scanf("%ld", &nombre3);
    resultat = nombre3 / 6.55957;
    printf("cela vaut %lf euros\n", &resultat);
    return 0;
}

long conversion1(long nombre1)
{
    double resultat = 0;
    printf("vous avez choisi la conversion des euros en francs\n");
    printf("entrer un nombre\t");
    scanf("%ld", &nombre1);
    resultat= nombre1 * 6.55957;
    printf("cela vaut %lf francs\n", resultat);
    return 0;
}

long menu()
{
    long choix = 0;
    while(choix < 1 || choix > 8)
    {
        printf("----MENU----\n");
        printf("1:addition\n");
        printf("2:soustraction\n");
        printf("3:multiplication\n");
        printf("4:division\n");
        printf("5: fonction carre\n");
        printf("6:fonction inverse\n");
        printf("7: conversion francs/euros\n");
        printf("8:conversion euros/francs\n");
        printf("votre choix\t");
        scanf("%ld", &choix);
    }
    return choix;
}

int main()
{
    long nombre1 = 0,nombre2 = 0,continuer = 0;
    double nombre3 = 0,resultat = 0;

    do
    {
        switch (menu())
        {
        case 1:
        addition(nombre1,nombre2);
        break;

        case 2:
        soustraction(nombre1,nombre2);
        break;

        case 3:
        multiplication(nombre1,nombre2);
        break;

        case 4:
        division(nombre1,nombre2);
        break;

        case 5:
        carre(nombre1);
        break;

        case 6:
        inverse(nombre1);
        break;

        case 7:
        conversion(nombre1);
        break;

        case 8:
        conversion1(nombre1);
        break;
        }
        printf("souhaitez vous continuer oui/1;non/0\n");
        scanf("%ld", &continuer);
    } while(continuer == 1);

	system("pause");
	return 0;
}
