# Traffic_Light_State_Machine

## Overview
This project implements a finite state machine (FSM) for a traffic light system at a four-way intersection using C and a Makefile. The system cycles through traffic light states and provides real-time console output.

### Features
- Finite State Machine (FSM) implementation for traffic light transitions.
- Real-time simulation of traffic light changes.
- Test suite included for verifying correct state transitions.
- Makefile support for easy compilation and testing.

## Getting Started

### Prerequisites
Ensure you have GCC (GNU Compiler Collection) installed on your system.

### Compilation
To compile the program and tests, run:
```
make
```
This generates two executables:

- traffic → Runs the traffic light simulation.
- test_traffic → Runs the test suite.

### Running the Simulation
Start the traffic light simulation with:
```
make run
```
- The console will display the current traffic light state every 3 seconds.
- To exit, press **`Ctrl+C`**.

To test the traffic light simulation with cases:
```
./test_traffic
```
To clean any unecessary files after the compilation:
```
make clean
```

## Implementation Details
### Traffic Light States
The FSM cycles through the following states:

GREEN_NS → North-South Green, East-West Red
YELLOW_NS → North-South Yellow, East-West Red
GREEN_EW → East-West Green, North-South Red
YELLOW_EW → East-West Yellow, North-South Red

### Key Functions
- next_state(TrafficLightFSM *fsm)
  - Transitions to the next state based on the current state.
  - Resets to GREEN_NS if an invalid state is detected.
- print_state(TrafficLightFSM *fsm)
  - Displays the current state of the traffic light system.
- main()
  - Runs the FSM in a loop with a 3-second delay.
    
## Future Enhancements
- Add pedestrian signals with wait buttons.
- Introduce timing adjustments for peak and off-peak hours.
- Add real time durations for state switch.
