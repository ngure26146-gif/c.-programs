//simple c pprogram

/* 
NAME: NGURE MARK MUCHIRII
REGNO: CT100/G/26146/25
DESCRIPTION: HOTEL MONITORING REVENUE AND ROOM OCCUPANCY
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DAYS_IN_WEEK 7
#define FLOORS 5
#define ROOMS_PER_FLOOR 10
#define BRANCHES 3

void inputRevenue(float revenue[DAYS_IN_WEEK]) {
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
    }
}

void displayWeeklyRevenue(float revenue[DAYS_IN_WEEK]) {
    float total = 0;
    for (int i = 0; i < DAYS_IN_WEEK; i++) {
        total += revenue[i];
    }
    printf("Total weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", total / DAYS_IN_WEEK);
}

void simulateRoomOccupancy(int occupancy[FLOORS][ROOMS_PER_FLOOR]) {
    for (int i = 0; i < FLOORS; i++) {
        for (int j = 0; j < ROOMS_PER_FLOOR; j++) {
            occupancy[i][j] = rand() % 2; // 0 for vacant, 1 for occupied
        }
    }
}

void displayOccupancy(int occupancy[FLOORS][ROOMS_PER_FLOOR]) {
    for (int i = 0; i < FLOORS; i++) {
        int occupied = 0, vacant = 0;
        for (int j = 0; j < ROOMS_PER_FLOOR; j++) {
            if (occupancy[i][j] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }
        printf("Floor %d: Occupied rooms: %d, Vacant rooms: %d\n", i + 1, occupied, vacant);
    }
}

int countTotalOccupiedRooms(int occupancy[BRANCHES][FLOORS][ROOMS_PER_FLOOR]) {
    int totalOccupied = 0;
    for (int b = 0; b < BRANCHES; b++) {
        for (int f = 0; f < FLOORS; f++) {
            for (int r = 0; r < ROOMS_PER_FLOOR; r++) {
                if (occupancy[b][f][r] == 1) {
                    totalOccupied++;
                }
            }
        }
    }
    return totalOccupied;
}

int main() {
    float revenue[DAYS_IN_WEEK];
    int occupancy[FLOORS][ROOMS_PER_FLOOR];
    int branchOccupancy[BRANCHES][FLOORS][ROOMS_PER_FLOOR];

    srand(time(0));

    // 1D Array - Weekly Revenue Tracker
    printf("Enter weekly revenue:\n");
    inputRevenue(revenue);
    displayWeeklyRevenue(revenue);

    // 2D Array - Room Occupancy (One Branch)
    printf("\nSimulating room occupancy for one branch:\n");
    simulateRoomOccupancy(occupancy);
    displayOccupancy(occupancy);

    // 3D Array - Multiple Branches
    printf("\nSimulating room occupancy across multiple branches:\n");
    for (int b = 0; b < BRANCHES; b++) {
        simulateRoomOccupancy(branchOccupancy[b]);
    }
    
    int totalOccupiedRooms = countTotalOccupiedRooms(branchOccupancy);
    printf("Total occupied rooms across all branches: %d\n", totalOccupiedRooms);

    return 0;
}