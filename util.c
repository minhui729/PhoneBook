#include "header.h"
#include <stdio.h>
#include <stdlib.h>

int PrintMenu() {
    int input = 0;
    
    printf("----------------------------Always be happy\n");
    printf("[1] Add\n[2] Search\n[3] Edit\n[4] Print\n[5] Remove\n[6] Favorites\n[0] Exit\n");
    printf("---------------------------------------------\n");
    scanf("%d", &input);
    
    return input;
}

void Create() {
    Person* pp;
    FILE* fp;

    pp = (Person*)malloc(sizeof(Person));
    fp = fopen("algo.txt", "a");
    printf("이름 : ");
    scanf("%s", &pp->name);
    printf("전화번호 : ");
    scanf("%s", &pp->phone);

    fwrite(pp, sizeof(Person), 1, fp);
    fclose(fp);
}

void Search() {

}

void Edit() {

}

void Show() {
    Person p;
    FILE* fp;
    int i = 1;

    fp = fopen("algo.txt", "r");

    while (fread(&p, sizeof(Person), 1, fp)) {
        printf("[%d]", i);
        printf("\nname : %s, ", p.name);
        printf("phoneNumber : %s\n", p.phone);
        i++;
    }
    printf("|Total People| : %d\n", i);

    fclose(fp);
}

void Remove() {
    
}

void PrintFavorites() {

}

