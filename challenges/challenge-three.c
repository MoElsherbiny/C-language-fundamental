#include <stdio.h>

/**
 * A vehicle leaves from city A to city B
 * you know the distance from A to B as well as the speed
 * how long it takes the car to reach form A to B
 *
 */

/**
 * Initialize the distance and the speed
 * Initialize the time takes to arrive
 * print("ask the user to print the distance");
 * scanf("to store the distance")
 * print("ask the user to print the speed");
 * scanf("to store the speed of the car");
 * Time = distance / speed km/hour * 60min
 */

int main()
{
    float distance, speed, time;
    printf("Hello Can you give me the distance between the two targets on the map by (km) : ");
    scanf("%f", &distance);
    printf("Can you provide the speed you are going with by (km/hour): ");
    scanf("%f", &speed);
    time = (distance / speed) * 60;
    printf("Here is the expected re-arrival for the specified location: %.fmin\n", time);
    return 0;
}
