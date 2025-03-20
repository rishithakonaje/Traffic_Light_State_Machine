#include <stdio.h>
#include <unistd.h>  
#include "traffic.h"

int main() {
    TrafficLightFSM fsm = {GREEN_NS};

    while (1) {
        print_state(&fsm);
        sleep(3);
        next_state(&fsm);
    }

    return 0;
}
