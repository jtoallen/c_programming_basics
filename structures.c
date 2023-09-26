#include <stdio.h>
#include <string.h>

// int main()
// {
//     // these lines only DEFINE the STRUCTURE type and members of the structure
//     struct bank
//     {
//         int account;
//         float balance;
//     };

//     // this DECLARES a structure VARIABLE of the BANK type.
//     struct bank checking, savings; // declaring 2 instances of bank at same time

//     checking.account = 1234000; // use member name followed by dot notation to assign values to struct variable
//     checking.balance = 865307.88;

//     savings.account = 5678000;
//     savings.balance = 5000000.10;

//     printf("The checking account number %d has a balance of %.2f and savings account numnber %d has %.2f\n",
//            checking.account, checking.balance, savings.account, savings.balance);
//     // printf("The savings account %d has a balance of %f\n",
//     //        savings.account,
//     //        savings.balance);

//     return (0);
// }

////Instance of person with a pre-defined string for char name.
// int main()
// {
//     // next few lines DEFINE person struct
//     struct person
//     {
//         char name[32];
//         int age;
//     };

//     // these few lines DECLARES president var and assigns values to name and age
//     struct person president = {
//         "George Washington",
//         67};

//     //%s is string place holder
//     printf("%s was %d years old\n", president.name, president.age);

//     return (0);
// }

// when string char name is not pre-defined you must use fgets() input function
// or strcpy to assign a name.  CANNOT USE person.president = "George Washington"
//  STRING ASSINGMENT LIKE THIS WILL NOT WORK

int main()
{
    struct date
    {
        int year;
        int month;
        int day;
    };

    struct person
    {
        char name[32];
        struct date birthday;     // structure birthday is member of date struct
        struct date inaguaration; // having structure for date allows reuse of
        struct date termEnd;      // code like use for birthday, inauguration, termEnd
    };

    struct person friend; // type of data struct, struct name, varName

    strcpy(friend.name, "George Washington"); // use strcpy function to assign value to friend.name because C does not use friend.name = "George Washington"
    friend.birthday.year = 1732;              // values for ints and floats can be assigned with equals operator like this friend.birthday.year = 1732
    friend.birthday.month = 2;
    friend.birthday.day = 22;
    friend.inaguaration.year = 1789;
    friend.termEnd.year = 1797;

    printf("%s was born %d/%d/%d and served from %d to %d\n",
           friend.name, friend.birthday.month, friend.birthday.day,
           friend.birthday.year, friend.inaguaration.year, friend.termEnd.year);

    return (0);
}