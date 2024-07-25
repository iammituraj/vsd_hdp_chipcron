//*****************************************************************//
// Program     : Counter
// Description : Program to count fronm 0-15 every 500ms
// Developer   : Mitu Raj
// Date        : 23-07-2024
//*****************************************************************//
// Libraries
#include <stdio.h>
#include <time.h>

//** User defined functions **//
// Delay function: to add delay in microseconds
void delay(long int n) {
    // Local variables
    int us = n;
    // Read current time & add wait time
    clock_t start_time = clock();  // Unit = clocks
    while (clock() < start_time + (us * CLOCKS_PER_SEC / 1000000));
}

// Display function: to display counter value
void display(int count)
{
    printf("Count value is = %d\n", count);                      
}

//** Main **//
int main()
{
    // Local variables
    int count = 0 ;
    printf("Counter initialized to %0d", count);

    // Forever...
    while (1)
    {
        // Display count 0-15
        display(count);
        count++;
        if (count == 16) count = 0 ; 
        delay(500000);   // delay by 500000us = 0.5s
    }
    return 0 ;
}