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
    printf("Enter bounce house selection: ");
    scanf("%d", &bounceHouse);

    //Checking to see if user bounce house selection is valid.
    if (bounceHouse < 1 || bounceHouse > 4) { 
    printf("Invalid selection. Select from 1 to 4.");
    return 1; //Terminating program if invalid input is detected.
    }

    printf("Enter days: ");
    scanf("%d", &days);

    printf("Enter hours: ");
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

            //Checking if hourly rental cost exceeds per day maximum.
            if (hours * bounce1[2] < bounce1[1]) {
                charge += hours * bounce1[2];
            } else {
                //Per day maximum is added to rental charge.
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
    
    case 2:
        if (days >= 1) {
            charge += (days * bounce2[3]);
            
            if (hours * bounce2[2] < bounce2[1]) {
                charge += hours * bounce2[2];
            } else {
                charge += bounce2[3];
            }
            printf("Charge($): %d", charge);

        } else if (hours <= 3) {
            charge += bounce2[1];
            printf("Charge($): %d", charge);

        } else if (bounce2[1] + (hours * bounce2[2]) < bounce2[3]) {
            charge += bounce2[1] + (bounce2[2] * (hours - 3));
            printf("Charge($): %d", charge);

        } else if (bounce2[1] + (hours * bounce2[2]) > bounce2[3]) {
            charge += bounce2[3];
            printf("Charge($): %d", charge);
        }
        break;

    case 3:
        if (days >= 1) {
            charge += (days * bounce3[3]);
            
            if (hours * bounce3[2] < bounce3[1]) {
                charge += hours * bounce3[2];
            } else {
                charge += bounce3[3];
            }
            printf("Charge($): %d", charge);

        } else if (hours <= 3) {
            charge += bounce3[1];
            printf("Charge($): %d", charge);

        } else if (bounce3[1] + (hours * bounce3[2]) < bounce3[3]) {
            charge += bounce3[1] + (bounce3[2] * (hours - 3));
            printf("Charge($): %d", charge);

        } else if (bounce3[1] + (hours * bounce3[2]) > bounce3[3]) {
            charge += bounce3[3];
            printf("Charge($): %d", charge);
        }
        break;

    case 4:
        if (days >= 1) {
            charge += (days * bounce4[3]);
            
            if (hours * bounce4[2] < bounce4[1]) {
                charge += hours * bounce4[2];
            } else {
                charge += bounce4[3];
            }
            printf("Charge($): %d", charge);

        } else if (hours <= 3) {
            charge += bounce4[1];
            printf("Charge($): %d", charge);

        } else if (bounce4[1] + (hours * bounce4[2]) < bounce4[3]) {
            charge += bounce4[1] + (bounce4[2] * (hours - 3));
            printf("Charge($): %d", charge);

        } else if (bounce4[1] + (hours * bounce4[2]) > bounce4[3]) {
            charge += bounce4[3];
            printf("Charge($): %d", charge);
        }
        break;

    default:
        break;
    }

    return 0;
}
