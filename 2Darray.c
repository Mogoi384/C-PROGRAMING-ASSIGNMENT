//2D ARRAY FOR ROOM OCCUPANCY
/*
NAME:MOGOI IGNATIUS
REG NO:PA106/G/28834/25
DESCRIPTION:A C program of 2D array for room occupancy
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLOORS 5
#define ROOMS_PER_FLOOR 10

int main() {
    int occupancy[FLOORS][ROOMS_PER_FLOOR];
    int i, j;
    
    srand(time(NULL));
    
    for (i = 0; i < FLOORS; i++) {
        for (j = 0; j < ROOMS_PER_FLOOR; j++) {
            occupancy[i][j] = rand() % 2; 
        }
    }
    
    printf("\tRoom Occupancy Report\n");
    printf("\n");
    printf("\toccupied:,\tvacant:\n");
    
    for (i = 0; i < FLOORS; i++) {
        int occupied = 0;
        int vacant = 0;
        
        for (j = 0; j < ROOMS_PER_FLOOR; j++) {
            if (occupancy[i][j] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }
        
        printf("Floor %d: \t%d ,\t %d \n", i + 1, occupied, vacant);
    }
    
    return 0;
}