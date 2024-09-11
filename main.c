#include <stdio.h>
#include "header.h"
#include "util.c"

int main() {
    int num = 0;

    // Event Loop
    while ((num = PrintMenu()) != 0) {
        switch (num) {
            case 1:
                Create();
                break;
            
            case 2:
                Search();
                break;
            
            case 3:
                Edit();
                break;

            case 4:
                Show();
                break;

            case 5:
                Remove();
                break;

            case 6:
                PrintFavorites();
                break;
        }
    }
    printf("Have a great day:)\n");
}