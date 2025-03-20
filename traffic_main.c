#include <stdio.h>
#include <unistd.h>  // For sleep()
#include "traffic.h"

int main() {
    TrafficLightFSM fsm = {GREEN_NS};
    char input;

    while (1) {
        print_state(&fsm);
        sleep(3);
        next_state(&fsm);

        printf("Press 'q' to stop: ");
        input = getchar();
        if (input == 'q' || input == 'Q') {
            printf("Exiting traffic light system.\n");
            break;
        }
    }

    return 0;
}
