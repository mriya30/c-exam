#include <stdio.h>

struct House {
    int room_quantity;
    int established_year;
    char city[10];
};

int main() {
    struct House n[2];
    for (int i = 0; i < 2; i++) {
        printf("Enter room quantity, year, and city:\n");
        scanf("%d %d %s", &n[i].room_quantity, &n[i].established_year, n[i].city);
    }
    printf("\nHouse details:\n");
    for (int i = 0; i < 2; i++) {
        printf("House %d: %d rooms, built in %d, located in %s\n", i + 1, n[i].room_quantity, n[i].established_year, n[i].city);
    }
    return 0;
}