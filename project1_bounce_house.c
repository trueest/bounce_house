/*
* Name: Hunter Hawkins - U13938229
* Email: hunterhawkins@usf.edu 
* Assignment: Project 1
* This C program will calculate the cost for a bounce house rental using the provided rates for
* hours, days, and maximum per day. The program will determine if user input is valid and will 
* quit if the user enters an invalid value.
*/

// ADDING LIBRARIES
#include <stdio.h> 

int main() {

/* Initializing our four bounce houses by using arrays. I would prefer to use doubles for 
* accuracy however the requirements cater towards integers. 
*/
    int bounce1[] = {1, 58, 8, 80};
    int bounce2[] = {2, 85, 12, 120};
    int bounce3[] = {3, 100, 15, 150};
    int bounce4[] = {4, 180, 20, 250};

    //Initializing user variables for calculations.
    int bounceHouse = 0, days = 0, hours = 0, charge = 0;

    printf("Please select from four bounce houses 1, 2, 3, and 4 \n");
    scanf("%d", &bounceHouse);

    //Checking to see if user bounce house selection is valid.
    if (bounceHouse < 1 || bounceHouse > 4) { 
    printf("Invalid selection. Select from 1 to 4.");
    return 1;
    }

    printf("Enter days \n");
    scanf("%d", &days);

    printf("Enter hours \n");
    scanf("%d", &hours);

    //Checking to see if user hours are valid.
    if (hours < 0 || hours > 24) {
        printf("Invalid hours.");
        return 1;
    }

    //Begin charge calculations using validated user data.
    switch (bounceHouse)
    {
    case 1:
        //Calculating a multi-day rental charge.
        if (days >= 1) {
            charge += (days * bounce1[3]);
            if (hours * bounce1[2] < bounce1[1]) {
                charge += hours * bounce1[2];
            } else {
                charge += bounce1[3];
            }
            printf("Charge($): %d", charge);

        //Calculating a sub 3 hour rental charge.
        } else if (hours <= 3) {
            charge += bounce1[1];
            printf("Charge($): %d", charge);

        //Calcuating an hourly rental charge that does not exceed per day maximum.
        } else if (bounce1[1] + (hours * bounce1[2]) < bounce1[3]) {
            charge += bounce1[1] + (bounce1[2] * (hours - 3));
            printf("Charge($): %d", charge);

        //Calcuating an hourly rental charge that does exceeds per day maximum.
        } else if (bounce1[1] + (hours * bounce1[2]) > bounce1[3]) {
            charge += bounce1[3];
            printf("Charge($): %d", charge);
        }
        break;
    
    default:
        break;
    }

    return 0;
}