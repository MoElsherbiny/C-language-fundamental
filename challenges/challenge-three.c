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
    int distance, speed;
    printf("Hello Can you give me the distance between the two targets on the map by (km) : ");
    scanf("%d", &distance);
    printf("Can you provide the speed you are going with by (km/hour): ");
    scanf("%d", &speed);
    int hours = distance / speed;
    float speedInMinutes = speed / 60.0;
    int remainingMinutes = (distance % speed) / speedInMinutes;
    printf("Here is the expected re-arrival for the specified location: %d hours and %d min\n", hours, remainingMinutes);
    return 0;
}
