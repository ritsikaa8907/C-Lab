// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

int main() {
    enum TrafficLight { RED, YELLOW, GREEN };
    enum TrafficLight signal = RED;

    if (signal == RED)
        printf("Stop\n");
    else if (signal == YELLOW)
        printf("Wait\n");
    else
        printf("Go\n");

    return 0;
}
