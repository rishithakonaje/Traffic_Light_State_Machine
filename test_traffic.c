#include <stdio.h>
#include <assert.h>
#include "traffic.h"

// Test function to verify FSM transitions
void test_traffic() {
    TrafficLightFSM fsm = {GREEN_NS};

    printf("Running test cases...\n");

    next_state(&fsm);
    printf("State after 1st transition: %d\n", fsm.current_state);
    assert(fsm.current_state == YELLOW_NS);

    next_state(&fsm);
    printf("State after 2nd transition: %d\n", fsm.current_state);
    assert(fsm.current_state == GREEN_EW);

    next_state(&fsm);
    printf("State after 3rd transition: %d\n", fsm.current_state);
    assert(fsm.current_state == YELLOW_EW);

    next_state(&fsm);
    printf("State after 4th transition: %d\n", fsm.current_state);
    assert(fsm.current_state == GREEN_NS);

    // Edge case: invalid state handling
    fsm.current_state = 99; // Incorrect state
    next_state(&fsm);
    printf("State after invalid state correction: %d\n", fsm.current_state);
    assert(fsm.current_state == GREEN_NS);

    printf("All test cases passed successfully!\n");
}

int main() {
    test_traffic();
    return 0;
}
