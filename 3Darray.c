//3D ARRAY FOR MULTIPLE BRANCHES
/*
NAME:MOGOI IGNATIUS
REG NO:PA106/G/28834/25
DESCRIPTION:A C program of 3D array for multiple branches
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int i, j, k, total = 0;
    
    srand(time(NULL));
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 10; k++) {
                chain[i][j][k] = rand() % 2;
                total += chain[i][j][k];
            }
        }
    }
    
    printf("%d", total);
    return 0;
}