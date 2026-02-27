#include <stdio.h>
#include <math.h>
int InToMile = 63360;
int InToFur = 7920;
int InToCh = 792;
int InToYd = 36;
int InToFt = 12;
int main(void) {
    int length1, length2, length3, total; //placeholder values for expected user inputs
    double miles;
    printf("please enter two lengths (in inches): \n");
    scanf("%d %d", &length1, &length2);
    printf("the current total is: %d inches \n", length1+length2);
    printf("please input a third length (in inches) to add to the total: \n");
    scanf("%d", &length3);
    total = length1+length2+length3;
    printf("the new total is: %d inches \n", total);
    //this is where the total (in inches) gets converted to miles
miles = (double)total / InToMile;
    //round mile result to 4 decimal places
    miles *= 10000;
    round(miles);
    miles /= 10000;
    printf("total value in miles is: %.4lf \n", miles);
    // break down above value into miles, furlongs, chains, yds, ft, in
printf("number of miles: %d \n", total/InToMile);
    total = total % InToMile;
    printf("number of furlongs: %d \n", total/InToFur);
    total = total % InToFur;
    printf("number of Chains: %d \n", total/InToCh);
    total = total % InToCh;
    printf("number of yards: %d \n", total/InToYd);
    total = total % InToYd;
    printf("number of feet: %d \n", total/InToFt);
    total = total % InToFt;
    printf("number of inches: %d \n", total);
    //extra operations part
    int number;

    printf("please input a single number to do operations on: \n");
    scanf("%d", &number);
    printf("the number squared is: %d \n", number*number);
    printf("the number raised to the power of 5 is: %f \n", pow(number, 5));
    printf("the square root of the number is: %f \n", sqrt(number));
    printf("the number multiplied by Pi is: %lf \n", number*M_PI);
    printf("the square root of 2 is: %lf \n", M_SQRT2);
    return 0;
}
