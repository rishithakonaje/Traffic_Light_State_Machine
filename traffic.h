#ifndef TRAFFIC_H
#define TRAFFIC_H

// Enum for traffic light states
typedef enum {
    GREEN_NS,   // North-South Green
    YELLOW_NS,  // North-South Yellow
    GREEN_EW,   // East-West Green
    YELLOW_EW   // East-West Yellow  
} TrafficLightState;

//FSM structure
typedef struct {
    TrafficLightState current_state;
} TrafficLightFSM;

// Function prototypes
void next_state(TrafficLightFSM *fsm);
void print_state(TrafficLightFSM *fsm);

#endif
