#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Varibles\n");
    char MyName[] = "Eric";
    char BroName[] = "Bill";
    int MyAge = 32;
    int BroAge = 90;
    printf("Hello my name is %s Shade.\n", MyName);
    printf("I love to learn new things about computers.\n");
    printf("I am %d years old.\n", MyAge);
    printf("My brothers name is %s.\n", BroName);
    printf("%s is %d years old.\n", BroName, BroAge);

    /*Data Types*/
    int number = 67;
    double decimalNumber = 6.7;
    char character = 'A';
    char string[] = "Calvin Shadle"; /*The [] is there because it tells the computer its a string of chracters.*/

    /* Printf */
    int favNum = 599;
    printf("Hello\"World\n"); /* This will include the " when printing the data */
    printf("My favorite %s is %d. I also like %f\n", "number", favNum, 43.541); /* %d is going to allow inclusion of numbers, %s for text. %f is decimal.
    %c is Single character. Also the order of the %'s is the order the varibles need to be in at the end */

    /* Working with Number */
    printf("%f\n", 8.9 + 4.5);
    printf("%f\n", 8.9 - 4.5);
    printf("%f\n", 8.9 * 4.5);
    printf("%f\n", 8.9 / 4.5);
    printf("%f\n", 5 / 4.0); /* You have to do it as a float/double to get the full answer */
    printf("%f\n", pow(2, 3) ); /* Will give 2 to the power of 3. Has to be %f */
    printf("%f\n", sqrt(36) ); /* Gives Sqaure root of entered number */
    printf("%f\n", ceil(35.265) ); /* Will round it up to the next whole number */
    printf("%f\n", floor(45.932) ); /* Will round down to the next whole number */
    /* Google C math functions for lots more to play around with and use */

    /* Constants */
    const int FAV_NUM = 34; /* const make the varible not be able to change. printf("%d", 70); would also be a constant */
    printf("%d\n", FAV_NUM);

    /* Get User Input */

    int UserAge;
    printf("Please enter your age: ");
    scanf("%d", &UserAge); /*scanf is what looks for user input. Need to use & if you want to store in varible */
    printf("You are %d years old!\n", UserAge);

    double UserGpa;
    printf("Please enter your gpa: ");
    scanf("%lf", &UserGpa);
    printf("You're GPA is %f!\n", UserGpa);

    /*
    Need to figure out

    char UserName[20]; /* You have to specify how many character max you can have in the varible
    printf("Please enter your name: ");
    fgets(UserName, 20, stdin); /* Don't need to use the &. Use fgets instead of scanf because it can except a whole line of characters, not just one word */
    /* stdin means it is excepting standard input
    printf("You're name is %s", UserName);
    */

    return 0;
}
