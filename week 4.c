#include <stdio.h>
#include <stdlib.h>  
#include <time.h>   

int main() {
    srand(time(NULL));   // random generator

    // 1. Generate random number between 1 and 3
    int randomNumber = (rand() % 3) + 1;

    // 2. Ask user to press a key
    printf("Press a number (1, 2 or 3): ");
    char ch = getchar();  // read single character
    int userNumber = ch - '0';  // convert char to int

    // 3. Use switch statement to do different actions
    switch (userNumber) {
        case 1:
            printf("You chose 1: Turning LED ON\n");
            break;
        case 2:
            printf("You chose 2: Turning LED OFF\n");
            break;
        case 3:
            printf("You chose 3: Blinking LED\n");
            break;
        default:
            printf("false input\n");
            return 0;
    }

    // 4. Use if-else to compare with random number
    printf("Random number generated: %d\n", randomNumber);

    if (userNumber == randomNumber) {
        printf("Match Good job.\n");
    } else {
        printf("No match. Try again.\n");
    }

    printf("end.\n");
    return 0;
}
