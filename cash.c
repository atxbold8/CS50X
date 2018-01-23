#include <stdio.h>
#include <cs50.h>
int get_change (float n);

int main(void){

float change;
int cents = 0; //initialize variable to convert dollars in float to cents using integers
int counter = 0; // coin counter

    do
    {
        change = get_float("How much change do you need? ");
        cents=get_change (change);  // convert dollars (float type) to cents (int type) with new function
    }
    while (change <= 0);

    while (cents > 0){

    if (cents >=25){
        cents = cents - 25;
        counter++;
    }
    else if (cents >=10){
        cents = cents - 10;
        counter++;
    }
     else if (cents >=5){
        cents = cents - 5;
        counter++;
    }
     else{
        cents = cents - 1;
        counter++;
    }
    }
    printf("Change = %i\n", counter);
    printf("\n");

return 0;
}
//Function converts float to integers
int get_change (float n)
{
    int i = 0;

    i = n * 100;
    return i;
}
