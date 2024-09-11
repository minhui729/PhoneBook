#ifndef HEADER_H
#define HEADER_H

#include <stdbool.h>

typedef struct Person {
    char name[5];
    char phone[14];
    bool isFavorite;
}Person;

void Create();

void Search();

void Edit();

void Show();

void Remove();

void PrintFavorites();

#endif // MY_FUNCTIONS_H



