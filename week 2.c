#include <stdio.h>

//string to represent data:
char data[] = "Hello\n";
int a = 5;
float b = 5.2;


int main() {
    printf("string example: %s\n", data);//to represent data which is a string
    printf("interger example: %d\n", a);// to represent data which is an integer
    printf("b: %.2f\n", b);// to represent data which is a float(with 2 decimal places)
    printf("if we try to represent a float as a integer we lose data: %d\n",b);// to represent data which is a float as an integer we lose data
    return 0;
}
