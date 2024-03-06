#include<stdio.h>
int main()
{
    int age;
    char favouriteCharacter;
    const double myIncome = 12000;
    float favShirtPrice = 12.5;

    // Working with integer
    printf("How old are you?");
    scanf("%d", &age);
    printf("I'm %d years old \n", age);

    // Working with charcter
    printf("What is your favorite charcter?");
    scanf(" %c", &favouriteCharacter);
    printf("My favorite character is: %c \n", favouriteCharacter);
    // in C characters are stored in memory as  ASCII value
    printf("ASCII value of \'%c\' is %d \n", favouriteCharacter, favouriteCharacter);

    // Print double
    printf("My stable income is: %lf \n", myIncome);
    // Print float
    printf("My shirt price is: %f", favShirtPrice);
}
