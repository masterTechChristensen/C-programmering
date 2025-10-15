#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char names[5][30];      // Array to store up to 5 names
    int count = 0;
    bool running = true;

    printf("Name Collector\n");
    printf("Type 'exit' to stop entering names.\n");

    // While loop for continuous input
    while (running && count < 5) {
        printf("Enter a name: ");
        fgets(names[count], 30, stdin);

        // remove newline character
        names[count][strcspn(names[count], "\n")] = '\0';

        // Boolean expression: check if name is "exit"
        if (strcmp(names[count], "exit") == 0 || strcmp(names[count], "EXIT") == 0) {
            running = false;
        } else {
            count++;
        }
    }

    // for loop to print the stored names
    printf("\nYou entered %d name(s):\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

   

    return 0;
}
