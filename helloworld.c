/* This is a multi-line comment in C and this is
used to write a lot of something in one comment*/

#include <stdio.h>

int main() {
    // This is how you create constant variables whose values don't change:
    const double PI = 3.14;

    // create integer variable for age
    int age = 22;

    // Using variables to initiate data and then change the data
    char ch = 'a';

    /* Now we change - note that you cannot change the variable type 
    or type of value within a variable*/

    ch = 'l'; // Note that chars have single quotes ''

    // print the variables
    // Use the first letter of data type to print each variable!
    printf("Age: %d \n", age);
    printf("The first 3 numbers of PI are: %f \n", PI);
    printf("The charactaer is: %c \n", ch);

    return 0;
}