#include <stdio.h>
#include "traffic.h"

// Function to transition to the next state
void next_state(TrafficLightFSM *fsm) {
    switch (fsm->current_state) {
        case GREEN_NS:
            fsm->current_state = YELLOW_NS;
            break;
        case YELLOW_NS:
            fsm->current_state = GREEN_EW;
            break;
        case GREEN_EW:
            fsm->current_state = YELLOW_EW;
            break;
        case YELLOW_EW:
            fsm->current_state = GREEN_NS;
            break;
        default:  //invalid states
            fsm->current_state = GREEN_NS;
            printf("Warning: Invalid state encountered. Resetting to GREEN_NS.\n");
            break;
    }
}

// Function to print the current state
void print_state(TrafficLightFSM *fsm) {
    switch (fsm->current_state) {
        case GREEN_NS:
            printf("Traffic Light State: North-South GREEN, East-West RED\n");
            break;
        case YELLOW_NS:
            printf("Traffic Light State: North-South YELLOW, East-West RED\n");
            break;
        case GREEN_EW:
            printf("Traffic Light State: East-West GREEN, North-South RED\n");
            break;
        case YELLOW_EW:
            printf("Traffic Light State: East-West YELLOW, North-South RED\n");
            break;
        default:
            printf("Warning: Invalid state encountered. Cannot print state.\n");
            break;
    }
}
