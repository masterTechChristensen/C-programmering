#include <stdio.h>

    // i make a default number for altitude
    int altitude = 0;
    
int main() {
    //here i ask the user to enter the altitude
    printf("enter the altitude\n");
    //here i scan the altitude
    scanf("%d",&altitude);
    //here i print the altitude
    printf("the altitude is %d\n", altitude);
    //here i check if the altitude is between 0 and 100
    if (0<altitude && altitude <= 100){
        //i use and to have both criteria in the same box so its much nicer
        //here i print the thruster is on because the altitude is between 0 and 100
        // only turns on if the altitude is more than 0 and less than or equal to 100
       printf("the thruster is on\n");

    } 
 else {//here i print the thruster is off because the altitude is not between 0 and 100
        printf("the thruster is off\n");
    }

    return 0;
}



