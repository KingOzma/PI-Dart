/* CS 153 PROGRAM 6 – Pi Dart
 DATE:3/13/19
 DESCRIPTION: The program is to simulate the throw of 1000 darts (or more) and to keep track how many darts fall inside the circle
and then use this number to calculate π.
*/

#include <stdio.h>
#include <stdlib.h>
void getRandomXY(float *x, float *y)
{
    *x = (double)rand()/RAND_MAX;
    *y = (double)rand()/RAND_MAX;
}
int insideCircle(float x, float y)
{
    if(x*x + y*y <= 1)
    return 1;
    return 0;
}

int main()
{
    float x, y, pi;
    int i, numberOfDartsInSquare = 10000, numberOfDartsInCircle = 0;
    printf("Enter the number of times the dart is thrown: ");
    scanf("%d", &numberOfDartsInSquare);
    for(i = 0; i < numberOfDartsInSquare; i++)
{
    getRandomXY(&x, &y);
    if(insideCircle(x, y))
    numberOfDartsInCircle++;
}
    pi = 4.0 * (float)numberOfDartsInCircle / numberOfDartsInSquare;
    printf("The Monte Carlo PI estimate for %i number of darts is: %f\n", numberOfDartsInSquare, pi);
}