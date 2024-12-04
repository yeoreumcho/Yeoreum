#include <stdio.h>
#include "rank.h"

int main() {
    int p, m;
    scanf_s("%d %d", &p, &m);

    input_players(p);
    assign_rooms(p, m);
    print_rooms(m);

    return 0;
}